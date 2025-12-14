/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68266
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1]))) / (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */int) arr_3 [12])) : (((/* implicit */int) arr_3 [(_Bool)1])))) : (((((/* implicit */int) (signed char)-42)) / (((/* implicit */int) (signed char)-68)))))))));
                var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))));
                var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [(short)6])) ? (arr_4 [(_Bool)1] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_1] [i_1])))) % (((/* implicit */int) arr_3 [(unsigned short)2])))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */signed char) var_7);
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((var_11) - (((/* implicit */int) var_2)))))))))));
}
