/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97369
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
    var_18 = ((/* implicit */int) (~(var_9)));
    var_19 = ((/* implicit */unsigned char) 3875016457U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                arr_6 [i_0] = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) << (((((/* implicit */int) var_15)) - (22))))))), (((/* implicit */int) (signed char)-1))));
                arr_7 [i_0] [i_1] |= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((2178851833121123616LL) & (((/* implicit */long long int) 505058235))))) & (((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) -505058237))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
}
