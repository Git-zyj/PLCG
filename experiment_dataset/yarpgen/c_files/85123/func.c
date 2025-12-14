/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85123
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (9715997746029789203ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_15 = var_2;
    var_16 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */long long int) var_10);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_1 [i_0 + 1])))))) != (((unsigned long long int) arr_0 [i_0 + 1] [i_1 + 1]))));
                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 5492146940188564049LL)) ? (((/* implicit */unsigned long long int) ((((var_4) + (9223372036854775807LL))) << (((var_0) - (749968095217208475ULL)))))) : ((+(0ULL)))));
            }
        } 
    } 
}
