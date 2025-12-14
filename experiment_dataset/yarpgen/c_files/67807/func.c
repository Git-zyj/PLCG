/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67807
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (2876492843172250113LL)))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (6173872998089235695LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56581)) && (((/* implicit */_Bool) -6173872998089235695LL)))))))), (((/* implicit */long long int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = var_10;
}
