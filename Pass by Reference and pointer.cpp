LEARNT FROM https://youtu.be/dPAbm-3iAN4 (Buckys C++)
IN PASS BY VALUE,THE FUNCTION MAKES COPY OF THE ORIGINAL VARIABLE AND IS NOT ACESSING THE ORIGINAL VARIABLE

so if code is
passValue(vari);
void passValue(int x){
x=any value; //IT WILL ONLY CHANGE VALUE LOCALLY
}
THen value of vari is not going to change rather the value of x is going to change

IN PASS BYREFERNCE- WE PASS MEMORY ADDRESS
passRefer(&vari); //PASSING ADDRESS OF VARI
void passRefer(int *x){
//

*x=new value; //THIS WILL CHANGE VALUE AT MEMIRY ADDRESS of vari
}

if we add 2(mathematic 2) to a memory address then the value of variable at  that memory address wont increase by 2...rather the 
pointer will start pointing to element at 2 places ahead

Ex. 
int a;
int *po=&a;
*po+=2;// THIS IS NOT GOING TO INCREASE THE VALUE OF variable a rather it will make pointer point to 2 memory elemets ahead...ie. 8 bytes ahead if we take a as array of a like a[5]
