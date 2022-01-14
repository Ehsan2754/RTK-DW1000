# RTK-DW1000 [![Open in Visual Studio Code](https://open.vscode.dev/badges/open-in-vscode.svg)](https://github.dev/Ehsan2754/RTK-DW1000)
![rtk-cover](https://user-images.githubusercontent.com/53513242/147093048-6a41bcb0-b901-4c59-9475-834f17b6417b.png)
## Description
The current repository contains the implemention of an [RTK](https://en.wikipedia.org/wiki/Real-time_kinematic_positioning) positioning system, using [DW1000](https://www.decawave.com/product/dw1000-radio-ic/) ultra wide band module from decawave company on STM32 Coretex M-3 microcontrollers.
## Platform architecture
<p align="center">
   <img src="https://user-images.githubusercontent.com/53513242/147703054-09fcddd4-2871-4817-b732-64cf7bfb7976.png" alt="RTK-DW1000 Platform Architecture Diagram"/>
</p>

## Hardware
* Version 1.0
    * [AI-Thinker UWB module](https://docs.ai-thinker.com/en/uwb)
        * [STM32F103C8](https://www.st.com/en/microcontrollers-microprocessors/stm32f103c8.html)
        * [DW100](https://www.decawave.com/product/dw1000-radio-ic/)
    > You may make your own board using a bluepill and a dw1000 module. Matter of fact, that's what I gotta do next iteration.
    * [TFT LCD  240x320](https://www.digikey.com/en/products/detail/orient-display/AFL240320A0-2-4N12NTM-ANO/13916615) 
## Stack
![GNU Arm Embedded Toolchain](https://img.shields.io/badge/GNUArmEmbeddedToolchain-%23A63C06.svg?style=for-the-badge&logo=gnu&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Make](https://img.shields.io/badge/Make-%230B80BA.svg?style=for-the-badge&logo=cmake&logoColor=white)
![GitHub Actions](https://img.shields.io/badge/githubactions-%232671E5.svg?style=for-the-badge&logo=githubactions&logoColor=white)

* [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/) ```Version 10.3-2021.10```
* [OpenOCD](https://openocd.org/) ```Vesrion 0.11.0``` 
* [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html) ```Vesrion 6.4```
* [HighLevel API](Drivers/API)
    * [Multilateration](Drivers/API/Multilateration.h)
* [Middlewares](Drivers/Middlewares) 
    * [ILI9341](Drivers/Middlewares/ILI9341)
        > Middleware for interfacing to TFT-LCD.
    * [DECAWAVE](Drivers\Middlewares\decawave)
        * Compiler
        * Decadriver
        * Platform
        > Middleware for interfacing DW1000 module.(* I need to say this library is modified a little bit from the original implemention of the api, yet interface is the same.)

## Methodology
TBA
## Resources
TBA
## Changelog

* 2022-01-11
    - Documentation updated
    - Multilateration methode added.  

* 2021-12-31
    - Documentation updated
    - Multi-Anchor Communication 

* 2021-12-22
    - Adding Libraries and Depencencies:
        * ILI934 api
        * DECAWAVE api
    - Adding flash command 
