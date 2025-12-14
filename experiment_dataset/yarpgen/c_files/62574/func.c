/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62574
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */short) var_5)), (max((((/* implicit */short) var_1)), (var_8)))))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(signed char)4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                var_20 |= ((((((((/* implicit */int) max((arr_3 [i_0 + 4]), (arr_3 [i_0])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) + (26))) - (24))))) >= (((/* implicit */int) arr_0 [i_0] [(signed char)6])));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 1] [i_0 + 1])), (var_9)))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
}
