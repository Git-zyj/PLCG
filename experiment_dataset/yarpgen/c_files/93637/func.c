/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93637
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0])))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_1 + 1] [i_0])))) ? (((var_6) >> (((-1) + (34))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1 - 1] [i_2] [i_3]) / (((/* implicit */int) (signed char)-45)))))))) ? (((/* implicit */int) ((signed char) arr_4 [i_0 - 2] [i_0]))) : (((/* implicit */int) var_13)));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) arr_6 [i_0]));
                        arr_14 [i_0 + 2] [i_1 + 1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0 - 2] [i_0]);
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((int) var_3)))))) : (var_6)));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned char)233))))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0])) ? (((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */short) arr_9 [i_0] [(short)6] [i_0] [i_6]))))) : (((/* implicit */int) var_2)))))));
                        var_18 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_6]);
                        var_19 *= min((arr_1 [i_0 + 1]), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
                    }
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(var_0))))));
                    var_21 ^= ((/* implicit */int) ((unsigned short) (-(-1403374091))));
                    var_22 = ((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16; i_7 += 3) 
    {
        for (int i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_22 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7] [i_8 + 2])) ? (((/* implicit */int) ((unsigned short) (unsigned short)61136))) : (((/* implicit */int) (unsigned short)21214)))))));
                arr_27 [i_7] [i_8] = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_12);
}
