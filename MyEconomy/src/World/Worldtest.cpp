#include <iostream>
#include "agent.h"
#include "param.h"

using namespace parameters; 
  class World  
  {
    private:
    int ID;
    int nagents, nagentsmax, nagentslive;
    Agent array_agent[NMAXAGENTS];

    public:
    // Constructor
    World() : ID(0) {}
    // Destructor
    ~World()  { }

    // IO
    // save data (for restarts)
    // read data
    // export data to read in  python


    // setPDF from list points

    // remove dead agents in the world
    void RemoveDeadAgents()
    {
      int j=0;
      for (int i=0;i<nagents;i++)
      {
        // Agent aux = array_agent[i];
        // if (aux.status==0) 
        // {

        //   array_agent[i] = 
        // }

      }
    }

  };