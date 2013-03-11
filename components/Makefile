CXX = c++
CXXFLAGS = -g -Wall -fno-rtti -fno-exceptions -shared -fPIC

GECKO_PATH = /home/dmiyakawa/utils/xulrunner-sdk
GECKO_SDK_PATH = $(GECKO_PATH)/sdk

GECKO_IDL_PATH = $(GECKO_PATH)/idl
GECKO_LIB_PATH = $(GECKO_PATH)/lib
GECKO_BIN_PATH = $(GECKO_PATH)/bin

XPIDL_XPT = $(GECKO_SDK_PATH)/bin/typelib.py
XPIDL_HEADER = $(GECKO_SDK_PATH)/bin/header.py

GECKO_INCLUDES = -I $(GECKO_PATH)/include -I $(GECKO_PATH)/include/nspr
# GECKO_DEFINES = -DXPCOM_GLUE -DXPCOM_GLUE_USE_NSPR
GECKO_DEFINES =
GECKO_CFLAGS  = $(GECKO_DEFINES) $(GECKO_INCLUDES)

# GECKO_LDFLAGS = -L$(GECKO_LIB_PATH)/ -L$(GECKO_BIN_PATH)
GECKO_LDFLAGS = -L$(GECKO_LIB_PATH)/
GECKO_LIBS =	-lxpcomglue_s			\
		-lxpcom				\
		-lnspr4				\
		-lxul				\
		-lplds4

OBJS = myCalc.o myCalcModule.o

IDL = myICalc.idl
XPT = myICalc.xpt
IHEADER = myICalc.h
SHARED = myCalc.so

all: $(XPT) $(IHEADER) $(SHARED)

$(XPT): $(IDL)
	$(XPIDL_XPT) -I$(GECKO_IDL_PATH) -o $(XPT) $(IDL)

$(IHEADER): $(IDL)
	$(XPIDL_HEADER) -I$(GECKO_IDL_PATH) -o $(IHEADER) $(IDL)

$(SHARED): $(IHEADER) $(OBJS)
	$(CXX) $(CXXFLAGS) $(GECKO_LDFLAGS) -o $(SHARED) $(OBJS) $(GECKO_LIBS)

clean:
	rm -f $(XPT) $(IHEADER) $(OBJS) $(SHARED)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(GECKO_CFLAGS) -c $<
