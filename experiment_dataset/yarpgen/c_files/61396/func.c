/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61396
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [5U] [i_1] [i_1] = ((/* implicit */signed char) min((arr_4 [9U] [i_1] [i_1]), (min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1])))));
                arr_6 [10U] [i_0] = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_9);
}
