/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62430
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
    var_20 = min((((((var_10) + (9223372036854775807LL))) >> (((((var_12) >> (((var_10) + (2799724319501355078LL))))) - (44839937463158710ULL))))), (((/* implicit */long long int) var_2)));
    var_21 = ((/* implicit */long long int) max((((7542825442049185085ULL) | (var_18))), (min((max((var_12), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((var_18) >> (((var_17) + (1095720595)))))))));
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1 - 1] [i_1 - 1] [8LL] = ((/* implicit */unsigned long long int) ((((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [i_1 - 2] [i_1])))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((min((10903918631660366508ULL), (max((15219155101734432747ULL), (var_13))))) - (10903918631660366491ULL)))));
                var_23 = ((/* implicit */unsigned long long int) ((((var_8) >> (((var_14) - (17900021075510472573ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 3768000001647251138LL))))))));
                var_24 *= ((((/* implicit */_Bool) ((max((9223372036854775807LL), (9223372036854775791LL))) >> (((((9223372036854775788LL) >> (((arr_0 [i_0] [i_1]) + (1751289871))))) - (1073741761LL)))))) ? (((/* implicit */unsigned long long int) min((min((3768000001647251138LL), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) ((247311721) >> (((-2097152) + (2097178))))))))) : ((((~(arr_4 [i_1 - 1]))) >> ((((-(10903918631660366523ULL))) - (7542825442049185033ULL))))));
            }
        } 
    } 
}
