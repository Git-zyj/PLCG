/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72656
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)5] [i_0])))));
                arr_6 [i_0] = ((/* implicit */long long int) arr_4 [i_1 + 1] [i_0 + 2]);
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_3) : (((/* implicit */int) arr_1 [i_0 + 2])))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_13))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned int) var_12));
    var_18 += ((/* implicit */short) var_7);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) var_3)))) : (var_8)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_2)));
}
