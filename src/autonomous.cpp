#include <iostream>
#include <fstream>
#include <cmath>
#include <bits/stdc++.h> 

using namespace std;

class Zeah{//records data
    public:
        Zeah(){

        }
};

class Befehler{//determines where to go
    public:
        //LRB LRC LRF LS1 LS2 LS3 CS1 CS2 RS1 RS2 RS3 RRB RRC RRF LP LC H3 H2 H1 RC RP
        /*1     LRB1 LRB2 LRB3 
          4     LRF1 LRF2 LRF3
          7     LRCB1 LRCB2 LRCB3
          10    LRCF1 LRCF2 LRCF3

          13      LSH1 LSC1 LSH2 
          16      LSC2 LSH3 LSC3
          19      CSH1 CSC1 CSH1 
          22      CSC2
          23      RSH1 RSC1 RSH2 
          26      RSC2 RSH3 RSC3

          29      RRB1 RRB2 RRB3 
          32      RRF1 RRF2 RRF3
          35      RRCB1 RRCB2 RRCB3
          38      RRCF1 RRCF2 RRCF3
        */
        
		//int time;
        
		Befehler(string start){
            //time = 150;
            pos = start;
            bias = "right";
        }
		
		string call() {
			if (holdingCargo) { return "STANDBY"; }
			else if (holdingHatch) { return "STANDBY"; }
			//Determine which half of the map the robot is currently on, return most convenient port and object to call

		}

		void AllesLosen() {//Alles Lösen
			if (bias == "left") {
				if (cleared[0] != 0) { target = "LRB1"; }//call a function to go to cleared(0)
				else if (cleared[1] != 0) { target = "LRB2"; }
				else if (cleared[2] != 0) { target = "LRB3"; }
				else if (cleared[3] != 0) { target = "LRF1"; }
				else if (cleared[4] != 0) { target = "LRF2"; }
				else if (cleared[5] != 0) { target = "LRF3"; }
				else if (cleared[12] != 0) { target = "LSH1"; }
				else if (cleared[13] != 0) { target = "LSH2"; }
				else if (cleared[14] != 0) { target = "LSH3"; }
				else if (cleared[24] != 0) { target = "CSH1"; }
				else if (cleared[25] != 0) { target = "CSH2"; }
				else if (cleared[6] != 0) { target = "LRCB1"; }
				else if (cleared[7] != 0) { target = "LRCB2"; }
				else if (cleared[8] != 0) { target = "LRCB3"; }
				else if (cleared[9] != 0) { target = "LRCF1"; }
				else if (cleared[10] != 0) { target = "LRCF2"; }
				else if (cleared[11] != 0) { target = "LRCF3"; }
				else if (cleared[15] != 0) { target = "LSC1"; }//HERE
				else if (cleared[16] != 0) { target = "LSC2"; }
				else if (cleared[17] != 0) { target = "LSC3"; }
				else if (cleared[26] != 0) { target = "CS1"; }
				else if (cleared[27] != 0) { target = "CS2"; }
				else if (cleared[18] != 0) { target = "RSH1"; }
				else if (cleared[19] != 0) { target = "RSH2"; }
				else if (cleared[20] != 0) { target = "RSH3"; }
				else if (cleared[21] != 0) { target = "RSC1"; }
				else if (cleared[22] != 0) { target = "RSC2"; }
				else if (cleared[23] != 0) { target = "RSC3"; }
				else if (cleared[28] != 0) { target = "RRB1"; }
				else if (cleared[29] != 0) { target = "RRB2"; }
				else if (cleared[30] != 0) { target = "RRB3"; }
				else if (cleared[31] != 0) { target = "RRF1"; }
				else if (cleared[32] != 0) { target = "RRF2"; }
				else if (cleared[33] != 0) { target = "RRF3"; }
				else if (cleared[34] != 0) { target = "RRCB1"; }
				else if (cleared[35] != 0) { target = "RRCB2"; }
				else if (cleared[36] != 0) { target = "RRCB3"; }
				else if (cleared[37] != 0) { target = "RRCF1"; }
				else if (cleared[38] != 0) { target = "RRCF2"; }
				else if (cleared[39] != 0) { target = "RRCF3"; }
			}
			else if (bias == "left rocket") {
				if (cleared[0] != 0) { target = "LRB1"; }
				else if (cleared[1] != 0) { target = "LRB2"; }
				else if (cleared[2] != 0) { target = "LRB3"; }
				else if (cleared[3] != 0) { target = "LRF1"; }
				else if (cleared[4] != 0) { target = "LRF2"; }
				else if (cleared[5] != 0) { target = "LRF3"; }
				else if (cleared[6] != 0) { target = "LRCB1"; }
				else if (cleared[7] != 0) { target = "LRCB2"; }
				else if (cleared[8] != 0) { target = "LRCB3"; }
				else if (cleared[9] != 0) { target = "LRCF1"; }
				else if (cleared[10] != 0) { target = "LRCF2"; }
				else if (cleared[11] != 0) { target = "LRCF3"; }
				else if (cleared[12] != 0) { target = "LSH1"; }
				else if (cleared[13] != 0) { target = "LSH2"; }
				else if (cleared[14] != 0) { target = "LSH3"; }
				else if (cleared[15] != 0) { target = "LSC1"; }
				else if (cleared[16] != 0) { target = "LSC2"; }
				else if (cleared[17] != 0) { target = "LSC3"; }
				else if (cleared[24] != 0) { target = "CSH1"; }
				else if (cleared[25] != 0) { target = "CSH2"; }
				else if (cleared[26] != 0) { target = "CSC1"; }
				else if (cleared[27] != 0) { target = "CSC2"; }
				else if (cleared[18] != 0) { target = "RSH1"; }
				else if (cleared[19] != 0) { target = "RSH2"; }
				else if (cleared[20] != 0) { target = "RSH3"; }
				else if (cleared[21] != 0) { target = "RSC1"; }
				else if (cleared[22] != 0) { target = "RSC2"; }
				else if (cleared[23] != 0) { target = "RSC3"; }
				else if (cleared[28] != 0) { target = "RRB1"; }
				else if (cleared[29] != 0) { target = "RRB2"; }
				else if (cleared[30] != 0) { target = "RRB3"; }
				else if (cleared[31] != 0) { target = "RRF1"; }
				else if (cleared[32] != 0) { target = "RRF2"; }
				else if (cleared[33] != 0) { target = "RRF3"; }
				else if (cleared[34] != 0) { target = "RRCB1"; }
				else if (cleared[35] != 0) { target = "RRCB2"; }
				else if (cleared[36] != 0) { target = "RRCB3"; }
				else if (cleared[37] != 0) { target = "RRCF1"; }
				else if (cleared[38] != 0) { target = "RRCF2"; }
				else if (cleared[39] != 0) { target = "RRCF3"; }
			}
			else if (bias == "ship") {
				if (cleared[24] != 0) { target = "CSH1"; }
				else if (cleared[25] != 0) { target = "CSH2"; }
				else if (cleared[26] != 0) { target = "CSC1"; }
				else if (cleared[27] != 0) { target = "CSC2"; }
				else if (cleared[12] != 0) { target = "LSH1"; }
				else if (cleared[18] != 0) { target = "RSH1"; }
				else if (cleared[13] != 0) { target = "LSH2"; }
				else if (cleared[19] != 0) { target = "RSH2"; }
				else if (cleared[14] != 0) { target = "LSH3"; }
				else if (cleared[20] != 0) { target = "RSH3"; }
				else if (cleared[15] != 0) { target = "LSC1"; }
				else if (cleared[21] != 0) { target = "RSC1"; }
				else if (cleared[16] != 0) { target = "LSC2"; }
				else if (cleared[22] != 0) { target = "RSC2"; }
				else if (cleared[17] != 0) { target = "LSC3"; }
				else if (cleared[23] != 0) { target = "RSC3"; }
				else if (cleared[0] != 0) { target = "LRB1"; }
				else if (cleared[1] != 0) { target = "LRB2"; }
				else if (cleared[2] != 0) { target = "LRB3"; }
				else if (cleared[3] != 0) { target = "LRF1"; }
				else if (cleared[4] != 0) { target = "LRF2"; }
				else if (cleared[5] != 0) { target = "LRF3"; }
				else if (cleared[6] != 0) { target = "LRCB1"; }
				else if (cleared[7] != 0) { target = "LRCB2"; }
				else if (cleared[8] != 0) { target = "LRCB3"; }
				else if (cleared[9] != 0) { target = "LRCF1"; }
				else if (cleared[10] != 0) { target = "LRCF2"; }
				else if (cleared[11] != 0) { target = "LRCF3"; }
				else if (cleared[28] != 0) { target = "RRB1"; }
				else if (cleared[29] != 0) { target = "RRB2"; }
				else if (cleared[30] != 0) { target = "RRB3"; }
				else if (cleared[31] != 0) { target = "RRF1"; }
				else if (cleared[32] != 0) { target = "RRF2"; }
				else if (cleared[33] != 0) { target = "RRF3"; }
				else if (cleared[34] != 0) { target = "RRCB1"; }
				else if (cleared[35] != 0) { target = "RRCB2"; }
				else if (cleared[36] != 0) { target = "RRCB3"; }
				else if (cleared[37] != 0) { target = "RRCF1"; }
				else if (cleared[38] != 0) { target = "RRCF2"; }
				else if (cleared[39] != 0) { target = "RRCF3"; }
			}
			else if (bias == "right rocket") {
				if (cleared[28] != 0) { target = "RRB1"; }
				else if (cleared[29] != 0) { target = "RRB2"; }
				else if (cleared[30] != 0) { target = "RRB3"; }
				else if (cleared[31] != 0) { target = "RRF1"; }
				else if (cleared[32] != 0) { target = "RRF2"; }
				else if (cleared[33] != 0) { target = "RRF3"; }
				else if (cleared[34] != 0) { target = "RRCB1"; }
				else if (cleared[35] != 0) { target = "RRCB2"; }
				else if (cleared[36] != 0) { target = "RRCB3"; }
				else if (cleared[37] != 0) { target = "RRCF1"; }
				else if (cleared[38] != 0) { target = "RRCF2"; }
				else if (cleared[39] != 0) { target = "RRCF3"; }
				else if (cleared[18] != 0) { target = "RSH1"; }
				else if (cleared[19] != 0) { target = "RSH2"; }
				else if (cleared[20] != 0) { target = "RSH3"; }
				else if (cleared[21] != 0) { target = "RSC1"; }
				else if (cleared[22] != 0) { target = "RSC2"; }
				else if (cleared[23] != 0) { target = "RSC3"; }
				else if (cleared[24] != 0) { target = "CSH1"; }
				else if (cleared[25] != 0) { target = "CSH2"; }
				else if (cleared[26] != 0) { target = "CSC1"; }
				else if (cleared[27] != 0) { target = "CSC2"; }
				else if (cleared[12] != 0) { target = "LSH1"; }
				else if (cleared[13] != 0) { target = "LSH2"; }
				else if (cleared[14] != 0) { target = "LSH3"; }
				else if (cleared[15] != 0) { target = "LSC1"; }
				else if (cleared[16] != 0) { target = "LSC2"; }
				else if (cleared[17] != 0) { target = "LSC3"; }
				else if (cleared[0] != 0) { target = "LRB1"; }
				else if (cleared[1] != 0) { target = "LRB2"; }
				else if (cleared[2] != 0) { target = "LRB3"; }
				else if (cleared[3] != 0) { target = "LRF1"; }
				else if (cleared[4] != 0) { target = "LRF2"; }
				else if (cleared[5] != 0) { target = "LRF3"; }
				else if (cleared[6] != 0) { target = "LRCB1"; }
				else if (cleared[7] != 0) { target = "LRCB2"; }
				else if (cleared[8] != 0) { target = "LRCB3"; }
				else if (cleared[9] != 0) { target = "LRCF1"; }
				else if (cleared[10] != 0) { target = "LRCF2"; }
				else if (cleared[11] != 0) { target = "LRCF3"; }
			}
			else if (bias == "right") {
				if (cleared[28] != 0) { target = "RRB1"; }
				else if (cleared[29] != 0) { target = "RRB2"; }
				else if (cleared[30] != 0) { target = "RRB3"; }
				else if (cleared[31] != 0) { target = "RRF1"; }
				else if (cleared[32] != 0) { target = "RRF2"; }
				else if (cleared[33] != 0) { target = "RRF3"; }
				else if (cleared[18] != 0) { target = "RSH1"; }
				else if (cleared[19] != 0) { target = "RSH2"; }
				else if (cleared[20] != 0) { target = "RSH3"; }
				else if (cleared[24] != 0) { target = "CSH1"; }
				else if (cleared[25] != 0) { target = "CSH2"; }
				else if (cleared[34] != 0) { target = "RRCB1"; }
				else if (cleared[35] != 0) { target = "RRCB2"; }
				else if (cleared[36] != 0) { target = "RRCB3"; }
				else if (cleared[37] != 0) { target = "RRCF1"; }
				else if (cleared[38] != 0) { target = "RRCF2"; }
				else if (cleared[39] != 0) { target = "RRCF3"; }
				else if (cleared[21] != 0) { target = "RSC1"; }
				else if (cleared[22] != 0) { target = "RSC2"; }
				else if (cleared[23] != 0) { target = "RSC3"; }
				else if (cleared[26] != 0) { target = "CSC1"; }
				else if (cleared[27] != 0) { target = "CS2"; }
				else if (cleared[12] != 0) { target = "LSH1"; }
				else if (cleared[13] != 0) { target = "LSH2"; }
				else if (cleared[14] != 0) { target = "LSH3"; }
				else if (cleared[15] != 0) { target = "LSC1"; }
				else if (cleared[16] != 0) { target = "LSC2"; }
				else if (cleared[17] != 0) { target = "LSC3"; }
				else if (cleared[0] != 0) { target = "LRB1"; }
				else if (cleared[1] != 0) { target = "LRB2"; }
				else if (cleared[2] != 0) { target = "LRB3"; }
				else if (cleared[3] != 0) { target = "LRF1"; }
				else if (cleared[4] != 0) { target = "LRF2"; }
				else if (cleared[5] != 0) { target = "LRF3"; }
				else if (cleared[6] != 0) { target = "LRCB1"; }
				else if (cleared[7] != 0) { target = "LRCB2"; }
				else if (cleared[8] != 0) { target = "LRCB3"; }
				else if (cleared[9] != 0) { target = "LRCF1"; }
				else if (cleared[10] != 0) { target = "LRCF2"; }
				else if (cleared[11] != 0) { target = "LRCF3"; }
			}
			else if (bias == "hatch") {}
			else if (bias == "cargo") {}
		}

		void map(string tar) { //feed in target, function will edit targetposx and y
			//Absolute
			if (tar == "LRB1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRB2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRB3") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRF1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRF2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRF3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Area
			else if (tar == "LRCB1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRCB2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRCB3") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRCF1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRCF2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LRCF3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Absolute
			else if (tar == "LSH1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LSH2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LSH3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Area
			else if (tar == "LSC1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LSC2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LSC3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Absolute
			else if (tar == "RSH1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RSH2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RSH3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Area
			else if (tar == "RSC1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RSC2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RSC3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Absolute
			else if (tar == "CSH1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "CSH2") { targetPosX = ; targetPosY = ; orientation = ; }
			//Area
			else if (tar == "CSC1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "CSC2") { targetPosX = ; targetPosY = ; orientation = ; }
			//Absolute
			else if (tar == "RRB1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRB2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRB3") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRF1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRF2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRF3") { targetPosX = ; targetPosY = ; orientation = ; }
			//Area
			else if (tar == "RRCB1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRCB2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRCB3") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRCF1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRCF2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RRCF3") { targetPosX = ; targetPosY = ; orientation = ; }

			//Non-Scoring Regions
			else if (tar == "LP") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LC") { targetPosX = ; targetPosY = ; orientation = ; }

			else if (tar == "H3") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "LH2") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "H1") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RH2") { targetPosX = ; targetPosY = ; orientation = ; }
			
			else if (tar == "RC") { targetPosX = ; targetPosY = ; orientation = ; }
			else if (tar == "RP") { targetPosX = ; targetPosY = ; orientation = ; }
			/*
			Position Adjustment Algorithms will be handled by Prufer, as all targets have a range of acceptable positions
			The robot will not be allowed to enter enemy territory, to avoid complications with rules (1 robot crossing per run)
			*/
		}
    private:
        string target;
		double currentPosX, currentPosY,targetPosX, targetPosY, orientation;//orientation is a bearing in radians
		double robotLen; //distance between camera and front bumper, will compensate for x and y positions in target mapping
		int cleared[40];
		bool holdingCargo, holdingHatch;
        

};

class Kampfer{//piloting
    public:
        double leftSpeed, rightSpeed;
        bool carryingCargo, carryingHatch;
        int gearState;//either 0 (slow) or 1 (turbo)
        Kampfer(){
            leftSpeed=0,rightSpeed=0;
            carryingCargo=false,carryingHatch=true;
            gearState=1;
        }
        void LesenEinsweig(){
            gearState=0;
        }
        void Einsweg(){
            gearState=0;
            leftSpeed=100, rightSpeed=100;
        }
};

class Prufer{//data processing
    public:
        double 
            //Dynamic Storage
            **input,
            **hiddenState,
            **oldHiddenState,
            **output,

            //Memory Storage
            **output_gate,
            **input_gate,
            **inputMod_gate,
            **forget_gate,
            **memory_gate,

            //Weight Storage
            **wOutput_gate,
            **wInput_gate,
            **wInputMod_gate,
            **wForget_gate,

            **uOutput_gate,
            **uInput_gate,
            **uInputMod_gate,
            **uForget_gate,
            **w1,

            //Bias Storage
            **biasO,
            **biasI,
            **biasM,
            **biasF,
            **biasC,
            **biasY;

        //
        void Shurapokryphen(){//determines position (using sensor data)

        }
        void Umweg(){//determines how to get there (object avoidance)

        }
        
        Prufer(){
            int
                inputX = 1,inputY = 20,
                
                hiddenStateX = 1,hiddenStateY = 10,
                oldHiddenStateX = 1,oldHiddenStateY = 10,
                
                outputX = 1,outputY = 2,
                wOutput_gateX = 20,wOutput_gateY = 10,
                wInput_gateX = 20,wInput_gateY = 10,
                wInputMod_gateX = 20,wInputMod_gateY = 10,
                wForget_gateX = 20,wForget_gateY = 10,
                
                uOutput_gateX = 10,uOutput_gateY = 10,
                uInput_gateX = 10,uInput_gateY = 10,
                uInputMod_gateX = 10,uInputMod_gateY = 10,
                uForget_gateX = 10,uForget_gateY = 10,
                
                w1X = 10,w1Y = 5,
                
                output_gateX = 1,output_gateY = 10,
                input_gateX = 1,input_gateY = 10,
                inputMod_gateX = 1,inputMod_gateY = 10,
                forget_gateX = 1,forget_gateY = 10,
                memory_gateX = 1,memory_gateY = 10,
                biasOX = 1,biasOY = 10,
                biasIX = 1,biasIY = 10,
                biasMX = 1,biasMY = 10,
                biasFX = 1,biasFY = 10,
                biasCX = 1,biasCY = 10,
                biasYX = 1,biasYY = 2;
        
            input = new double*[inputY],
            hiddenState = new double*[hiddenStateY],
            oldHiddenState = new double*[oldHiddenStateY],
            output = new double*[outputY],
            wOutput_gate = new double*[wOutput_gateY],
            wInput_gate = new double*[wInput_gateY],
            wInputMod_gate = new double*[wInputMod_gateY],
            wForget_gate = new double*[wForget_gateY],
            uOutput_gate = new double*[uOutput_gateY],
            uInput_gate = new double*[uInput_gateY],
            uInputMod_gate = new double*[uInputMod_gateY],
            uForget_gate = new double*[uForget_gateY],
            w1 = new double*[w1Y],
            output_gate = new double*[output_gateY],
            input_gate = new double*[input_gateY],
            inputMod_gate = new double*[inputMod_gateY],
            forget_gate = new double*[forget_gateY],
            memory_gate = new double*[memory_gateY],
            biasO = new double*[biasOY],
            biasI = new double*[biasIY],
            biasM = new double*[biasMY],
            biasF = new double*[biasFY],
            biasC = new double*[biasCY],
            biasY = new double*[biasYY];
            wOutput_gate = new double*[wOutput_gateY];

            for(int i=0;i<2;i++){
                output[i]=new double[outputX];
            }
            for(int i=0;i<20;i++){
                input[i]=new double[inputX];
            }
            for(int i=0;i<5;i++){
                w1[i]=new double[w1X];
            }
            for(int i=0;i<10;i++){
                hiddenState[i]=new double[hiddenStateX];
                oldHiddenState[i]=new double[oldHiddenStateX];
                wOutput_gate[i]=new double[wOutput_gateX];
                wInput_gate[i]=new double[wInput_gateX];
                wInputMod_gate[i]=new double[wInputMod_gateX];
                wForget_gate[i]=new double[wForget_gateX];
                uOutput_gate[i]=new double[uOutput_gateX];
                uInput_gate[i]=new double[uInput_gateX];
                uInputMod_gate[i]=new double[uInputMod_gateX];
                uForget_gate[i]=new double[uForget_gateX];
                output_gate[i]=new double[output_gateX];
                input_gate[i]=new double[input_gateX];
                inputMod_gate[i]=new double[inputMod_gateX];
                forget_gate[i]=new double[forget_gateX];
                memory_gate[i]=new double[memory_gateX];
                biasO[i]=new double[biasOX];
                biasI[i]=new double[biasIX];
                biasM[i]=new double[biasMX];
                biasF[i]=new double[biasFX];
                biasC[i]=new double[biasCX];
                biasY[i]=new double[biasYX];
            }

            for(int i=0;i<wOutput_gateY;i++) wOutput_gate[i]=new double[wOutput_gateX];


            for(int i=0;i<wOutput_gateY;i++) {
                for (int j=0;j<wOutput_gateX;j++){
                wOutput_gate[i][j] = 50;
                //cout<<"k"<<endl;
                }
            }

            //gen random values

            for (int i = 0; i < 10; i++) { 
                for (int j = 0; j < 20; j++) { 
                    wOutput_gate[i][j] = rand() % 10-5;
                    wInput_gate[i][j] = rand() % 10;
                    wInputMod_gate[i][j] = rand() % 10;
                    wForget_gate[i][j] = rand() % 10;
                } 
            } 
            
            for (int i = 0; i < 10; i++) { 
                for (int j = 0; j < 10; j++) { 
                    uOutput_gate[i][j] = rand() % 10;
                    uInput_gate[i][j] = rand() % 10;
                    uInputMod_gate[i][j] = rand() % 10;
                    uForget_gate[i][j] = rand() % 10; 
                } 
            } 
            for (int i = 0; i < 5; i++) { 
                for (int j = 0; j < 10; j++) { 
                    w1[i][j] = rand() % 10; 
                } 
            } 
            for (int i = 0; i < 10; i++) { 
                for (int j = 0; j < 1; j++) { 
                    biasO[i][j] = rand() % 10 -5;
                    biasI[i][j] = rand() % 10 -5;
                    biasM[i][j] = rand() % 10;
                    biasF[i][j] = rand() % 10;
                    biasC[i][j] = rand() % 10;
                    biasY[i][j] = rand() % 10 -5; 
                } 
            }
        }
};

class Zeichner{//utility
    public:
        static double sig(double x){
            return 1/(1 + exp(-x));
        }
        static double ReLU(double x){
            if(x>0) return x;
            else return 0.181818*x;
        };
        static void multi(double **a, double **b, double **c,int ax, int ay, int bx){ 
            int cx = bx, cy=ay;
            for(int i=0;i<cy;i++){
                for (int j=0;j<cx;j++){
                    for (int k=0;k<ax;k++){
                        c[i][j]+=a[i][k] * b[k][j];
                    }
                }
            }
        }
		void portCall() {
			
		}
	private:
		string call;
};

int main(){
    
    return 0;
}