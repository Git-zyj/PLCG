/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63202
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
    var_14 = ((/* implicit */unsigned long long int) ((var_12) / (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (signed char)-113))))) ? (((var_6) & (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_1))))), (var_2))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((unsigned int) ((unsigned long long int) var_10))) << (((arr_2 [i_0] [i_0]) + (6427570335892542773LL))))))));
                arr_5 [i_0] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_18 ^= ((/* implicit */short) max((((unsigned short) max((var_6), (((/* implicit */long long int) var_10))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))))))));
}
