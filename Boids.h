//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __BOIDS_H__
#define __BOIDS_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include "Agent.h"



// ===========================================================================
//                                Project Files
// ===========================================================================




// ===========================================================================
//                              Class declarations
// ===========================================================================






class Boids
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================

    // =======================================================================
    //                               Constructors
    // =======================================================================
    Boids(void);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~Boids(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
   inline unsigned int Get_radius (void) const;
   inline unsigned int Get_contact (void) const;
   inline unsigned int Get_k (void) const;
   inline unsigned int Get_kprime (void) const;
   inline unsigned int Get_o (void) const;
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================
   inline void Set_radius(unsigned int new_rad);
   inline void Set_contact(unsigned int new_c);
   inline void Set_dt(unsigned int new_dt);
    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================

    // =======================================================================
    //                             Public Attributes
    // =======================================================================
    
   
    int perception_rad (int agent_ref); //calculates nb of agents in the radius
    int perception_contact(); //calculates nb of agents in the contact radius

    float* global_speed (float t);
    float* speed_one (float t);
    float* speed_two(float t, unsigned int agent_ref);
    float* speed_three(float t, unsigned int agents_ref);




  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*Boids(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
      /*
    Boids(const Boids &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };
    */


    // =======================================================================
    //                              Protected Methods
    // =======================================================================

    // =======================================================================
    //                             Protected Attributes
    // =======================================================================

    static const unsigned int W; // Wdith of the tab
    static const unsigned int H; // Hight of the tab

    static unsigned int N; //number of agents
    unsigned int r; // perception radius 
    unsigned int c; //contact distance

    //float store[100]; //stores the positions of the different agents
    Agent* tabAgent = new Agent[50]; //table d'Agents

    float dt;
    unsigned int k;
    unsigned int kprime;
    unsigned int o;

};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================

unsigned int Boids::Get_radius(void) const{
    return r;
}

unsigned int Boids::Get_contact(void) const{
    return c;
}

unsigned int Boids::Get_k (void) const{
    return k;
}

unsigned int Boids::Get_kprime (void) const{
    return kprime;
}

unsigned int Boids::Get_o (void) const{
    return o;
}

// ===========================================================================
//                              Setters' definitions
// ===========================================================================
void Boids::Set_radius(unsigned int new_rad){
    r=new_rad;
}

void Boids::Set_contact(unsigned int new_c){
    c=new_c;
}

void Boids::Set_dt(unsigned int new_dt){
    dt=new_dt;
}
// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================

;
#endif // __BOIDS_H__

