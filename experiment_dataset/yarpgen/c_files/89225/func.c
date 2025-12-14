/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89225
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
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [0LL] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0] [i_1 + 2] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-114)), (var_9)))))))) << (((((/* implicit */int) max((var_2), (arr_1 [i_1 + 1])))) - (6101)))));
                arr_5 [(signed char)7] [i_1] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_1] [(short)0] [i_3] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_3] [(short)7] [i_1] [i_0])), (((short) var_7))))) || (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)48)))) >= (((/* implicit */int) var_16))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [0LL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1])))) | (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
