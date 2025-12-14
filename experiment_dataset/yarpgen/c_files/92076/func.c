/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92076
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((signed char) max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_3))))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), ((signed char)68)));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
