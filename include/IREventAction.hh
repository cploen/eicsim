#ifndef IREventAction_h
#define IREventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

class IREventAction : public G4UserEventAction
{
  public:
    IREventAction();
    virtual ~IREventAction();

    virtual void  BeginOfEventAction(const G4Event* event);
    virtual void    EndOfEventAction(const G4Event* event);
    
    void AddEdep(G4double de);
    
  private:
    G4double  fEnergy;
};

// inline functions

inline void IREventAction::AddEdep(G4double de) {
  fEnergy += de; 
}

#endif

