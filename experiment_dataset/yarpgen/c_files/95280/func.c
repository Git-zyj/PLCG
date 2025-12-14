/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95280
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10))))) : (((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)241))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(var_1)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_3);
    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_6))))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (6289216268558181457ULL)))))));
}
