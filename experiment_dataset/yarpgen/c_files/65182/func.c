/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65182
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
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_3)))), (((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_1])))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4))))));
                var_14 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0] [i_1])))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-72))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) * (min((((/* implicit */unsigned int) (signed char)3)), (arr_4 [i_0 - 3] [i_1])))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (28U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)11)))) : (var_0)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)3)))))))));
}
