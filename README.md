# Project-Pre-final-C-Visual-Novel---Dispatch-Decision-Engine
**-- SCENE FUNCTION 1 CODE:**
void scene_interrogation(){
    
    int choice;
    bool condition = true;
    
    cout << "After a brief physical altercation, Robert subdues the Goon by tying him to a chair." << endl <<
    "They then sit quietly inside the Goon's dark apartment room." << endl << endl <<
}

**EXPLANATION:**
void scene_interrogation() 
-	First scene called by main()
int choice;
-	integer variable declared.
-	to store the user input.
bool condition = true;
-	boolean variable declared.
-	used in the while loop condition to create an infinite loop.
cout << “After a....”
-	prints narration, character dialogues and choices.



**CODE:** 
 while(condition == true){
        
        cout << "Enter choice: "; 
        cin >> choice;
}

**EXPLANATION:**
while(condition == true)
-	uses an infinite loop to allow multiple user input in case of invalid inputs.
-	using condition = false for each correct input to break the infinite loop.



**CODE:**
cout << “Enter choice: “;
cin >> choice;
EXPLANATION:
-	using cout to print something to gather user input.
-	using cin to save user input to variable choice.



**CODE:**
if(choice == 1){
                is_merciful = true;
                condition = false;
                cout << "Robert pulls the Goon back up the balcony which calms him down." << endl;
            }
                else if(choice == 2){
                    is_merciful = false;
                    condition = false;
                    cout << "Robert lets go of the chair. The Goon lands on a conveniently placed mattress, saving his life." << endl;
                }
                    else{
                        cout << "INVALID INPUT!" << endl;
                    }
                    
**EXPLANATION:**
-	using an if else statement, if the user’s input is 1 then set variable is_merciful to true, variable condition to false and print outcome message.
-	same process for user input 2.
-	else statement if the user input is invalid.


 
 **-- SCENES 2, 3, 4 FUNCTIONS CODE:**
 void scene_street_fight(){
     int choice;
    bool condition = true;
}
void scene_bar_flambae(){
    int choice;
    bool condition = true;
}
void scene_billboard(){

    int choice;
    bool condition = true;
}

**EXPLANATION:**
-	These three scene functions follows the same process as the aforementioned function (scene_interrogation()).


 
**-- SCENE 5 FUNCTION CODE:**
void scene_combat_toxic(){
    
    int choice;
    bool condition = true;
    
    cout << "Robert heads out to Llewelyn Steel Works which was the place mentioned by the Goon." << endl <<
    "Inside the location he finds a familiar face: Goon himself, which was able to get back here before Robert did. " << endl << 
    "Goon confronts Robert, telling him that he knows humiliating details about Robert's father's passing." << endl <<
    "Goon keeps mocking Robert's father, which in turn, Robert commands his robot to... " << endl << endl << 
    
    "1. Punt Goon" << endl << "2. Stomp Goon" << endl;
}

**EXPLANATION:**
-	This function uses two variables to determine the scene’s result/output.



**CODE:**
 while(condition == true){
            
            cout << "Enter choice: "; 
            cin >> choice;
            
                if(choice == 1 && is_merciful == true){
                    cout << "Robert's mech lightly punts Goon, still showing the same restraint as before." << endl;
                    toxic_punt = true;
                    condition = false;
                }
                    else if(choice == 1 && is_merciful == false){
                        cout << "Robert's mech punts Goon with excessive force, mirroring his merciless approach as before." << endl;
                        toxic_punt = true;
                        condition = false;
                    }
                        else if(choice == 2 && is_merciful == true){
                            cout << "Robert's mech drops and stomps next to Goon, causing Goon to fall over his chair." << endl <<
                            "Robert, while being merciful, demonstrates that he can be heartless if he wanted to." << endl;
                            toxic_punt = false;
                            condition = false;
                        }
                            else if(choice == 2 && is_merciful == false){
                                cout << "Robert's mech drops and stomps on Goon directly and pinning him down," << endl <<
                                "showing absolutely no remorse for what he did now and back at the apartment." << endl;
                                toxic_punt = false;
                                condition = false;
                            }
                                else{
                                    cout << "INVALID INPUT!" << endl;
                                }
}

**EXPLANATION:**
-	uses same process as the other functions for the while loop and user input.



**CODE:**
if(choice == 1 && is_merciful == true){
                    cout << "Robert's mech lightly punts Goon, still showing the same restraint as before." << endl;
                    toxic_punt = true;
                    condition = false;
}

**EXPLANATION:**
-	if user input is equal to one AND if is_merciful is equal to true, then print output message, set toxic_punt to true, set condition to false.
-	All other else if statements follow the same process.
-	Else prints if the user input is invalid.



**-- SUMMARY FUNCTION CODE:**
void epilogue_summary(){
    cout << "RESULTS: " << endl << endl;
              
               if(toxic_punt == true && is_merciful == true){
                          cout << "You pulled Goon back and you ordered your mech to lightly punt Goon, still showing the same restraint as before. You demonstrated restraint and compassion." << endl;
              }
                  else if(toxic_punt == true && is_merciful == false){
                                  cout << "You dropped Goon and commanded your mech to punt Goon with excessive force, mirroring his merciless approach as before. You showed ruthless efficiency and created fear-based respect." << endl;
                  }
                      else if(toxic_punt == false && is_merciful == true){
                                      cout << "You pulled Goon back and commanded your mech to drop and stomp next to Goon, causing Goon to fall over his chair." << endl <<
                                      "Robert, while being merciful, shows that he can be heartless if he wanted to. You still demonstrated restraint and compassion." << endl;
                      }
                          else if(toxic_punt == false && is_merciful == false){
                                          cout << "You dropped Goon and ordered your mech drop and stomp on Goon directly to pin him down," << endl <<
                                          "showing absolutely no remorse for what he did now and back at the apartment. You showed ruthless efficiency and created fear-based respect." << endl;
                          }
               cout << endl;                   
                  
              if(right_hand_countered == true){
                  cout << "You punched with your right hand, got countered and struck with the crowbar." << endl;
              }
                  else{
                      cout << "You punched with your left hand, successfully knocked out the thief and represented tactical efficiency." << endl;
                  }
                cout << endl;  
          
              if(blazer_impression_score == 0){
                  cout << "Blonde Blazer remembered you threw water at Flambae, creating a subdued but painful outcome." << endl;
              }
                  else{
                      cout << "Blonde Blazer remembered you threw alcohol at Flambae, creating a chaotic outcome but leaving a stronger impression for Blonde Blazer." << endl;
                  }
                cout << endl;  
                  
              if(is_romantic_tension_active == true){
                  cout << "You let the moment pass, maintaining romantic tension with Blonde Blazer without pressure; demonstrating emotional intelligence." << endl;
              }
                  else{
                      cout << "You kissed Blonde Blazer, creating an awkward moment when she doesn't reciprocate." << endl;
                  }   
}

**EXPLANATION:**
-	this function prints the summarized choices of the user from all the scenes.
-	all possible choices of the user have a corresponding output that shows the consequences derived from their chosen decisions. 



**-- MAIN:**
int main()
{
    cout << "C++ Visual Novel - Dispatch Decision Engine" << endl <<
    "You will be playing as Robert, a superhero." << endl << endl;
    
    
    scene_interrogation(); 
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();
    epilogue_summary();
    

    return 0;
}

**EXPLANATION:**
-	the main() function serves to print the description of the program. 
-	all the scene functions are called in the correct sequence.
-	return 0 to end the program.
