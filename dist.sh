#!/bin/sh

cd `dirname $0`

#basename=`basename $PWD`
basename=xpcom-sample
version=`grep '<em:version>' install.rdf | sed -e 's,</\?em:version>,,g'`
version=`echo $version | sed -e 's/[[:space:]]//g'`

xpi=$basename-$version.xpi

if [ -f components/Makefile ]; then
    (cd components && make) || exit 1
    component_shared="components/myCalc.so"

    component_xpt="components/myICalc.xpt"
    components="$component_xpt $component_shared"
fi
xpi_contents="content $components chrome.manifest install.rdf"

echo "rm -f $xpi"
rm -f $xpi
echo "zip -q -r -9 $xpi $xpi_contents -x \*/.svn/\* || exit 1"
zip -q -r -9 $xpi $xpi_contents -x \*/.svn/\* || exit 1

echo "..done"