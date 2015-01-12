//****************************************************************************
//
//
//
//****************************************************************************


 
 
// ===========================================================================
//                                   Libraries
// ===========================================================================



// ===========================================================================
//                                 Project Files
// ===========================================================================
#include "Agent.h"
#include <math.h>




//############################################################################
//                                                                           #
//                                 Class Agent                               #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                  Constructors
// ===========================================================================
Agent::Agent(void)
{
	//num_agent=0;
	x=0;
	y=0;
	speed_x=1.0;
	speed_y=1.0;
	//time_step=0.5;
	//k=0;
	//o=0;
	//kprime=0;

}

// ===========================================================================
//                                  Destructor
// ===========================================================================
Agent::~Agent(void)
{
	/*
	delete tabk;
	delete tabkprime;
	*/
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
/*
void Agent::position(void){

	int i;
	float t;
	for(t=0; t<1000;t+time_step){
		for (i = 0; i < N; i+2)
		{
			store[i]=store[i]+(step*global_speed(t));
			store[i+1]=store[i+1]+(step*global_speed(t));
		}
	}

}


int Agent::perception_rad(int agent_ref){

	int index = (agent_ref-1)*2;
	tabk = new float[(2*N)+1];
	tabk[0]=k;

	for (int i = 0; i < 2*N; i+2)
	{
		
		float distance=sqrt((store[index]-store[i])*(store[index]-store[i])-(store[index+1]-store[i+1])*(store[index+1]-store[i+1]));

		if(distance<r && distance !=0){
			k=k+1;

			tabk[i+1]= store[i];
			tabk[i+2]=store[i+1];
		}if(distance>r && distance==0){
			tabk[i+1]=0;
			tabk[i+2]=0;
		}	

	}

	return k;
}

int Agent::perception_contact(int agent_ref){

	int index = (agent_ref-1)*2;
	tabkprime = new float[(2*N)+1];
	tabkprime[0]=kprime;

	for (int i = 0; i < 2*N; i+2)
	{
		
		float distance=sqrt((tabk[i]-tabk[index])*(tabk[i]-tabk[index])-(tabk[i+1]-tabk[index+1])*(tabk[i+1]-tabk[index+1]));

		if(distance<c && distance !=0){
			kprime=kprime+1;
			tabkprime[i+1]= tabk[i];
			tabkprime[i+2]=tabk[i+1];
		}if(distance>c && distance==0){
			tabkprime[i+1]=0;
			tabkprime[i+2]=0;
		}	

	}

	return kprime;
}
	

float* Agent::speed_one(float t, unsigned int agent_ref){

	Set_k(perception_rad(num_agent));
	float speed1;
	float* tabvj=new float[k];
	
	for(int j=1; j<k; j++){
		if(t == 0){

		}


	}

	float speed=(1/k)*(speed1);
	return speed;
}
*/
/*
float* Agent::speed_two(float t, unsigned int agent_ref){

	Set_k(perception_rad(num_agent));
	float * speedtab2 = new float[2];

	int index = (agent_ref-1)*2;
	for (int i = 1; i < 2*N+1; i+2){
		if (tabk[i]!=0){
		float new_x=tabk[i]-store[index];
		float new_y=tabk[i+1]-store[index+1];
		speedtab2[1]=speedtab2[1]+new_x;
		speedtab2[2]=speedtab2[2]+new_y;
		}
	}
	speedtab2[1]=speedtab2[1]/k;
	speedtab2[2]=speedtab2[2]/k;

	return speedtab2;

}

float* Agent::speed_three(float t, unsigned int agent_ref){

	Set_kprime(perception_contact(num_agent));
	float * speedtab3 = new float[2];

	int index = (agent_ref-1)*2;
	for (int i = 1; i < 2*N+1; i+2){
		if (tabkprime[i]!=0){
		float new_x=tabkprime[i]-store[index];
		float new_y=tabkprime[i+1]-store[index+1];
		speedtab3[1]=speedtab3[1]+new_x;
		speedtab3[2]=speedtab3[2]+new_y;
		}
	}
	speedtab3[1]=speedtab3[1]/k;
	speedtab3[2]=speedtab3[2]/k;

	return speedtab3;

}
*/


// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
