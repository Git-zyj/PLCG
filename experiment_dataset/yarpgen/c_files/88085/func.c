/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88085
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
    var_12 = var_2;
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (var_11)))) || (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_11)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_7)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!((_Bool)1)));
        arr_3 [i_0] [17ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)9)) + (((/* implicit */int) (short)23784)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_5))))) * (min((552079479U), (((/* implicit */unsigned int) (_Bool)0))))));
                    arr_10 [15ULL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((var_9) < (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37)))) / (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)24975)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [(short)8] [(short)8] = ((/* implicit */unsigned short) (unsigned char)48);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [(unsigned short)3] [i_0] [i_0] [3] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((14976617166638854655ULL) != (((/* implicit */unsigned long long int) -1304134835))))))), (((/* implicit */int) var_10))));
                                arr_22 [i_3] [i_3] [3ULL] [i_5] = max((min((arr_7 [i_5 - 2] [i_6 + 1] [(short)13] [(short)13]), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((_Bool) (signed char)-26))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
                                arr_24 [i_0] [i_0] [i_4] [i_5] [18ULL] &= ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) max(((unsigned short)35215), (((/* implicit */unsigned short) (unsigned char)19))))) ? (min((var_1), (((/* implicit */unsigned long long int) var_10)))) : (arr_19 [i_0] [i_0] [(short)13] [i_0] [(unsigned short)18] [i_4]))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0]))));
                    arr_26 [i_0] [i_3] [i_3] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    }
}
