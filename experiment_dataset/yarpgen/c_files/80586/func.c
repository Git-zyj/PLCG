/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80586
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */short) ((((_Bool) arr_8 [i_1])) ? (((arr_8 [i_0]) + (arr_8 [i_0]))) : ((+(((/* implicit */int) (signed char)126))))));
                    var_13 = (~(arr_8 [i_0]));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_4);
}
