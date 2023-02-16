# SlimARM Boards

The project is aiming to manufacture custom-made boards of ARM processors(specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
Document Version: 0.2<br>

- --

## Project Status
[..]SlimARM Zero (AllWinner A20)<br>
[..]SlimARM Fusion-7z (Xilinx XC7Z010)<br>
[  ]SlimARM Rocket-r3l (Rockchip RK3326/RK3128)<br>
[  ]SlimARM Mind-? (?)<br>
[  ]SlimARM ?<br>
[ok](legacy project/EOL) us3c ultra (Samsung S3C2410AL)<br>
....<br>

* Note: [ok] means work done, [..] means work doing, [  ] means work firstlly created.

- --

## Board Specification

* Note 1: see each board design in their directories when board design is done.<br>
* Note 2: all board are designed with proper PCB constraints, even SDR SDRAMs are tuned in length.

1. SlimARM Zero<br>
A board with minimum ARM requirements with USB, SDIO and Wi-Fi. <br>
This is specified for "On-The-Go" Linux experience similar to the RaspberryPi.<br>

2. SlimARM Fusion<br>
A board intented to support variable external IO standards supported by the PL part of Xilinx Zynq 7000 devices.<br>
The board is made for IO experiments to the odd devices (eg. not standard LCD interfaces.), or implementing calculating acceleration. <br>
These IOs will be extended to a under board through board-to-board connectors.<br>

3. SlimARM Rocket<br>
A board with strong performance. <br>

4. SlimARM Mind<br>
THe board designed for locallized machine learning. 

5. us3c ultra<br>
A board with minimum ARM requirements with only USB extended.<br>
This is the first specially designed board pointing to low cost.<br>
The board is also the entry of researching ARM bare-metal code execution.<br>
Note: this part is EOL.


