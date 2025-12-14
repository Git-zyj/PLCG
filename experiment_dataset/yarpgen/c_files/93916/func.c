/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93916
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 201326592))) ? (var_1) : (((/* implicit */int) var_12))));
    var_15 -= ((/* implicit */int) (((((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((1370743147U) - (1370743147U))))) >= ((-(var_7))))) ? (min(((~(var_5))), (((((/* implicit */_Bool) 2147483647)) ? (4294967295U) : (((/* implicit */unsigned int) var_11)))))) : ((~(max((27U), (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_10) : (arr_7 [3U] [i_1] [i_2]))), (arr_7 [i_0 + 1] [i_1] [i_1]))) != (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_1 + 1])), (min((((/* implicit */int) (signed char)52)), (var_11))))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_2 [i_0]))) > (956727636U)))) : ((-(2147483647)))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) ^ (956727636U))))) > (((/* implicit */unsigned int) (-2147483647 - 1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((var_1), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (4294967278U)))) ? (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) var_6))))) : (var_1)))));
}
