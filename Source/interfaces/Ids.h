#pragma once

namespace WPEFramework {
namespace Exchange {

    enum IDS {
        ID_BROWSER = 0x00000040,
        ID_BROWSER_NOTIFICATION = 0x00000041,
        ID_POWER = 0x00000042,
        ID_PLAYGIGA = 0x00000043,
        ID_COMMAND = 0x00000044,
        ID_COMMAND_REGISTRATION = 0x00000045,
        ID_COMPOSITION = 0x00000046,
        ID_COMPOSITION_CLIENT = 0x00000047,
        ID_COMPOSITION_NOTIFICATION = 0x00000048,
        ID_DICTIONARY = 0x00000049,
        ID_DICTIONARY_NOTIFICATION = 0x0000004A,
        ID_DICTIONARY_ITERATOR = 0x0000004B,
        ID_EXTERNAL = 0x0000004C,
        ID_EXTERNAL_NOTIFICATION = 0x0000004D,
        ID_EXTERNAL_FACTORY = 0x0000004E,
        ID_EXTERNAL_FACTORY_NOTIFICATION = 0x0000004F,
        ID_KEYHANDLER = 0x00000050,
        ID_KEYPRODUCER = 0x00000051,
        ID_MEMORY = 0x00000052,
        ID_NETFLIX = 0x00000053,
        ID_NETFLIX_NOTIFICATION = 0x00000054,
        ID_CONTENTDECRYPTION = 0x00000055,
        ID_PROVISIONING = 0x00000056,
        ID_PROVISIONING_NOTIFICATION = 0x00000057,

        ID_SWITCHBOARD = 0x0000005A,
        ID_SWITCHBOARD_NOTIFICATION = 0x0000005B,
        ID_TIMESYNC = 0x0000005C,
        ID_TIMESYNC_NOTIFICATION = 0x0000005D,
        ID_IPNETWORK = 0x0000005E,
        ID_IPNETWORK_DNSSERVER = 0x0000005F,

        ID_GUIDE = 0x00000061,
        ID_GUIDE_NOTIFICATION = 0x00000062,
        ID_VOICEHANDLER = 0x00000063,
        ID_VOICEPRODUCER = 0x00000064,
        ID_WEBDRIVER = 0x00000065,
        ID_WEBSERVER = 0x00000066,
        ID_STREAMING = 0x00000067,
        ID_STREAMING_NOTIFICATION = 0x00000068,
        ID_CAPTURE = 0x00000069,
        ID_RPCLINK_NOTIFICATION = 0x0000006A,
        ID_RPCLINK = 0x0000006B,
        ID_AVNCLIENT = 0x0000006C,

        ID_POWER_NOTIFICATION = 0x0000006E,

        ID_BLUETOOTH = 0x00000070,
        ID_RTSPCLIENT = 0x00000071,

        ID_BROWSER_METADATA = 0x00000078,

        ID_BLUETOOTH_DEVICE = 0x0000007D,
        ID_BLUETOOTH_DEVICE_ITERATOR = 0x0000007E,
        ID_BLUETOOTH_NOTIFICATION = 0x0000007F,
        ID_BLUETOOTH_CALLBACK = 0x00000080,

        ID_SYSTEMCOMMAND = 0x00000082,

        ID_PACKAGER = 0x00000083,
        ID_PACKAGER_INSTALLATIONINFO = 0x00000084,
        ID_PACKAGER_PACKAGEINFO = 0x00000085,
        ID_PACKAGER_NOTIFICATION = 0x00000086,

        ID_SECURESHELLSERVER = 0x00000087,
        ID_SECURESHELLSERVER_CLIENT = 0x00000088,
        ID_SECURESHELLSERVER_CLIENT_ITERATOR = 0x00000089,

        ID_TESTCONTROLLER,
        ID_TESTCONTROLLER_TEST,
        ID_TESTCONTROLLER_TEST_ITERATOR,
        ID_TESTCONTROLLER_CATEGORY,
        ID_TESTCONTROLLER_CATEGORY_ITERATOR,

        ID_TESTUTILITY,
        ID_TESTUTILITY_COMMAND,
        ID_TESTUTILITY_ITERATOR,

        ID_ROOMADMINISTRATOR,
        ID_ROOMADMINISTRATOR_NOTIFICATION,
        ID_ROOMADMINISTRATOR_ROOM,
        ID_ROOMADMINISTRATOR_ROOM_CALLBACK,
        ID_ROOMADMINISTRATOR_ROOM_MSGNOTIFICATION,

        ID_STREAM,
        ID_STREAM_CONTROL,
        ID_STREAM_CONTROL_GEOMETRY,
        ID_STREAM_CONTROL_CALLBACK,
        ID_STREAM_CALLBACK,
        ID_PLAYER,

        ID_DSGCC_CLIENT,
        ID_DSGCC_CLIENT_NOTIFICATION,

        ID_PERFORMANCE,

        ID_WEBPA,
        ID_WEBPA_CLIENT,

        ID_WHEELHANDLER,
        ID_WHEELPRODUCER,
        ID_POINTERHANDLER,
        ID_POINTERPRODUCER,
        ID_TOUCHHANDLER,
        ID_TOUCHPRODUCER,

        ID_STREAM_ELEMENT,
        ID_STREAM_ELEMENT_ITERATOR,

        ID_REMOTECONTROL,
        ID_REMOTECONTROL_NOTIFICATION
    };
}
}
