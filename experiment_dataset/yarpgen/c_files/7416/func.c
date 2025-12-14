/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7416
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned char) (-(arr_1 [22U])));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = var_13;
                    arr_9 [i_0] [i_1] [i_0] [19] = ((/* implicit */long long int) ((int) (+(arr_3 [i_0] [i_1]))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16352)) || (((/* implicit */_Bool) 16340))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16352)) ? (arr_8 [i_0] [i_0] [i_0 - 1] [i_2]) : (((/* implicit */long long int) 2010725742U))))) || (((/* implicit */_Bool) -3))));
                    var_22 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3]);
        arr_13 [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) arr_0 [i_3] [i_3])) & (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (var_17) : (((/* implicit */unsigned long long int) var_2))))))));
        arr_14 [i_3] [(unsigned char)9] = ((arr_1 [i_3]) >= (((arr_1 [i_3]) | (arr_1 [i_3]))));
        arr_15 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) 16337)), (((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [0ULL])) ? (arr_6 [(signed char)6] [19ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)122)) >> (((arr_7 [(_Bool)1] [i_3] [(_Bool)1]) + (7679625151783721640LL))))))))));
        arr_16 [(short)13] [i_3] &= ((/* implicit */unsigned short) arr_5 [i_3]);
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))));
}
