/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((-((-19173 ? -6 : 14))));
                var_12 -= (arr_2 [i_0]);
                var_13 -= ((!(arr_1 [i_0])));
                var_14 *= var_6;
            }
        }
    }
    var_15 = (((var_7 | var_3) ? (((var_7 >= (var_4 * var_4)))) : (var_9 | var_7)));
    var_16 = var_4;
    var_17 = (min(var_17, (((((var_0 ? 2125468321 : var_6)) << (var_2 - 6031423625003768921))))));
    #pragma endscop
}
