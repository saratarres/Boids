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
#include "Boids.h"
#include "Agent.h"




//############################################################################
//                                                                           #
//                                  Class Boids                              #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================
	unsigned int Boids::N = 50;
	const unsigned int Boids::H = 50;
	const unsigned int Boids::W = 50;


// ===========================================================================
//                                  Constructors
// ===========================================================================
Boids::Boids(void)
{
	r=8;
	c=2;
	dt=0.5;
	k=0;
	kprime=0;
	o=0;

}

// ===========================================================================
//                                  Destructor
// ===========================================================================
Boids::~Boids(void)
{
 
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================

int Boids::perception_rad(int agent_ref){
	return k;
}

int Boids::perception_contact(int agent_ref){
	return kprime;
}

/*

float* Boids::speed_one(float t, unsigned int agent_ref){

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
float* Boids::speed_two(float t, unsigned int agent_ref){

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
*/
/*
float* Boids::speed_three(float t, unsigned int agent_ref){

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
