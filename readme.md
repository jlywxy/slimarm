# SlimARM Boards

The project is aiming to manufacture custom-made boards of ARM processors(specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
Document Version: 0.1<br>

## Project Status
[..](legacy project) us3c ultra 1.0 (Samsung S3C2410AL)<br>
[..]SlimARM A20 (AllWinner A20)<br>
[..]SlimARM ARMPLD (Xilinx XC7Z010)<br>
[  ]SlimARM Rocket (Rockchip RK3326/RK3128)<br>
[  ]SlimARM ?<br>
....<br>

## Board Specification

* Note: see each board design in their directories when board design is done.<br>

1. SlimARM A20<br>
A board with minimum ARM requirements with USB, SDIO and Wi-Fi. <br>
This is specified for "On-The-Go" Linux experience similar to the RaspberryPi.<br>

2. SlimARM ARMPLD<br>
A board intented to support variable external IO standards supported by the PL part of Xilinx Zynq 7000 devices.<br>
The board is made for IO experiments to the odd devices (eg. not standard LCD interfaces.). <br>
These IOs will be extended to a under board through board-to-board connectors.<br>

3. SlimARM Rocket<br>
A board with strong network support, working as a router or server. <br>

4. us3c ultra<br>
A board with minimum ARM requirements with USB, SDIO.<br>
This is the first specially designed board pointing to low cost.<br>
The board is also the entry of researching ARM bare-metal code execution.<br>
