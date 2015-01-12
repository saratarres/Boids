//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __AGENT_H__
#define __AGENT_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <string.h>



// ===========================================================================
//                                Project Files
// ===========================================================================




// ===========================================================================
//                              Class declarations
// ===========================================================================






class Agent
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    Agent(void);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~Agent(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
    inline float Get_x(void) const;
    inline float Get_y(void) const;
    inline float Get_speed_x(void) const;
    inline float Get_speed_y(void) const;
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================
    inline void Set_x(float new_x);
    inline void Set_y(float new_y);
    inline void Set_speed_x (float newspeed_x);
    inline void Set_speed_y (float newspeed_y);
/*
    inline void Set_k(unsigned int new_k);
    inline void Set_o(unsigned int new_o);
    inline void Set_kprime(unsigned int new_kprime);
    inline void Set_numagent(unsigned int num_agent);
*/
    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================
    //
        
/*
        void position (void);

        int perception_rad (int agent_ref); //calculates nb of agents in the radius
        int perception_contact(int agent_ref); //calculates nb of agents in the contact radius

        float* global_speed (float t);
        float* speed_one (float t);
        float* speed_two(float t, unsigned int agent_ref);
        float* speed_three(float t, unsigned int agents_ref);
*/
    //
    // =======================================================================
    //                             Public Attributes
    // =======================================================================
        /*
        float* tabk;
        float* tabkprime;
        */



  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*Agent(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
      /*
    Agent(const Agent &model)
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


    float x;
    float y;
    float speed_x;
    float speed_y;
    
    /*
    float time_step;
    unsigned int num_agent;
    unsigned int k; // nb of Agents who actually are inside de radius
    unsigned int o; // nb d'objects that're in the contact distance
    unsigned int kprime; // nb of Agents who're in the contact distance
    */


};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================

float Agent::Get_x(void) const{
    return x;
}

float Agent::Get_y(void) const{
    return y;
}

float Agent::Get_speed_x() const{
    return speed_x;
}

float Agent::Get_speed_y() const{
    return speed_y;
}

// ===========================================================================
//                              Setters' definitions
// ===========================================================================
void Agent::Set_x(float new_x){
    x=new_x;
}

void Agent::Set_y(float new_y){
    y=new_y;
}

void Agent::Set_speed_x(float newspeed_x){
    speed_x=newspeed_x;
}

void Agent::Set_speed_y(float newspeed_y){
    speed_y=newspeed_y;
}

/*
void Agent::Set_k(unsigned int new_k){
    k=new_k;
}

void Agent::Set_o(unsigned int new_o){
    o=new_o;
}

void Agent::Set_kprime(unsigned int new_kprime){
    kprime=new_kprime;
}

void Agent::Set_numagent(unsigned int new_numagent){
    num_agent=new_numagent;
}
*/


// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================

;
#endif // __AGENT_H__

