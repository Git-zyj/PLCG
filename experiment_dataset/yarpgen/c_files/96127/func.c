/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96127
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
    var_18 &= ((unsigned int) 4180908474U);
    var_19 = ((/* implicit */signed char) 5100082300481068845LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) var_5)))) | (max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (((+(((114058822U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2833406717U)))) ? (((/* implicit */int) arr_0 [i_2])) : (var_0))))));
                                var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) 802544991U)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_3])))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [(short)7] [i_0])) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                                var_22 = ((/* implicit */int) var_11);
                                var_23 = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)205))));
                                var_24 *= ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned int) min((1008137569032126569LL), (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16947))) : (((((/* implicit */_Bool) (short)-4406)) ? (1287617755629479608LL) : (5100082300481068843LL)))))));
            }
        } 
    } 
}
