/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92228
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((min((2022187761), (((/* implicit */int) (signed char)(-127 - 1))))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (max((min((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */long long int) arr_2 [(unsigned short)10] [i_0] [i_1])))), (min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (arr_3 [i_1] [i_1] [i_1]))))) : (max((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_0] [15LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))), (((arr_0 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_3 [i_1] [i_0] [i_1])))))));
                var_11 = ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_3 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1])))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) + (((arr_0 [(signed char)11] [8]) ? (arr_3 [i_1] [(short)2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned int) ((var_5) + (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_3)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)));
}
