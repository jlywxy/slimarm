# SlimARM Carambola

## Recommended Software Test Procedure
1. DRAM test:<br>
* DDR controller set and DDR initialization.<br>
use AT91Bootstrap (version 3.x):<br>
(build binary)
```shell
$ cd /path/to/at91bootstrap/code
$ make mrproper
$ make core9g25-128m-nf_defconfig
$ CROSS_COMPILE=arm-none-eabi- make -j8
```
(do not use at91sam9x5ek configuration)
* DDR read/write stability test.<br>
use RAMStepper:<br>
(build binary)
```shell
$ cd /path/to/ramstepper
$ make clean
$ make carambola_config
```
this program writes to DDR SDRAM sequentially and reads out & compare data sequentially.

