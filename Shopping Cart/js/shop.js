//User_details display
function saveme()
{
localStorage.setItem("n1",document.F1.n1.value);
localStorage.setItem("c1",document.F1.c1.value);
localStorage.setItem("p1",document.F1.p1.value);
localStorage.setItem("e1",document.F1.e1.value);
}
function showme()
{
var a=localStorage.getItem("n1");
var b=localStorage.getItem("c1");
var c=localStorage.getItem("p1");
var d=localStorage.getItem("e1");
alert("Username: "+a+"  "+"City: "+b+"  "+"Phone_no: "+c+"  "+"Email:"+d+"  ");
saveme();
}

function post()
{
alert("Thank you for your Comments...!");
}
function p()
{
alert("Payment process completed...!Soon your purchased item to be deliver");
}


//Buynow
var cost;
function fun()
{
  cost=0;
if(document.myform1.b1)
{
  var a=document.getElementById("qty").value;
 
		cost=cost+200*a;
}
if(document.myform1.c1)
{
var a1=document.getElementById("qty1").value;
cost=cost+550*a1;
}
if(document.myform1.ww1)
{
var a2=document.getElementById("qty2").value;
cost=cost+900*a2;
}
if(document.myform1.d1)
{
var a3=document.getElementById("qty3").value;
cost=cost+70*a3;
}
if(document.myform1.m1)
{
var a4=document.getElementById("qty4").value;
cost=cost+1500*a4;
}
if(document.myform1.w1)
{
var a5=document.getElementById("qty5").value;
cost=cost+2000*a5;
}
     document.myform1.total.value=cost;
 
}
function cart() 
{

  alert("Your purchased amount is "+document.myform1.total.value);
}



