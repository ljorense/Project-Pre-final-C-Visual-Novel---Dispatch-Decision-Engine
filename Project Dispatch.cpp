#include <iostream>
#include <string>
using namespace std;

bool is_merciful;
bool right_hand_countered;
int blazer_impression_score = 0;
bool is_romantic_tension_active;
bool toxic_punt;

void scene_interrogation(){
    
    int choice;
    bool condition = true;
    
    cout << "After a brief physical altercation, Robert subdues the Goon by tying him to a chair." << endl <<
    "They then sit quietly inside the Goon's dark apartment room." << endl << endl <<
    
    "Goon: How do you really feel about your father?" << endl << 
    "It's as if, maybe, it's a little more complicated than you feel comfortable admitting" << endl <<
    "Which is completely understandable." << endl << endl <<
    
    "Robert: Look, I loved my dad" << endl << endl <<
    
    "Goon: Your dad's dead, so you don't love him, you 'LOVED' him." << endl << endl <<
    
    "Robert: Listen if I didn't love him, we wouldn't be here, right?" << endl <<
    "Why would I be trying to find the man who killed him if I didn't love him? Why would I be doing any of this??" << endl <<
    "So, here's what's gonna happen." << endl <<
    "I'm gonna hang you off the side of this building, and you're going to tell me where Shroud is," << endl << 
    "or I'm going to drop you to your death." << endl << endl <<
    
    "Goon: I'M NOT TELLING YOU SHIT YOU FUCKING LOSER!" << endl << endl <<
    
    "Robert drags the blindfolded Goon outside the balcony of his 4th floor room" << endl << endl << 
    
    "Goon: Are we outside, you fucking bitch?!" << endl << endl <<
    
    "Robert: Feels windy up here tonight." << endl << endl <<
    
    "Robert started to lift the Goon's chair near the balcony ledge" << endl << endl <<
    
    "Goon: FUCK! WAAAAAAAAAAAAAAAIT!!" << endl << endl <<
    
    "Robert: TELL ME WHERE SHROUD IS!" << endl << endl << 
    
    "Goon: WAIT! FUCK! OK! Uh, uh-- Steel-- Steel Mill." << endl << 
    "Llewelyn uh, Llewelyn Steel Works okay? Fuck" << endl << endl << 
    
    "Robert: You sure about that??" << endl << endl <<
    
    "Goon: YES! PLEAASE THAT'S ALL I KNOW" << endl << endl <<
    
    "Robert: Lower your voice and I'll consider letting you back up" << endl << endl << 
    
    "The Goon refuses to cooperate and keeps shouting for help" << endl << endl << endl << 
    
    "1. Pull him back" << endl << "2. Let him drop" << endl;
    
    
    while(condition == true){
        
        cout << "Enter choice: "; 
        cin >> choice;
        
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
    }
    
    cout << "------------------------------------------------" << endl <<
    "NEXT SCENE" << endl << endl;
};


void scene_street_fight(){
     int choice;
    bool condition = true;
    
    cout << "One night Robert was walking alone the empty streets when suddenly a" << endl << 
    "gang of thieves pulled up next to a television store near him to rob them of their inventory" << endl <<
    "as they were about to get away, Robert speaks up." << endl << endl <<
    
    "Robert: Hey, assholes. Pretty disrespectful for you to be doing that in front of me." << endl << endl <<
    
    "One of the thieves decides to confront Robert himself. With a crowbar at hand, he slowly closes the distance while taunting Robert whose left hand is injured." << endl << endl <<
    
    "Thief: Look, asshole, you're hurt, you're not thinkin' straight." << endl <<
    "You don't wanna fight someone who knows which hand every punch is coming from--" << endl << endl << 
    
    "Just before the thief was able to finish his words, Robert throws a..." << endl << endl <<
    
    "1. Right hand punch" << endl << "2. Left hand punch" << endl;
    
    while(condition == true){
        
        cout << "Enter choice: "; 
        cin >> choice;
        
            if(choice == 1){
                right_hand_countered = true;
                condition = false;
                cout << "The thief expected the right hand punch from Robert and was able to knock him down. The rest of the gang follows suit in Robert's beating." << endl;
            }
                else if(choice == 2){
                    right_hand_countered = false;
                    condition = false;
                    cout << "The thief did not expect a punch from Robert's injured left hand, which gave Robert the upper hand in the confrontation with the gang."  << endl;
                }
                    else{
                        cout << "INVALID INPUT!" << endl;
                    }   
    }
    
    cout << "------------------------------------------------" << endl <<
    "NEXT SCENE" << endl << endl;
};
    

void scene_bar_flambae(){
    int choice;
    bool condition = true;
    
    cout << "One day Robert was drinking at a superhero bar along with his colleague Blonde Blazer. She excuses herself to the washroom. " << endl <<
    "Robert hears a familiar voice." << endl << endl <<
    
    "Flambae: Hey, bitch. Yeah, I'm talkin' to you bitch!" << endl << endl << 
    
    "Robert is very dismissive of Flambae's attempts to get his attention. " << endl << 
    "In the past, Flambae used his signature power of fire for evil until Robert was able to capture him. " << endl << 
    "Now, he's mended his ways and now serves as a superhero." << endl << endl <<
    
    "Flambae: Don't you watch the news? This is a superhero bar." << endl << endl <<
    
    "Flambae is persistent in trying to get an explosive reaction from Robert." << endl <<
    "As it seems like it's not going to stop, Robert looks for a way to defuse the situation." << endl <<
    "In front of him at the bar is a glass of water and a glass of alcohol." << endl << endl <<
    
    "1. Throw water" << endl << "2. Throw alcohol" << endl;
    
    while(condition == true){
        
        cout << "Enter choice: "; 
        cin >> choice;
        
            if(choice == 1){
                condition = false;
                cout << "Flambae's flames was extinguished and the water caused him to slip and hit his face against the bar counter." << endl;
            }   
                else if(choice == 2){
                    blazer_impression_score =  blazer_impression_score + 100;
                    condition = false;
                    cout << "Flambae's flames was powered dramatically, setting himself on fire causing him to panic." << endl <<
                    "Blonde Blazer is impressed by Robert's capabilities to stand up for himself." << endl << endl;
                }
                    else{
                        cout << "INVALID INPUT!" << endl;
                    }  
            
    } 
    
    cout << "------------------------------------------------" << endl <<
    "NEXT SCENE" << endl << endl;
}; 
    
        

void scene_billboard(){

    int choice;
    bool condition = true;
    

    cout << "After getting kicked out of the bar due to the Flambae incident, Blonde blazer carries Robert along with her" << endl << 
    "where they settle down on top of a billboard." << endl << endl << 
    
    "Robert: All this has been pretty... overwhelming, you know." << endl << 
    "I don't get out, often and... I think I really needed this. So, thank you.. for bringing me out." << endl << 
    "I had a really great time." << endl << endl << 
    
    "Blonde Blazer sees that Robert feels comfortable with her that he is able to share his own personal vulnerabilities." << endl <<
    "After listening to his stories, she scoots closer to Robert and rests her palms on his cheeks. She draws her face closer." << endl << 
    "Robert, in the heat of the moment, ... " << endl << endl << 
    
    "1. Chooses to kiss Blonde Blazer" << endl << "2. Lets the moment pass" << endl;
    
     
     while(condition == true){
        
        cout << "Enter choice: "; 
        cin >> choice;
        
            if(choice == 1){
                is_romantic_tension_active = false;
                condition = false;
                cout << "Blonde Blazer and Robert share a kiss. However, Blonde Blazer realizes that she gave the wrong impression to Robert " << endl;
            }
                else if(choice == 2){
                    is_romantic_tension_active = true;
                    condition = false;
                    cout << "Robert sees the situation as being too fast and instead lets the moment pass. Blonde Blazer recognizes his respect for their relationship" << endl << 
                    "which maintains their romantic tension without pressure." << endl;  
                }
                    else{
                        cout << "INVALID INPUT!" << endl;
                    }   
    } 
    
    cout << "------------------------------------------------" << endl <<
    "NEXT SCENE" << endl << endl;
}; 



void scene_combat_toxic(){
    
    int choice;
    bool condition = true;
    
    cout << "Robert heads out to Llewelyn Steel Works which was the place mentioned by the Goon." << endl <<
    "Inside the location he finds a familiar face: Goon himself, which was able to get back here before Robert did. " << endl << 
    "Goon confronts Robert, telling him that he knows humiliating details about Robert's father's passing." << endl <<
    "Goon keeps mocking Robert's father, which in turn, Robert commands his robot to... " << endl << endl << 
    
    "1. Punt Goon" << endl << "2. Stomp Goon" << endl;
    
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
        
        cout << "------------------------------------------------" << endl;  
       
};  
    

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