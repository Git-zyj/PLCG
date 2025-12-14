/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (max((min(5910029003139556168, (arr_4 [i_0] [i_1]))), (max((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_1])))));
                    var_12 = (min(var_12, var_4));
                    var_13 = ((((var_6 ? var_11 : var_1))) ? (min(-11610, (arr_8 [i_2]))) : (((arr_8 [i_0]) ? (arr_5 [i_0] [i_2]) : (arr_8 [i_0]))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = 11610;
                }
            }
        }
    }
    var_14 = var_7;
    var_15 *= ((var_1 ? var_11 : (((~var_2) ? var_3 : -1096610894))));
    #pragma endscop
}
