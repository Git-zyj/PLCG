/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93564
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2095104U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) : ((~(arr_7 [i_0] [i_1] [i_2 - 1])))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (4294967295U)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (+(0ULL)));
    var_21 = ((/* implicit */long long int) ((short) (!(((((/* implicit */_Bool) -1232153908985974918LL)) || (((/* implicit */_Bool) 0U)))))));
}
