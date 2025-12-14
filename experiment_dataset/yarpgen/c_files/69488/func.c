/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69488
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
    var_10 = (+(((unsigned int) (!(((/* implicit */_Bool) var_8))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((unsigned int) ((var_4) != (((unsigned int) 3832313035U))));
        var_11 = arr_1 [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((unsigned int) ((unsigned int) arr_3 [i_1])))));
        var_13 = ((((/* implicit */_Bool) var_3)) ? ((-(arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) == (0U))))));
    }
}
