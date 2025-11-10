; === TEMPERATURE BARS (Right) ===
[MeterCPUTempBarBG]
Meter=Shape
X=500
Y=90
Shape=Rectangle 0,0,50,300,5 | Fill Color 20,20,20,255 | StrokeWidth 2 | Stroke Color 40,40,40,255

[MeterCPUTempBar]
Meter=Bar
MeasureName=MeasureCPUTemp
X=505
Y=95
W=40
H=290
BarColor=#ColorPrimary#
SolidColor=0,0,0,1
BarOrientation=Vertical
AntiAlias=1

[MeterCPUTempBarLabel]
Meter=String
X=525
Y=395
Text="CPU#CRLF#TEMP"
FontFace=#FontText#
FontSize=30
FontColor=#ColorText#
StringAlign=Center                          
AntiAlias=1

[MeterCPUTempBarValue]
Meter=String
MeasureName=MeasureCPUTemp
X=525
Y=-15
Text="%1"
FontFace=#FontValues#
FontSize=55
FontColor=#ColorPrimary#
StringAlign=Center
AntiAlias=1
NumOfDecimals=0

[MeterGPUTempBarBG]
Meter=Shape
X=1365
Y=90
Shape=Rectangle 0,0,50,300,5 | Fill Color 20,20,20,255 | StrokeWidth 2 | Stroke Color 40,40,40,255

[MeterGPUTempBar]
Meter=Bar
MeasureName=MeasureGPUTemp
X=1370
Y=95
W=40
H=290
BarColor=#ColorSecondary#
SolidColor=0,0,0,1
BarOrientation=Vertical
AntiAlias=1

[MeterGPUTempBarLabel]
Meter=String
X=1390
Y=395
Text="GPU#CRLF#TEMP"
FontFace=#FontText#
FontSize=30
FontColor=#ColorText#
StringAlign=Center
AntiAlias=1

[MeterGPUTempBarValue]
Meter=String
MeasureName=MeasureGPUTemp
X=1390
Y=-15
Text="%1"
FontFace=#FontValues#
FontSize=55
FontColor=#ColorSecondary#
StringAlign=Center
AntiAlias=1
NumOfDecimals=0

; === GPU POWER BAR (Right) ===
[MeterPowerBarBackground]
Meter=Shape
X=1588
Y=335
Shape=Rectangle 0,0,200,30,5 | Fill Color 20,20,20,255 | StrokeWidth 2 | Stroke Color 40,40,40,255

[MeterPowerBar]
Meter=Bar
MeasureName=MeasureGPUTotalBoardPower
X=1593
Y=340
W=190
H=20
BarColor=#ColorSecondary#
SolidColor=0,0,0,1
BarOrientation=Horizontal
AntiAlias=1

[MeterPowerLabel]
Meter=String
X=1588
Y=315
Text="GPU POWER"
FontFace=#FontText#
FontSize=11
FontColor=#ColorText#
StringAlign=Left
AntiAlias=1

[MeterPowerValue]
Meter=String
MeasureName=MeasureGPUTotalBoardPower
X=1788
Y=315
Text="%1"
FontFace=#FontValues#
FontSize=20
FontWeight=700
FontColor=#ColorSecondary#
StringAlign=Right
AntiAlias=1
NumOfDecimals=0