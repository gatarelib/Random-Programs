 #include<iostream>
  using namespace std;
  main()
  {
  	int rad, high;
  	float area;
  	cout<<"enter radius of tube:\n";
  	cin>>rad;
  	cout<<"enter hight of the tube:\n";
  	cin>>high;
  	area=(2*3.14*(rad^2))+(high*(2*rad*3.14));
  	cout<<"area is:"
  		<<area;
  	return 0;
  }
  
