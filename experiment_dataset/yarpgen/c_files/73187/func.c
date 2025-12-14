/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73187
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
    var_10 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)9] [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0 + 2])))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_4 [i_0]))), (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0] [i_1 - 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0 - 1])))) : (((arr_1 [i_0] [i_0 + 2]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))));
    var_14 = ((_Bool) min((var_5), (((/* implicit */short) var_6))));
}
