[MeterBar]
Meter=BAR
MeasureName=MeasureGPUTemp
X=0
Y=20
H=3
W=#CURRENTCONFIGWIDTH#
;BarColor=255,255,255,240
BarColor="[MeasureColorTrigger]"
BarOrientation=Horizontal
SolidColor=255,255,255,60
DynamicVariables=1

[Flash]
Meter=Image
ImageName=#@#Flash.png
ImageAlpha=255
X=0
Y=0r
W=#Flashwidth#
H=3
DynamicVariables=1

[MeterLabel]
Meter=STRING
Text="GPU"
StringStyle=BOLD
X=2
Y=0
H=14
W=205
FontFace=#FontFace#
FontColor=#FontColor#
FontSize=#FontSize#
AntiAlias=1
SolidColor=255,255,255,1
LeftMouseUpAction=#MouseAction#
Hidden=1


[MeterLoad]
Meter=STRING
MeasureName=GPULoad
FontFace=#FontFace#
FontColor=255,255,255,120
FontSize=#FontSize#
AntiAlias=1
StringAlign=left
Text="%1%"
X=30
Y=0r

[MeterInfo]
Meter=STRING
MeasureName=MeasureGPUTemp
FontFace=#FontFace#
FontColor=#FontColor#
FontSize=#FontSize#
AntiAlias=1
StringAlign=Right
Text="%1�C"
X=(#CURRENTCONFIGWIDTH#-2)
Y=0r


[MeterIcon]
Meter=Image
ImageName=#@#icon\gpu.png
X=0
Y=-3
W=22
H=22
SolidColor=0,0,0,1
ImageTint=255,255,255