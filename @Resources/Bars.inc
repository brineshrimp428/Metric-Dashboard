; === CPU TEMPERATURE BAR (Center Left) ===
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
DynamicVariables=1
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
DynamicVariables=1
StringAlign=Center
AntiAlias=1
NumOfDecimals=0

; === GPU TEMPERATURE BAR (Center Right) ===

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
DynamicVariables=1
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
DynamicVariables=1
StringAlign=Center
AntiAlias=1
NumOfDecimals=0

; === GPU POWER BAR (Center Bottom) ===
[MeterGPUTotalBoardPowerLabel]
Meter=String
X=855
Y=375
Text="GPU#CRLF#POWER"
FontFace=#FontText#
FontSize=30
FontColor=#ColorText#
StringAlign=Right
AntiAlias=1

[MeterGPUTotalBoardPowerValue]
Meter=String
MeasureName=MeasureGPUTotalBoardPower
X=890
Y=365
Text="%1"
FontFace=#FontTBP#
FontSize=55
FontWeight=700
FontColor=#ColorSecondary#
DynamicVariables=1
StringAlign=Left
AntiAlias=1
NumOfDecimals=0