/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73778
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13999))) : (var_10))))) : (((/* implicit */int) (unsigned short)8128))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_0 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) - (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(unsigned short)1] [i_1] [i_0 + 1])))))));
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_1]))));
                var_16 += arr_4 [i_0] [i_1] [i_0];
                var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_8);
}
