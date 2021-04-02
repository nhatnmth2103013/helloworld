
 VD1
BEGIN
	 DISPLAY 'Hello World'
END

 VD2
BEGIN
	INPUT A, B
	DISPLAY A + B
END

 VD3
BEGIN
	INPUT A,B
	C = A + B
	DISPLAY C
END

 VD4
BEGIN
	INPUT num
		r = num MOD 2
			if r=0
				DISPLAY "Number is even"
			END if
END

 VD5
BEGIN
	INPUT num
		r = num MOD 2
			if r = 0
				DISPLAY "Even number"
			END if
	
			if r <> 0
				DISPLAY "Odd number"
			END if
END

 VD6
BEGIN
	INPUT Num
	r = num MOD 2
		if r = 0
			DISPLAY "Even Number"
		else
			DISPLAY "Odd Number"
		END if
END
 
 VD7
BEGIN
	INPUT yearsWithUs
	INPUT bizDone
		if yearsWithUs >= 10 and bizDone >= 5000000
				DISPLAY "Classified as an MVS"
			else
				DISPLAY "A little more effort required"
		END if
END

 VD8
BEGIN
	INPUT yearsWithUs
	INPUT bizDone
		if yearsWithUs >= 10
			if bizDone >= 5000000
					DISPLAY "Classified as an MVS"
				else
					DISPLAY "A little more effort required!"
			END if
			
			else
				DISPLAY "A little more effort required"
		END if
END

 VD9
BEGIN
	INPUT grade
	INPUT exp
		if grade = "E" and exp = 2
			salary = 2000
			
			else 
				if GRADE = "E" and exp = 3
					salary = 3000
				END if
		
		if GRADE = "M" and exp = 2
			salary = 3000
			
			else 
				if grade = "M" and exp = 3
					salary = 4000
					END if
		END if
END

 VD10
BEGIN
INPUT grade
input exp
	if grade = "E"
		if exp = 2
			salary = 2000
			
			else 
				if exp = 3 
					salary = 3000
				end if
		end if
	end if
END
 
 VD11
BEGIN
	DISPLAY "Scooby"
	DISPLAY "Scooby"
	DISPLAY "Scooby"
	DISPLAY "Scooby"
	DISPLAY "Scooby"
END 
 
 VD12
Do loop 1000 times
	DISPLAY "Scooby"
End loop

 VD13
BEGIN
	cnt = 0
	while (cnt < 1000)
	do
		DISPLAY "Scooby"
		cnt = cnt + 1
	END do
END 
