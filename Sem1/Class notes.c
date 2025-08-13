//preprocessor directive section
#include<stdio.h>
//global section
void main(){
	//declaration section
	/*
		1.Arithmetic opertor
			+(binary and unary plus),-(binary and unary minus),*(Multiplication as binary),
			/(division)(binary)(quotient as output),
			%(modulus)(binary)(results into remiander)(important point is operands of modulus operator must be either int or char. 
			float or double i.e. real numbers can not be applied in % operator),
			//no exponentiation operator in c
			
			"binary equivalent of the ascii value in 1 byte storage is called char values"
			
			++ (unary)(postfix increment/ post-increment), 
			++ (unary)(prefix increment/pre- increment)
			-- (unary)(postfix decrement/ post-decrement), 
			-- (unary)(prefix decrement/pre- decrement)
			
		2. Relational operators (binary)
			> (greater than), < (less than), >= (greater than or equals to),
			<= (less than or equals to), == (equals to), !=(not equals to),
			
		3. Logical operators
			&& (Binary logical AND), || (Binary logical OR), !(Unary logical NOT)
			
		4. Bitwise operators
			& (binary bitwise AND), | (binary bitwise OR), ~ (tilde)(unary bitwise NOT/ 1's complement operator)
			^ (binary bitwise XOR operator), >> (binary right-shift operator),
			<< (binary bitwise left-shift operator)
			
		5. Assignment operator and compound assignment operator 
		
			= (assignment)(binary),
			+=,-=,*=,/=,%= (compound assignment operators)      computer components, number systems and componets , operator , identifier names, some flow chart and algorith,if else and switch case,
			
			&=,|=,^=,
			>>=,<<=
			
		6. Special operators 
			unary versions
				() (function call operator),
				[] (subscript operator),
				. (dot) (member access operator)
				-> (arrow)(member access operator)
				
				* (dereferencing operator/indirection operator),
				
				sizeof operator
				& (unary)(address of operator)
				
				(datatype) type-cast operator
				
			?: (ternary)(conditional operator)
			, (comma)
			
			//int a,b; //comma is used as seperator not as operator				
	*/
	//binary operator
	//c=a+b; //+ operator is having 2 operands
	//c=a-b; //- operator is having 2 operands
	
	
	//unary operator
	//c=+b; //+ operator is having 1 operand
	//c=-b; //- operator is having 1 operand
	
	//ternary operator
	//c= (a>b)?a:b; // ?: operator is having 3 operands
	
	int a=10, b=5,c;
		printf("a=%d",a);
		c=a+1; //evaluation of this c statement a+1 is 11 //first bianry additon then assignment
		printf("\na=%d a+1=%d c=%d",a,a+1,c);
//		a=a+5;
//		a=a-7;
		a=a+1; //evaluation of a+1 is 11 and assigned in memory of a
		printf("\na=%d a+1=%d",a,a+1);
		
		printf("\na++=%d a=%d",a++,a); //value of a will be considered as the old value of a and then in memory of a effect of a=a+1 wil be made
		
		printf("\n\n++a=%d a=%d",++a,a); //a=a+1 will be evaluated first and the new value will be considered for the expression
	
		printf("\n\na--=%d a=%d",a--,a); //old value of a is considered for current expression and effect of a=a-1 will be made in memory of a	
	
		printf("\n\n--a=%d a=%d",--a,a); //a=a-1 will be evaluated first and the new value will be considered for the expression
		
	a=10; //assignment
	c=(a++) + ((a--) - ((++a) - (--a)));//c=10+20 //c=a+20, a=5 //c= 5+b say b=10
	//important point is what is the order of evaluation 
	//in C for arithmetic operators say +,-,*,/ order of evaluation of the operands is undefined
	//undefined behavior
	printf("\nc=%d",c);
	//printf("\n++a=%d a++=%d a=%d --a=%d a--=%d",++a,a++,a,--a,a--);//compiler for vlaues within function call statement considers from right to left order 
	//but actual rule is undefined
	 //start from right and end to left,,,undefined behaviour,,,for all prefix func latest value of a will be printed

//Logical operators	
	a=10;
	b=5;
	c=a && b; //order of evaluation of ths operands is defined as left operand first then if required right operand
	//logical AND (&&) is considered to be a sequence point whose operands' evaluation order is defined
	//if left side operand evaluated to be 0, right hand operand is not evaluated at all
	//in c, value 10 is comsidered to be a non zero value and non zero value is considered as 1
	printf("\na=%d b=%d c=%d",a,b,c);
	a=0;
	b=1;
	c=a&&b;
	printf("\na=%d b=%d\na&&b=%d\n",a,b,a&&b);
	
	a=0;
	b=0;
	printf("a=%d b=%d a||b=%d\n",a,b,a||b);
	
	a=0;
	b=0;
	c=++a || ++b; //|| is also a sequence point
	//left operand evaluated first, if required, right operand will be evaluated
	printf("a=%d b=%d a||b=%d\n",a,b,c);
	
	a=0;
	c=!a;//unary
	printf("\na=%d c=%d",a,c);
	c=!++a; 
	//'=','!' and '++' prefix increment 3 operators
	//each operator is assigned with certain precedence or priority value over other operators
	//The higher the precedence, the order of evaluation of the operator is earlier.
	//in this expression precedence of prefix is highest among the three
	//Next higher precedence is of logical !
	//lowest is of assignment =
	//so first prefix increment (++), then logical NOT(!) and al last assignment(=) is evaluated
	printf("\na=%d c=%d",a,c);
	
	a=10;
	b=5;
	//a&&=b;//error
	//a||=b;//error
	a+=b;
	printf("\n\n\n---a=%d b=%d",a,b);

	
	
	
}
