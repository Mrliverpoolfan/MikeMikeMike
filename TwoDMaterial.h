#include <iostream>
#include "phaseAttr.h"

class TwoDMaterial
{
  public:
    //constructors
    TwoDMaterial(int=100, int=100);
    ~TwoDMaterial();
    //ADD HERE: I would like for you to add a copy constructor prototype
  
    TwoDMaterial(const TwoDMaterial);
    
    //operator overloads that can be used by client
    void operator+=(PhaseAttributes); //add phase to composite
    TwoDMaterial & operator!(); //This will randomize the material array
    PhaseAttributes & operator++(); //adds one to permittivity array length 
    float & operator()(int,int); //used to access matArray elements

    //ADD HERE: I would like for you to add an assignment operator prototype

    // TODO: Assignment operator prototype here...

    TwoDMaterial & operator=();

    //public member functions need by client
    void extractStatistics();
    void createMixNanocomposite();
    void outputMaterialToFile(); 

    //getters 
    int getWidth() const; 
    int getHeight() const; 
    //ADD HERE: complete the set of getter functions  
    
    float * getMatArray();
    PhaseAttributes & getAttribArray();
    int getNumPhase();
    
    
    //setters
    TwoDMaterial & setWidth(int);     
    TwoDMaterial & setHeight(int);     
    //ADD HERE: complete the set of setter functions
    
    TwoDMaterial & setMatArray(float * matArray);
    TwoDMaterial & setAttribArray(PhaseAttributes * attribArray);
    TwoDMaterial & setNumPhase(int numPhase);



    //utility functions
  private:
    void swap(int,int,int,int);

  private:
    int width;
    int height; 
    float * matArray; 

    PhaseAttributes * attribArray;
    int numPhase;
};


