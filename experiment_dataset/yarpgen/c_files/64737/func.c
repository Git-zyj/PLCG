/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64737
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2]);
                    var_17 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_2]);
                    var_18 -= ((/* implicit */long long int) arr_5 [10] [i_1] [10]);
                    var_19 = ((/* implicit */int) min((var_19), ((+(((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1 - 2]))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_9 [(signed char)6] [i_0] [(signed char)6]))))));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0] [(signed char)5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [4ULL] [i_0] [i_0]))) : (arr_8 [i_0] [i_0])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_12 [i_3]) >> (((arr_12 [i_3]) - (15777712440280120861ULL))))) >> (((((/* implicit */int) arr_13 [i_3] [i_3])) + (15644)))))) ? (min((((/* implicit */long long int) arr_13 [i_3] [(signed char)7])), (arr_11 [i_3]))) : (((/* implicit */long long int) ((int) arr_12 [i_3])))));
        var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3])))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (-(arr_15 [i_4] [i_4])))))));
        arr_19 [i_4] = ((/* implicit */long long int) arr_13 [i_4] [i_4]);
        arr_20 [i_4] = ((/* implicit */signed char) arr_16 [i_4]);
    }
    var_23 = ((/* implicit */short) (+((-(((/* implicit */int) var_2))))));
}
