//http://www.codechef.com/problems/EQUALIZ/

#include<iostream>
 
using namespace std;
 
int main(){
	int primes[] = {2,3,5,7,11,13,17,19,23,29};
 
	int primesLookUp[31];
	primesLookUp[2]=-1;	 primesLookUp[3]=-1;  primesLookUp[5]=-1;	primesLookUp[7]=-1; 
	primesLookUp[11]=-1; primesLookUp[13]=-1; primesLookUp[17]=-1;	primesLookUp[19]=-1; 
	primesLookUp[23]=-1; primesLookUp[29]=-1; primesLookUp[4]=4;	primesLookUp[6]=5;   
	primesLookUp[8]=12;	 primesLookUp[9]=6;   primesLookUp[10]=7;   primesLookUp[12]=16; 
	primesLookUp[14]=9;  primesLookUp[15]=8;  primesLookUp[16]=32;  primesLookUp[18]=21; 
	primesLookUp[20]=24; primesLookUp[21]=10; primesLookUp[22]=13;  primesLookUp[24]=44; 
	primesLookUp[25]=10; primesLookUp[26]=15; primesLookUp[27]=27;  primesLookUp[28]=32; 
	primesLookUp[30]=31;
	
	int t,n,x;
	cin>>t;
	
	while(t>0){
		cin>>n;
		
		for(int i=0;i<n;i++)
			cin>>x;
		
		
		if(primesLookUp[n]==-1){
			cout<<1<<endl<<n;
			for(int i=1;i<=n;i++){
				cout<<" "<<i;
			}
			cout<<endl;
		}else{
			cout<<primesLookUp[n]<<endl;
			 int lctr=0,temp1=0;
               for(int i=9;i>=0;i--){
					 
				   int p,j=0,loop=0;
                   if(n%primes[i]==0){
							p=primes[i];
						if(lctr==0)
							temp1+=p;
				lctr++;
                int j=n;
				while(j%primes[i]==0){
					loop++;
					j/=primes[i];
					
				}
				j=0;
 
   				x = n/primes[i];
   				int temp=x,k=1;
   				
					int r=1;
					while(temp>0 && lctr==1){
						cout<<primes[i];
						j=0;
						for(;j<primes[i];r++){
							cout<<" "<<r;	
							j++;					
						}
						cout<<endl;
						temp--;
						
					}
					int checkRepeat[n+1];
					
					if(lctr==1){
						loop--; 
					}
					j=temp1;
					
					temp=primes[i];
					while(loop>0){
						for(int q=0;q<n+1;q++)
						checkRepeat[q]=0;
						for(int s=0;s<x;s++){
							cout<<primes[i];
							
							for(int k=s+1;temp>0;k+=j){
								if(checkRepeat[k]==0){
 
								cout<<" "<<k;
								checkRepeat[k]=12345;	
								}else{
									
									while(1){
										k+=j;
										if(checkRepeat[k]==0){
											checkRepeat[k]=12345;
											break;
										}
									}
									cout<<" "<<k;
								}
								temp--;
							}
							temp=primes[i];
							cout<<endl;
						}
						
						temp1 *= p;
						j = temp1;
						loop--;
					}
			}	
		}
			 
	}			
		t--;
	}
	return 0;
}
 