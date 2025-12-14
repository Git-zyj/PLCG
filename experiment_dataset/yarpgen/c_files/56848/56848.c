/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_14;
    var_19 &= (min(((~(max(var_7, var_15)))), (((8388607 ? 8388588 : 235)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [18] = ((+(min((~var_10), ((4286578689 ? (arr_6 [i_0] [24]) : var_1))))));
                var_20 = 8388607;
                arr_8 [i_0] [i_0] [i_1] = ((~(min((arr_5 [i_0] [9]), (var_12 + var_17)))));
                arr_9 [i_0] [i_1] [i_1] = 8388608;
            }
        }
    }
    #pragma endscop
}
