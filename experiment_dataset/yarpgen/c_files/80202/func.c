/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80202
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [7ULL] [i_2] = ((((/* implicit */_Bool) 4309898414698357816ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) : ((-9223372036854775807LL - 1LL)));
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max((14136845659011193800ULL), (((/* implicit */unsigned long long int) var_3))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2209381891395183918LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((long long int) (signed char)-113)) : (((/* implicit */long long int) ((int) ((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [14] [14] [i_2 - 1]), (arr_4 [i_0] [i_2] [i_2 - 1]))))) / (((unsigned long long int) max((((/* implicit */long long int) 1194129939U)), (9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((var_13) << (((max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (var_18)))))) - (179ULL)))));
    var_22 = ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */unsigned long long int) (((~(-772201961))) / (((/* implicit */int) ((unsigned short) var_0)))));
}
