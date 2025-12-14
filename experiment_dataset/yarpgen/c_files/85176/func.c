/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85176
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
    var_16 = max((min((((((/* implicit */_Bool) var_13)) ? (3375720986549800466ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_2)))), (3375720986549800443ULL));
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */long long int) min((var_4), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_3)), (15071023087159751149ULL))) < (((/* implicit */unsigned long long int) 4294967295U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_12) == (((/* implicit */int) (unsigned short)1141))))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))), ((~(var_2))))));
                var_19 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) 17082148165175684551ULL)) ? (arr_3 [i_1 - 3] [i_0] [i_0 - 1]) : (arr_3 [i_1 - 2] [i_0 - 1] [i_0 - 1]))), (((/* implicit */int) var_3))));
            }
        } 
    } 
}
