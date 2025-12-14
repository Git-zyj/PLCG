/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56659
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_3 [i_1])))) || ((_Bool)1)))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_1])))))));
    }
    var_22 = ((/* implicit */unsigned int) var_19);
    var_23 = ((/* implicit */signed char) var_4);
}
