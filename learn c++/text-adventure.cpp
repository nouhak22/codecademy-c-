//litle code to create a playable text base game with multiple choices

#include <iostream>

int main() {

  int task1;
  int task2;
  int task3;
  int force = 0;
  int heal = 0;
  int sword = 0;

  std::cout << "=========================================\n-Welcome to the jedi Academy of Coruscent!\n\n-Today you will have multiple tests to figure out\n what weaknesses and forces you possess!\n=========================================\n-Come along students! we'll be entering the first room now.\n=========================================\n-This is the grand library where all knowledge of the jedi order is stored and protected.\n\n-this first exercise is nothing too complicated.\nyou'll only be tasked to pick a book and read it!\n=========================================\n1.Healing of the force\n2.Weapon of protection\n3.The code\n=========================================\n";

  std::cout << "Type your answer:";
  std::cin >> task1;

  while (task1 < 1 || task1 > 3) {

    std::cout << "\nWrong input, please try again!\n";
    std::cin >> task1;
 
  }

 if (task1 == 1) {

    force++;
    heal++;
    heal++;

    std::cout << "\n=========================================\nThe user of Force healing would place their hand over the wound and pour their own life energy into it, healing the target, although at the expenditure of the user's own vitality, which could be later recovered by resting or meditating.The ability was also capable of curing the user's target of poisoning.At least in the rare case of a Force dyad, the user was able to transfer enough of their own Force energy to bring their target—the other half of their bond—back to life, though at the cost of their own.\n=========================================\n";
  }
  else if (task1 == 2) {

    force++;
    sword++;
    sword++;

    std::cout << "\n=========================================\nThe lightsaber, also referred to as a laser sword by those who were unfamiliar with it, was a weapon usually used by the Jedi, the Sith, and other Force-sensitives. Lightsabers consisted of a plasma blade, powered by a kyber crystal, that was emitted from a usually metal hilt and could be shut off at will. It was a weapon that required skill and training, and was greatly enhanced when used in conjunction with the Force. Though also used by the Sith, the lightsaber was synonymous with the Jedi, with some in the galaxy believing only Jedi could use lightsabers.\nLightsabers were generally used for both offense and defense. A lightsaber could cut through virtually anything, from flesh to blast doors. The only ways to block the incoming attack of a lightsaber was with a weapon made with material that conducted energy, such as an electrostaff, a Z6 riot control baton, some rare metals like beskar, or another lightsaber. When used defensively, a Force-sensitive could deflect blaster bolts with a lightsaber, and with skill, could even reflect the shots back toward the shooter or some other target. Experienced Jedi could even employ their lightsabers to absorb Force lightning. Most practitioners used one single-bladed lightsaber, though some used double-bladed lightsabers or even multiple lightsabers at once.\nLightsaber combat was divided into seven Forms: Form I, Form II, Form III, Form IV, Form V, Form VI, and Form VII.\n=========================================\n";
  }
  else if (task1 == 3) {

    force++;
    sword++;
    force++;

    std::cout << "\n=========================================\nThere is no emotion, there is peace.\nThere is no ignorance, there is knowledge.\nThere is no passion, there is serenity.\nThere is no chaos, there is harmony.\nThere is no death, there is the Force.\n\nWhile the Jedi Code forbade possession and attachments, the Jedi were encouraged and trained to love in terms of compassion. Attachment was the inability to accept change as the fundamental characteristic of life; to accept death as the natural part of life; the inability to let go. Feeding into fear of loss and greed, leading to jealousy, attachment was selfish, a shadow of greed and thus a path of the dark side of the Force. Therefore, attachment was forbidden for a Jedi, who had to train themselves to let go of everything they were afraid to lose; to renounce all attachments. Thus, they could be compassionate and loving and caring, but not be possessive and grabbing and holding on to things, trying to keep them frozen in time, accepting the transitional nature of life. This allowed them to love the totality of life unconditionally without selectively choosing individual life-forms to become selfishly attached to.\n=========================================\n";
  }
  
  std::cout << "-Good work students!\n Now we'll be entering the training area for another test.\n=========================================\n-In this room you'll be faced with a problem with three different outcome. It's for you to choose the one that makes the most sense to you!\n=========================================\n-You're trapped! Enemy troops are on the way and you have two clones with you and one got shot in the leg, reenforcement are there in 45.\n\n1.use the force to barricade the place until reenforcement are there.\n2.heal the clone's leg and use the force to try and find an escape.\n3.go out front and hold the fort until reenforcement are there.\n=========================================\n ";

  std::cout << "Type your answer:";
  std::cin >> task2;

  while (task2 < 1 || task2 > 3) {

    std::cout << "\nWrong input, please try again!\n";
    std::cin >> task2;
 
  }
  if (task2 == 2) {

    force++;
    heal++;
    heal++;

  }
  else if (task2 == 1) {

    force++;
    sword++;
    sword++;

  }
  else if (task2 == 1) {

    force++;
    sword++;
    force++;

  }
  std::cout << force << sword << heal;
  

   
}