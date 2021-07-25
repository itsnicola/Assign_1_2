# Assign_1_2
 COMP313 Assignment 1
 
 Nicola Hallberg - 300440537
 
 ### Game Title: Robbers of the Knight
 
 ### Game Description:
 #### Main Action: 
 
 Robbers of the Knight is a simple third-person 3d game that traps the player inside a box. Within this, a number of coins spawn at random places and intervals, as well as knights. The aim of the game is collect 10 coins as they appear and before they despawn, and avoid the knights who chase you down constantly. If this game was to be further developed, this could be the first of many levels, where the number of coins needed increases, the rate at which knights spawn could increase and coins spawn could decrease, and maze-like obstacles could spawn. 
 
#### Hardest Part:

 I struggled the most, initially, with trying to setup the player controls. It was the first thing I attempted and I wanted to write it in C++ from scratch. While I did work through a tutorial to get this going, I eventually decided that getting it work perfectly this way with little experience was going to take longer than was necessary, so I switched to using the start-up content. I still learnt a lot from attempting it this way. I also struggled a lot with tracking the amount of coins a player had collected, as I looked through quite a few different tutorials and picked the bits from each that were most relevant. This meant I ended up with multiple variables in different places, and one in the coin actor itself which gets destroyed when a player picks it up - this gave me quite a few headaches trying to resolve.
 
 #### Most Interesting:
 
 The most interesting interaction is the spawner I made in C++, because it brings a level of livelyness and challenge that was very much missing beforehand. The possibility of a knight spawning right in front of the player, or directly in their path, makes the game less predictable and more varied. If I were to replace the scenery and character meshes with more a more appropriate look, this interection has elements that are consistent with that of a horror game. 
 
 ### Video link: https://drive.google.com/file/d/1GHDC-hNeJLMUIFGxW-R1qiNw3OuxtkAZ/view?usp=sharing
 
 ### Resources/Tutorials Followed:
 
 Setting up this github was done following this tutorial: https://odederell3d.blog/2020/04/22/unreal-engine-4-github-first-steps/
 
 Setup of the game, character controls and movements was achieved by following this tutorial: https://docs.unrealengine.com/4.26/en-US/InteractiveExperiences/HowTo/CharacterMovement/, using blueprints and Graph Events. Originally, I tried to follow this https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/ProgrammingWithCPP/CPPTutorials/FirstPersonShooter/2/, but struggled to get it fully implemented and decided to go with the other tutorial instead. 

Coin actors created following this tutorial: https://www.youtube.com/watch?v=EUOF1ETsTuA&ab_channel=OneManArmyStudios.

Menus based on this: https://www.youtube.com/watch?v=EjH-i-NoYAk&ab_channel=MattAspland

CoinSpawner created in C++ by loosely following this tutorial: https://www.youtube.com/watch?v=9yftOwWp48A&ab_channel=DevEnabled

Amount of coins (score) printed to screen following this tutorial: https://www.youtube.com/watch?v=NUrEiaJkn58&list=UUBobmJyzsJ6Ll7UbfhI4iwQ&index=20&ab_channel=UnrealEngine

Music: [song name] by Alexander Nakarada (www.serpentsoundstudios.com)
Licensed under Creative Commons BY Attribution 4.0 License
http://creativecommons.org/licenses/by/4.0/

Character meshes and animations from https://www.mixamo.com/
