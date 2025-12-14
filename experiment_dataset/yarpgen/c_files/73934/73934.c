/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = var_0;
                    arr_11 [i_0] [i_0] [i_2] = (((arr_8 [i_0] [i_1] [i_2]) ? ((var_4 ? var_10 : var_8)) : -1789339667));
                }
            }
        }
        var_13 = ((-62 ? 978956765 : 16));
        arr_12 [i_0] [i_0] = (!9151314442816847872);
    }
    var_14 &= (((((var_4 ? var_2 : var_7))) ? ((-140 ? var_11 : (((-10443 ? var_9 : 81))))) : ((((max(var_6, -6861672269807681193))) ? (175 ^ 3817999168) : (max(167110395325747267, var_3))))));
    #pragma endscop
}
