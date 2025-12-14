/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73204
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (var_5)));
    var_12 = ((/* implicit */long long int) (-(var_1)));
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (short)-63)))) < (((/* implicit */int) (short)62)))))) & (1567930184U));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) (short)-3136)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) ((short) max((var_8), (((/* implicit */int) arr_0 [i_0]))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (1427256379) : (((/* implicit */int) arr_0 [i_1 - 1])))) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) * (((/* implicit */int) (unsigned char)161))))));
            }
        } 
    } 
}
