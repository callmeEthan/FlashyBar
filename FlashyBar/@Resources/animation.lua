function Initialize()
	skinwidth = tonumber(SKIN:GetVariable('CURRENTCONFIGWIDTH'))
	dynamic = tonumber(SKIN:GetVariable('Dynamic'))
	divider = tonumber(SKIN:GetVariable('Divider'))
	flashWidth = tonumber(SKIN:GetVariable('Flashwidth'))
	flashMeter = SKIN:GetMeter('Flash')
	barWidth = flashMeter:GetW()
	barX = flashMeter:GetX()
	barW = flashMeter:GetW()
	flashX = -flashWidth
	flashSpeed = tonumber(SKIN:GetVariable('Speed'))
	flash = 0
	variable = 0
	direction = tonumber(SKIN:GetVariable('Direction'))
end

function animate()
	local limit=dynamic * 0.8
	flash = flash - ((flash - variable) / divider)
	if direction == 1 then	
		flashX = flashX + math.min(1,flash/limit) * flashSpeed
		if flashX >= skinwidth then flashX=-flashWidth end
	else 
		flashX = flashX - math.min(1,flash/limit) * flashSpeed
		if flashX <= -flashWidth then flashX=skinwidth end
	end
	flashMeter:SetX(flashX)
	SKIN:Bang('!SetOption', 'Flash', 'ImageAlpha', (flash / limit * 255) )
end

function update()
	variable=tonumber(SELF:GetOption("Variable"))
	if variable > dynamic then
		dynamic = variable
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Dynamic', dynamic, 'Settings.inc')
		end
end