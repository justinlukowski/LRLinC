#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct Players {
  int shot;
  int two;
  int twopercent;
  int threepercent;
  float score;
} player;

typedef struct Teams {
  player playerA;
  player playerB;
  player playerC;
  int rebound;
  int id;
  float off;
  float def;
} team;


int typeAndMake(player Default, team Offense, team Defense);
int shotFunction(team *Default, team Second);
int reboundFunction(team off, team def);
void gameFunction(team A, team B);

int main()
{

  //srand(time(0));
  //int test = rand() % 101;
  //int ano = rand() % 101;
  //fprintf(stdout, "\nthis is a test run : %d : %d\n", test, ano);

//Purple Cacti
  team Cacti;
    player Alec;
      Alec.shot = 43;
      Alec.two = 48;
      Alec.twopercent = 39;
      Alec.threepercent = 27;
      Alec.score = 0;
    player Laith;
      Laith.shot = 41;
      Laith.two = 86;
      Laith.twopercent = 48;
      Laith.threepercent = 22;
      Laith.score = 0;
    player Vince;
      Vince.shot = 17;
      Vince.two = 76;
      Vince.twopercent = 29;
      Vince.threepercent = 17;
      Vince.score = 0;
    Cacti.playerA = Alec;
    Cacti.playerB = Laith;
    Cacti.playerC = Vince;
    Cacti.rebound = 63;
    Cacti.id = 1;
    Cacti.off = 0.998;
    Cacti.def = 1.041;


//Cool Gray
  team Gray;
    player Xavier;
      Xavier.shot = 46;
      Xavier.two = 31;
      Xavier.twopercent = 31;
      Xavier.threepercent = 25;
      Xavier.score = 0;
    player Baker;
      Baker.shot = 43;
      Baker.two = 67;
      Baker.twopercent = 52;
      Baker.threepercent = 25;
      Baker.score = 0;
    player Ryan;
      Ryan.shot = 11;
      Ryan.two = 74;
      Ryan.twopercent = 32;
      Ryan.threepercent = 17;
      Ryan.score = 0;
    Gray.playerA = Xavier;
    Gray.playerB = Baker;
    Gray.playerC = Ryan;
    Gray.rebound = 46;
    Gray.id = 2;
    Gray.off = .944;
    Gray.def = .942;

//Moneygrabbers
  team Money;
    player Allan;
      Allan.shot = 30;
      Allan.two = 52;
      Allan.twopercent = 48;
      Allan.threepercent = 38;
      Allan.score = 0;
    player Pj;
      Pj.shot = 38;
      Pj.two = 56;
      Pj.twopercent = 52;
      Pj.threepercent = 38;
      Pj.score = 0;
    player Drew;
      Drew.shot = 32;
      Drew.two = 36;
      Drew.twopercent = 40;
      Drew.threepercent = 33;
      Drew.score = 0;
    Money.playerA = Allan;
    Money.playerB = Pj;
    Money.playerC = Drew;
    Money.rebound = 48;
    Money.id = 3;
    Money.off = 1.154;
    Money.def = 1.117;

//Reggie Carts
  team Carts;
    player Dylan;
      Dylan.shot = 50;
      Dylan.two = 33;
      Dylan.twopercent = 42;
      Dylan.threepercent = 21;
      Dylan.score = 0;
    player Sean;
      Sean.shot = 45;
      Sean.two = 55;
      Sean.twopercent = 49;
      Sean.threepercent = 24;
      Sean.score = 0;
    player Andrew;
      Andrew.shot = 5;
      Andrew.two = 83;
      Andrew.twopercent = 42;
      Andrew.threepercent = 0;
      Andrew.score = 0;
    Carts.playerA = Dylan;
    Carts.playerB = Sean;
    Carts.playerC = Andrew;
    Carts.rebound = 54;
    Carts.id = 4;
    Carts.off = 1.025;
    Carts.def = 1.112;

//2 Greeks 1 Freak
  team Greeks;
    player Dim;
      Dim.shot = 30;
      Dim.two = 56;
      Dim.twopercent = 48;
      Dim.threepercent = 29;
      Dim.score = 0;
    player James;
      James.shot = 38;
      James.two = 54;
      James.twopercent = 31;
      James.threepercent = 25;
      James.score = 0;
    player Colin;
      Colin.shot = 20;
      Colin.two = 58;
      Colin.twopercent = 39;
      Colin.threepercent = 11;
      Colin.score = 0;
    Greeks.playerA = Dim;
    Greeks.playerB = James;
    Greeks.playerC = Colin;
    Greeks.rebound = 51;
    Greeks.id = 5;
    Greeks.off = 1.001;
    Greeks.def = 1.110;

//Helens
  team Helens;
    player Kyle;
      Kyle.shot = 25;
      Kyle.two = 94;
      Kyle.twopercent = 35;
      Kyle.threepercent = 38;
      Kyle.score = 0;
    player Justin;
      Justin.shot = 59;
      Justin.two = 60;
      Justin.twopercent = 41;
      Justin.threepercent = 40;
      Justin.score = 0;
    player Roman;
      Roman.shot = 16;
      Roman.two = 77;
      Roman.twopercent = 38;
      Roman.threepercent = 9;
      Roman.score = 0;
    Helens.playerA = Kyle;
    Helens.playerB = Justin;
    Helens.playerC = Roman;
    Helens.rebound = 52;
    Helens.id = 6;
    Helens.off = 1.007;
    Helens.def = .894;

//Toilet Paper Rolls
  team Rolls;
    player Damski;
      Damski.shot = 29;
      Damski.two = 71;
      Damski.twopercent = 41;
      Damski.threepercent = 30;
      Damski.score = 0;
    player Tony;
      Tony.shot = 52;
      Tony.two = 48;
      Tony.twopercent = 39;
      Tony.threepercent = 31;
      Tony.score = 0;
    player Tim;
      Tim.shot = 19;
      Tim.two = 76;
      Tim.twopercent = 31;
      Tim.threepercent = 13;
      Tim.score = 0;
    Rolls.playerA = Damski;
    Rolls.playerB = Tony;
    Rolls.playerC = Tim;
    Rolls.rebound = 46;
    Rolls.id = 7;
    Rolls.off = .961;
    Rolls.def = .960;

//The Nawf
  team Nawf;
    player Jaedon;
      Jaedon.shot = 24;
      Jaedon.two = 45;
      Jaedon.twopercent = 35;
      Jaedon.threepercent = 28;
      Jaedon.score = 0;
    player Dy;
      Dy.shot = 48;
      Dy.two = 69;
      Dy.twopercent = 36;
      Dy.threepercent = 23;
      Dy.score = 0;
    player Chris;
      Chris.shot = 27;
      Chris.two = 81;
      Chris.twopercent = 32;
      Chris.threepercent = 13;
      Chris.score = 0;
    Nawf.playerA = Jaedon;
    Nawf.playerB = Dy;
    Nawf.playerC = Chris;
    Nawf.rebound = 52;
    Nawf.id = 8;
    Nawf.off = .909;
    Nawf.def = 1.032;    

//Ball Slingers
  team Ball;
    player Dywan;
      Dywan.shot = 32;
      Dywan.two = 92;
      Dywan.twopercent = 43;
      Dywan.threepercent = 15;
      Dywan.score = 0;
    player Ben;
      Ben.shot = 36;
      Ben.two = 39;
      Ben.twopercent = 34;
      Ben.threepercent = 28;
      Ben.score = 0;
    player Kenny;
      Kenny.shot = 32;
      Kenny.two = 59;
      Kenny.twopercent = 38;
      Kenny.threepercent = 23;
      Kenny.score = 0;
    Ball.playerA = Dywan;
    Ball.playerB = Ben;
    Ball.playerC = Kenny;
    Ball.rebound = 52;
    Ball.id = 9;
    Ball.off = .956;
    Ball.def = .937;

//Inverse Oreos
  team Oreos;
    player Ronnie;
      Ronnie.shot = 37;
      Ronnie.two = 50;
      Ronnie.twopercent = 49;
      Ronnie.threepercent = 21;
      Ronnie.score = 0;
    player Cooper;
      Cooper.shot = 40;
      Cooper.two = 34;
      Cooper.twopercent = 39;
      Cooper.threepercent = 28;
      Cooper.score = 0;
    player Jesse;
      Jesse.shot = 20;
      Jesse.two = 33;
      Jesse.twopercent = 24;
      Jesse.threepercent = 15;
      Jesse.score = 0;
    Oreos.playerA = Ronnie;
    Oreos.playerB = Cooper;
    Oreos.playerC = Jesse;
    Oreos.rebound = 38;
    Oreos.id = 10;
    Oreos.off = .924;
    Oreos.def = .739;

//Average Joes
  team Joes;
    player Michael;
      Michael.shot = 29;
      Michael.two = 34;
      Michael.twopercent = 39;
      Michael.threepercent = 32;
      Michael.score = 0;
    player LukeD;
      LukeD.shot = 51;
      LukeD.two = 63;
      LukeD.twopercent = 44;
      LukeD.threepercent = 30;
      LukeD.score = 0;
    player Cole;
      Cole.shot = 20;
      Cole.two = 89;
      Cole.twopercent = 37;
      Cole.threepercent = 29;
      Cole.score = 0;
    Joes.playerA = Michael;
    Joes.playerB = LukeD;
    Joes.playerC = Cole;
    Joes.rebound = 48;
    Joes.id = 11;
    Joes.off = .987;
    Joes.def = 1.003;

//Buckets R Us
  team BRU;
    player Cade;
      Cade.shot = 26;
      Cade.two = 62;
      Cade.twopercent = 38;
      Cade.threepercent = 28;
      Cade.score = 0;
    player David;
      David.shot = 47;
      David.two = 42;
      David.twopercent = 30;
      David.threepercent = 29;
      David.score = 0;
    player Kevin;
      Kevin.shot = 27;
      Kevin.two = 77;
      Kevin.twopercent = 51;
      Kevin.threepercent = 30;
      Kevin.score = 0;
    BRU.playerA = Cade;
    BRU.playerB = David;
    BRU.playerC = Kevin;
    BRU.rebound = 42;
    BRU.id = 12;
    BRU.off = 0.966;
    BRU.def = 1.068;

//Blu3 Men Group
  team BMG;
    player Noah;
      Noah.shot = 36;
      Noah.two = 30;
      Noah.twopercent = 32;
      Noah.threepercent = 36;
      Noah.score = 0;
    player Zach;
      Zach.shot = 26;
      Zach.two = 90;
      Zach.twopercent = 53;
     Zach .threepercent = 19;
      Zach.score = 0;
    player Bilal;
      Bilal.shot = 37;
      Bilal.two = 47;
      Bilal.twopercent = 40;
      Bilal.threepercent = 27;
      Bilal.score = 0;
    BMG.playerA = Noah;
    BMG.playerB = Zach;
    BMG.playerC = Bilal;
    BMG.rebound = 56;
    BMG.id = 13;
    BMG.off = 1.169;
    BMG.def = 0.923;

//98 Bulls
  team Bulls;
    player Nick;
      Nick.shot = 57;
      Nick.two = 59;
      Nick.twopercent = 48;
      Nick.threepercent = 27;
      Nick.score = 0;
    player Luke;
      Luke.shot = 24;
      Luke.two = 63;
      Luke.twopercent = 56;
      Luke.threepercent = 23;
      Luke.score = 0;
    player Gill;
      Gill.shot = 19;
      Gill.two = 47;
      Gill.twopercent = 27;
      Gill.threepercent = 21;
      Gill.score = 0;
    Bulls.playerA = Nick;
    Bulls.playerB = Luke;
    Bulls.playerC = Gill;
    Bulls.rebound = 50;
    Bulls.id = 14;
    Bulls.off = 0.999;
    Bulls.def = 1.069;

//Function Call
  srand(time(0));
  
  int idA = 1;
  int idB = 1;

  fprintf(stdout, "------------------------------------------\n");  
  fprintf(stdout, "1. Purple Cacti\n");
  fprintf(stdout, "2. Cool Gray\n");
  fprintf(stdout, "3. Moneygrabbers\n");
  fprintf(stdout, "4. Reggie Carts\n");
  fprintf(stdout, "5. 2 Greeks 1 Freak\n");
  fprintf(stdout, "6. Helens\n");
  fprintf(stdout, "7. Toilet Paper Rolls\n");
  fprintf(stdout, "8. The Nawf\n");
  fprintf(stdout, "9. Ball Slingers\n");
  fprintf(stdout, "10. Inverse Oreos\n");
  fprintf(stdout, "11. Average Joe's\n");
  fprintf(stdout, "12. Buckets R Us\n");
  fprintf(stdout, "13. Blu3 Men Group\n");
  fprintf(stdout, "14. '98 Bulls\n");
  fprintf(stdout, "------------------------------------------\n");
  fprintf(stdout, "Select the first team: ");
  scanf("%d", &idA);
  fprintf(stdout, "Select the second team: ");
  scanf("%d", &idB);
  fprintf(stdout, "------------------------------------------\n");

  team A;
  team B;

  switch(idA) {
    case 1: A = Cacti;
            break;
    case 2: A = Gray;
            break;
    case 3: A = Money;
            break;
    case 4: A = Carts;
            break;
    case 5: A = Greeks;
            break;
    case 6: A = Helens;
            break;
    case 7: A = Rolls;
            break;
    case 8: A = Nawf;
            break;
    case 9: A = Ball;
            break;
    case 10: A = Joes;
            break;
    case 11: A = Oreos;
            break;
    case 12: A = BRU;
            break;
    case 13: A = BMG;
            break;
    case 14: A = Bulls;
            break;
}

  switch(idB) { 
    case 1: B = Cacti;
            break;
    case 2: B = Gray;
            break;
    case 3: B = Money;
            break;
    case 4: B = Carts;
            break;
    case 5: B = Greeks;
            break;
    case 6: B = Helens;
            break;
    case 7: B = Rolls;
            break;
    case 8: B = Nawf;
            break;
    case 9: B = Ball;
            break;
    case 10: B = Joes;
            break;
    case 11: B = Oreos;
            break;
    case 12: B = BRU;
            break;
    case 13: B = BMG;
            break;
    case 14: B = Bulls;
            break;
}

  gameFunction(A, B);

  return 0;
}

int typeAndMake(player Default, team Offense, team Defense)
{
  int type = rand() % 101;
  int make = rand() % 101;

  float difficulty = Offense.off - Defense.def;
  float reset = difficulty*25;
  float compare = 27/41;
  float diff2 = reset*compare;
  float diff3 = reset*(1-compare);
  //diff2 = 0;
  //diff3 = 0;

  if(type <= Default.two) //2pt attempt
  {
    if(make <= (Default.twopercent + diff2)) //made 2
    {
      return 2;
    }
    else //missed 2
    {
      return 0;
    }
  }
  else //3pt attempt
  {
    if(make <= (Default.threepercent + diff3)) //made 3
    {
      return 3;
    }
    else //missed 3
    {
      return 0;
    }
  }

}


int shotFunction(team *Default, team Second)
{
  int shot = rand() % 101;
  int score = 0;

  if(shot <= Default->playerA.shot) //playerA shoots
  {
    score = typeAndMake(Default->playerA, *Default, Second);
    Default->playerA.score += score;
  }
  else if(shot <= (Default->playerA.shot + Default->playerB.shot)) //playerB shoots
  {
    score = typeAndMake(Default->playerB, *Default, Second);
    Default->playerB.score += score;
  }
  else //playerC shoots
  {
    score = typeAndMake(Default->playerC, *Default, Second);
    Default->playerC.score += score;
  }

  return score;
}

int reboundFunction(team off, team def)
{
  int offrate = off.rebound;
  int defrate = 1.5*def.rebound;

  int reb = rand() % (offrate + defrate);

  if(reb <= offrate)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


void gameFunction(team A, team B)
{
  int winsA = 0;
  int winsB = 0;
  float totalA = 0;
  float totalB = 0;
  int scoreA = 0;
  int scoreB = 0;
  int pointsA = 0;
  int pointsB = 0;
  int rebA = 0;
  int rebB = 0;
  int games = 1;

  while(games <= 100000)
  {
    while((scoreA < 50) && (scoreB < 50))
    {
      pointsA = shotFunction(&A, B);
      scoreA += pointsA;

      if(pointsA == 0) //missed shot
      {
        rebA = reboundFunction(A, B);
        if(rebA == 0) //B grabs rebound
        {
          rebB = 1;
          while(rebB == 1)
          {
            pointsB = shotFunction(&B, A);
            scoreB += pointsB;
            if(pointsB == 0)
            {
              rebB = reboundFunction(B, A);
            }
            else
            {
              //do nothing, return to top, A ball
              rebB = 0;
            }
          }
        }
        else //A grabs rebound
        {
          //do nothing, return to top, A ball
        }
      }
      else //made shot
      {
        if(scoreA >= 50)
        {
          break;
        }
        pointsB = shotFunction(&B, A);
        scoreB += pointsB;
        if(pointsB == 0) // missed shot
        {
          rebB = reboundFunction(B, A);
          if(rebB == 0) //A grabs rebound
          {
            //do nothing, return to top, A ball
          }
          else //B grabs rebound
          {
            rebB = 1;
            while(rebB == 1)
            {
              pointsB = shotFunction(&B, A);
              scoreB += pointsB;
              if(pointsB == 0)
              {
                rebB = reboundFunction(B, A);
              }
              else
              {
                //do nothing, return to top, A ball
                rebB = 0;
              }
            }
          }
        }
        else //made shot
        {
          //do nothing, return to top, A ball
        }
      }
    }
    if(scoreA > scoreB)
    {
      winsA++;
    }
    else
    {
      winsB++;
    }
    games++;
    totalA += scoreA;
    totalB += scoreB;
    scoreA = 0;
    scoreB = 0;
  }


   games = games - 1;
   float avgA = totalA/games;
   float avgB = totalB/games;
   float scale = 1;
   float newA = 0;
   float newB = 0;
   float spread = 0;
   if(avgA > avgB)
   {
     scale = 50/avgA;
     newB = scale * avgB;
     spread = 50 - newB;
   }
   else
   {
     scale = 50/avgB;
     newA = scale * avgA;
     spread = 50 - newA;
   }

   float tempA = (A.playerA.score + A.playerB.score + A.playerC.score)/games;
   float tempB = (B.playerA.score + B.playerB.score + B.playerC.score)/games;


   fprintf(stdout, "------------------------------------------\n");
   fprintf(stdout, "TeamA average score: %f\n", (totalA/games));
   fprintf(stdout, "TeamA total wins: %d\n", winsA);
   fprintf(stdout, "playerA: %f\n",(float)(A.playerA.score/(games)));
   fprintf(stdout, "playerB: %f\n",(float)(A.playerB.score/(games)));
   fprintf(stdout, "playerC: %f\n",(float)(A.playerC.score/(games)));
   fprintf(stdout, "------------------------------------------\n");
   fprintf(stdout, "TeamB average score: %f\n", (totalB/games));
   fprintf(stdout, "TeamB total wins: %d\n", winsB);
   fprintf(stdout, "playerA: %f\n",(float)(B.playerA.score/(games)));
   fprintf(stdout, "playerB: %f\n",(float)(B.playerB.score/(games)));
   fprintf(stdout, "playerC: %f\n",(float)(B.playerC.score/(games)));
   fprintf(stdout, "------------------------------------------\n");
   if(avgA > avgB)
   {
     fprintf(stdout, "TeamA is the favorite by %f points\n", spread);
     fprintf(stdout, "TeamA wins %d%% of the time\n", ((winsA*100)/games));
   }
   else
   {
     fprintf(stdout, "TeamB is the favorite by %f points\n", spread);
     fprintf(stdout, "TeamB wins %d%% of the time\n", ((winsB*100)/games));
   }
   fprintf(stdout, "------------------------------------------\n");
   //fprintf(stdout, "tempA = %f, tempB = %f\n", tempA, tempB);
}


