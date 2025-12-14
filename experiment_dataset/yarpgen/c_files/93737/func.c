/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93737
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
    var_19 += ((/* implicit */unsigned char) min((var_4), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned char) 1430985355)))));
                                arr_11 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)15698), (arr_9 [i_3 + 2] [i_2] [i_2] [i_1 + 3] [i_1 - 1] [i_0]))))));
                                var_21 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [i_3 - 3] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61093))))));
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 70368744177663LL)) ? (((/* implicit */int) (unsigned short)24041)) : (320405939)));
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_4] [i_3] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15698)) ? (((/* implicit */unsigned int) -1430985356)) : (arr_10 [(unsigned char)17] [(unsigned char)17] [i_1] [(unsigned char)17])))) ? ((+(arr_10 [i_0] [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_2] [i_2] [i_2] [i_1 + 3] [i_0])))))) < (((/* implicit */unsigned int) arr_5 [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_0);
}
