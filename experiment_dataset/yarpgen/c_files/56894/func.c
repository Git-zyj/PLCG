/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56894
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) arr_1 [7ULL] [i_0]);
                var_18 = ((/* implicit */unsigned short) (+(9376072411175664786ULL)));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_4)))) ? (min(((+(611601400737994349ULL))), (((/* implicit */unsigned long long int) (-(-1750750275)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1750750272))))));
}
