/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66736
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)11] [(_Bool)1] [(unsigned char)11])) ? (599512376U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (min((arr_0 [1U]), (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) (!(arr_1 [i_0] [i_0]))))));
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((int) var_3)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_4)))) : ((~(((/* implicit */int) (_Bool)0))))))));
                var_12 = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    var_14 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_1))))));
    var_15 |= ((/* implicit */unsigned int) var_1);
}
