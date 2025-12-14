/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88073
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) ^ (496655092U)))));
    var_11 = ((signed char) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_1] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)8] [(unsigned short)8])) == (((/* implicit */int) arr_0 [i_0] [i_2])))))))) ? (((unsigned int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) / (3094373130U)))))));
                    arr_8 [i_0] [9U] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (signed char)79)))))), (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0]))));
                    arr_9 [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))))), (((/* implicit */unsigned int) (unsigned short)27543))));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_16 [i_4] [i_4] [i_3] [(signed char)10] [i_0]))))))), (875515193112382930ULL)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_4] [i_1] [i_0]);
                            arr_19 [i_4] [i_0] [i_1] [i_0] = (+(((arr_13 [i_0] [i_0] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)49)))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (274877906942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
}
