# SlimARM Classic Almond v2r1a PCB layout points

## PCB constraints

1. 4-layers
2. Minimum Via Diameter: 18 mils/12 mils

## BOM

For SMT-available BOM and position file, checkout the "fab" directory

## Wiring Notice

Index|Item|Comment
-|-|-
1|Cystal             |12MHz + 22pF capacitor
2|EXTCLK             |Pull-up (Not using EXTCLK)
3|nBATT_FLT          |Pull-up (Not using Battery)
4|OM[3,2,1]          |Pull-down (Not using EXTCLK)
5|JTAG               |Pull-up(10k)
6|USB CC             |Pull-down(5.1k)
7|USB DP/DN          |USBD: Pull-up(1.5k)/down(470k)<br>USBH: Pull-up(15k)/down(15k)
8|OM[0]              |Jumpwire (NANDboot: 0)<br>(set 1 for debug without NAND)
9|Bus nWAIT          |Pull-up (Not using nWAIT)
10|USB Impedance     |90(Diff)/45(Single)
11|SDRAM Impedance   |50(Single)
