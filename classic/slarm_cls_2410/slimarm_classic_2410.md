# SlimARM Classic 2410 v1r1 PCB layout points

## PCB constraints

1. 4-layers
2. Line width: 3.5 mils
3. Line to Line/Via: 5+ mils
4. Minimum Via Diameter: 18 mils/10 mils

## BOM
```
Part No.                Package     Usage               Memory-Features     Brand      Comments

--Chip Components--
1. S3C2410AL-20:        FBGA272,    Main Processor,     4kB-SRAM            Samsung     3.3v+1.8v
2. HY57V561620FTP-H:    TSOPII54,   SDRAM,              32MB                Hynix       3.3v
3. K9F5608U0*:          TSOP48,     NAND Flash,         32MB                Samsung     3.3v
   MT29F1G08*           TSOP48,     NAND Flash,         128MB               Micron      3.3v

--Power Supply, Crystal, Connector Components--
1. XC6206:              SOT-23,     LDO,                -                   (Any)
2. (Any):               5032,       12MHz Crystal,      -                   (Any)       (with 22pF capacitors)
3. (Any):               USB-C-16p,  USB-C Connector,    -                   (Any)
```

## Wiring Notice

```
1. Cystal             12MHz + 22pF capacitor
2. EXTCLK             Pull-up (Not using EXTCLK)
3. nBATT_FLT          Pull-up (Not using Battery)
4. OM[3,2,1]          Pull-down (Not using EXTCLK)
5. JTAG               Pull-up(10k)
6. USB CC             Pull-down(5.1k)
7. USB DP/DN          Pull-up(1.5k)/down(470k)
8. OM[0]              Jumpwire (NANDboot: 0)
9. Bus nWAIT          Pull-up (Not using nWAIT)
110 USB Impedance     90(Diff)/45(Single)
```