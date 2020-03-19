# _printf  
![enter image description here](https://i.imgur.com/y79WiDr.png) 
That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** .  ## What is printf? "Writes the C string pointed by _format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))" - [cplusplus](http://www.cplusplus.com/reference/cstdio/printf/) 

In other words, the function receives a format (*const char* **format*) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern  

### Patterns 

![enter image description here](https://i.imgur.com/vmU0FhC.png) 	
 [cplusplus](http://www.cplusplus.com/reference/cstdio/printf)  

That image shows specifiers that we can use in the printf.  In this case, _printf just allow specifiers like   
|Specifiers|Functions|Description| 
|--|--|--|
|s|print_string|print a string| 
|c|print_char|print just a char| 
|i|print_integer|print a number in base 10|
|d|print_integer|print a number in base 10|
|p|print_pointer|print a memory address in base 16 lowercase| 
|b|print_binary|print a number in base 2|
|x|print_hexadecimal_low|print a number in base 16 lowercase| 
|X|print_hexadecimal_upp|print a number in base 16 uppercase|
|o|print_octal|print a number in base 8| 
|R|print_rot|print a string encoded in rot13 format| 

## Flowcharts

These 3 functions are the bases for this project:

 1. Printf: Is the frontend of all the algorithm, so is the prototype, and just receive the variables
 2. Handler: Is the controller for the string and the formats, and also does the counter for the numbers of bytes that are printing
 3. Percent handler: Compare a list of possible specifiers with the current pattern, and return the corresponding function

![enter image description here](https://i.imgur.com/SjqIUs7.png) ![enter image description here](https://i.imgur.com/ouUh2G4.png)
![enter image description here](https://i.imgur.com/90TRtGH.png) 
## Contributors  
[@Jose Parrales - Github](https://github.com/JParrales) - [@David Orozco - Github](https://github.com/davixcky)  
