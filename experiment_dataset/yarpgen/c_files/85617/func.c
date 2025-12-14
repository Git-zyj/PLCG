/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85617
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((1622826920U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) 1622826929U)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1622826915U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (1622826908U)))) * (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_8))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) var_11)) ? (1246516688U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1622826915U)) < (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_3 - 2] [i_3 - 1] [i_0] [i_2]) : (arr_6 [i_0] [i_3 - 1] [i_0] [i_3 - 1])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)183)) - (163)))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0] [i_4] [i_2] [i_1]))))) ? (((15) ^ (((/* implicit */int) (signed char)116)))) : (((((/* implicit */int) (short)-2255)) / (-660013258))))))));
                        }
                        for (int i_5 = 4; i_5 < 23; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] [(signed char)10] [2] = ((/* implicit */long long int) 2672140380U);
                            arr_20 [i_0] [i_1] [i_3] &= ((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_0] [i_0] [i_3]) ? ((+(var_17))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))));
                        }
                        var_21 ^= ((/* implicit */unsigned int) ((-2747014625884377394LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        var_22 = arr_4 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1];
                        var_23 = ((/* implicit */int) 1622826889U);
                    }
                }
            } 
        } 
    } 
}
