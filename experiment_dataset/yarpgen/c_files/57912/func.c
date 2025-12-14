/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57912
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_16 -= ((/* implicit */short) (-(12224458722435612151ULL)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2]))) != (3125256147U)));
                        arr_12 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (+(-2360854214310209225LL)));
                        var_17 = ((/* implicit */_Bool) (+(arr_3 [i_0 + 1])));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24892)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43565))) : (3125256127U)))) == (-3600452779296737012LL)));
        arr_14 [(short)23] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned int) arr_3 [i_0 - 1])) : (3125256127U)));
        arr_15 [i_0] = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_0 + 2])));
    }
    var_18 = ((((/* implicit */_Bool) (short)24892)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24884))) : (var_8))), (((/* implicit */long long int) ((3125256108U) <= (((/* implicit */unsigned int) var_9))))))));
}
