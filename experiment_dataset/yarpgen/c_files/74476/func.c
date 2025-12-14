/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74476
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) (-(((5708936137351011654ULL) - (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_3] [i_4 + 1]))))));
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(5708936137351011655ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) : (arr_10 [i_0] [i_1] [i_2] [i_1] [(_Bool)1]))))))) ? ((-(arr_12 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]))) : (min((min((arr_11 [3] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (var_0) : (((/* implicit */unsigned int) 1087501774)))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [4ULL] [i_1] [(short)2]))) + ((+(arr_8 [i_0] [i_1])))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_13 = (!(((18163932773326037480ULL) < (((/* implicit */unsigned long long int) -1LL)))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            {
                var_14 = ((/* implicit */int) (-(1287253079U)));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_5] [i_6 + 1]))) ? (((((/* implicit */_Bool) arr_13 [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_13 [i_6] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_5] [i_6 - 1])))) : (((/* implicit */int) ((unsigned char) 268435455)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) / (min((arr_9 [i_5] [21] [i_7 + 1] [i_7 + 1]), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-55))))));
                    var_17 += ((/* implicit */_Bool) min((((int) min((((/* implicit */unsigned int) (_Bool)0)), (3007714200U)))), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2512160932U))))));
                    var_18 = ((/* implicit */signed char) min(((-(((unsigned int) 1287253079U)))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                }
            }
        } 
    } 
}
