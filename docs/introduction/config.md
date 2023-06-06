The WPEFramework process should be provided with a JSON config file, which can be used to change the behaviour of Thunder itself. When building Thunder, it will generate a default, sane config file based on the options provided to CMake at configure-time, and the generic config builder here: [https://github.com/rdkcentral/Thunder/blob/master/Source/WPEFramework/GenericConfig.cmake](https://github.com/rdkcentral/Thunder/blob/master/Source/WPEFramework/GenericConfig.cmake)

 This section documents the available options

| Option                | Default Value | Description                                                  |
| --------------------- | ------------- | ------------------------------------------------------------ |
| port                  | 80            | Port Thunder listens for HTTP requests on                    |
| binding               | "0.0.0.0"     | Interface Thunder will bind to. Setting to `0.0.0.0` will listen on all available interfaces. Recommended to set to `127.0.0.1` for production to only allow connections on localhost |
| ipv6                  | false         | Enable or disable IPv6 support                               |
| idletime              |               |                                                              |
| softkillcheckwaittime |               |                                                              |
| hardkillcheckwaittime |               |                                                              |
| persistentpath        |               |                                                              |
| volatilepath          |               |                                                              |
| datapath              |               |                                                              |
| systempath            |               |                                                              |
| proxystubpath         |               |                                                              |
| postmortempath        |               |                                                              |
| redirect              |               |                                                              |
| communicator          |               |                                                              |
| ethernetcard          |               |                                                              |
| process               |               |                                                              |
| exitreasons           |               |                                                              |
| plugins               |               |                                                              |
| messaging             |               |                                                              |
|                       |               |                                                              |

