/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68159
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (var_10)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_11)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (var_14))) : (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) var_6)))))) : ((-(max((((/* implicit */unsigned long long int) var_17)), (var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_22 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) var_19)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_16)))), (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                var_23 = ((/* implicit */signed char) (-(min((var_13), (((((/* implicit */_Bool) var_19)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), ((+(var_13)))));
            }
        } 
    } 
}
