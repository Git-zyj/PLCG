/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96182
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
    var_12 = ((/* implicit */signed char) (_Bool)0);
    var_13 = var_6;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= arr_4 [i_0];
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(2150748044141644018ULL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_8)))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
