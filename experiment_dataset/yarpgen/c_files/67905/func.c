/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67905
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */long long int) ((min((var_15), (((/* implicit */unsigned long long int) var_11)))) >> (((long long int) var_6))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_9))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (max((max((arr_3 [i_0]), (((/* implicit */long long int) var_16)))), (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) << ((((+(((/* implicit */int) var_11)))) - (41714))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) var_3)), (var_18)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_18) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) : (((long long int) var_2))))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_0)) : (max((min((((/* implicit */unsigned long long int) var_8)), (var_5))), (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))))))))));
    var_24 ^= ((/* implicit */unsigned long long int) var_9);
    var_25 = ((/* implicit */unsigned short) var_9);
}
