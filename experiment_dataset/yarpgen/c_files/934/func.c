/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/934
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_11))));
    var_13 += ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) & (var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = min(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1])))))), (((((((/* implicit */int) arr_1 [i_1 + 1])) / (((/* implicit */int) arr_2 [i_0])))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [(unsigned short)3])))))));
                var_15 |= ((/* implicit */int) (~(3738913625U)));
            }
        } 
    } 
}
