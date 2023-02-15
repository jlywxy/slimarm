# uS3C board v1.0 setups

## PCB constraints

1. 4-layers
2. Line width: 6 mils
3. Line to Line/Via: 4 mils
4. Minimum Via Diameter: 18 mils/8 mils (0.457 mm/0.203 mm)

## BOM
```
Part No.                Package     Usage               Brand      Comments

--Chip Components--
1. S3C2410AL-20:        FBGA272,    Main Processor,     Samsung     3.3v+1.8v
3. HY57V561620FTP-H:    TSOPII54,   SDRAM,              Hynix       3.3v
4. K9F5608U0C-YCB0:     TSOP48,     NAND Flash,         Samsung     3.3v
5. M29W640FB70N6E:      TSOP48,     Parallel NOR Flash, ST          3.3v

--Power Supply, Crystal, Connector Components--
1. XC6206:              SOT-23,     LDO,                (Any)
2. (Any):               5032,       12MHz Crystal,      (Any)       (with 22pF capacitors)
3. (Any):               USB-C-16p,  USB-C Connector,    (Any)
```

## Wiring Notice

```
1. Cystal             12MHz + 22pF capacitor
2. EXTCLK             Pull-up (Not using EXTCLK)
3. nBATT_FLT          Pull-up (Not using Battery)
4. OM[3:2]            Pull-down (Not using EXTCLK)
5. JTAG               Pull-up
6. USB CC             Pull-down
7. USB DP/DN          Pull-up/down
8. OM[1:0]            Jumpwires (NANDboot: 00, NORboot: OM0=1,OM1=0)
9. Bus nWAIT          Pull-up (Not using nWAIT)
10. NAND NCON         Jumpwires (up)
11. USB Impedance     90(Diff)
12. NOR CS selection  nGCS0/nGCS1 (NANDboot: nGCS1, NORboot: nGCS0)
```