/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90189
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [15ULL]))) - (((arr_2 [i_0] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_0 [i_0 + 2] [i_0]))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_12))));
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 3] [i_0 - 2])) <= (var_16))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_7);
    var_23 = ((/* implicit */int) var_2);
    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_14))))), (min((var_7), (var_0))))))));
}
