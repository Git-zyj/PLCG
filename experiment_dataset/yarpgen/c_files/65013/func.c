/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65013
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_0 - 1]))), (((/* implicit */unsigned long long int) max((-4029333254050240659LL), (var_12))))));
                var_19 = ((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)7680))))));
                var_20 += ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_3)), (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) var_13)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_1])), (var_12)))), (arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_0);
    var_22 = max((max((((/* implicit */long long int) var_5)), (max((var_14), (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) var_4)));
}
