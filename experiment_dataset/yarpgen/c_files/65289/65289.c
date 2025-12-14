/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = var_6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 &= (arr_0 [i_0]);
            var_12 = (((-73 ? var_0 : var_5)));
            arr_5 [i_0] = arr_3 [i_0] [11] [i_0];
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_13 = ((8099562731286739987 & (((-(arr_7 [i_2]))))));
        arr_9 [i_2] = (arr_3 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_14 = (min(var_14, var_7));
        var_15 &= ((!(arr_3 [i_3] [i_3] [i_3])));
        var_16 = (((((16742 ? 1 : (arr_3 [i_3] [i_3] [6])))) ? -0 : (arr_3 [i_3] [i_3] [i_3])));
    }
    #pragma endscop
}
