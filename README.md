# Camouflage_Genetics
 An C++ library for performing genetic biology inspired optimization algorithm.
 
## How it works
- We are starting with creating a certain amount of member for our genetic "puddle".
- Each member gets their own random color at constractor.
- After this we are rating their fitness to our "puddle" by how similar their color to target color. 
- Than we sorting them with their fitness score which is between 0 and 255 _**(bigger better)**_. 
- Now we are diving into biological genetics. In this step member which rated are getting eleminated by half.
- After that we makeing our members reproduce with random other members to have more fitting members to our "puddle". In this step I added a fun variable which is **_mutation_**. Every new member have fixed mutation change which effects our population in good way.
- And finally we need to repeat al those steps till we have totaly fitting population in our "puddle".
