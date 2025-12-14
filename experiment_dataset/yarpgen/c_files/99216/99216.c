/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((((((min(172, 81))) || var_4))), (max(182, (253 << 1)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((var_13 & (arr_1 [i_0]))), (~45685)));
        var_19 -= (max((max(-14, 0)), 0));
        var_20 = ((~(((!((((arr_1 [i_0]) >> 0))))))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] &= ((((var_14 ? (((-17 != (arr_4 [i_1])))) : var_4)) & ((((min((arr_3 [i_1 - 2]), 25105))) >> (((arr_4 [i_1]) + 20221))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_3] [9] = (((min((arr_8 [i_1 - 1] [i_1 - 2] [i_1]), (arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) >> (((max((arr_4 [i_2 + 1]), (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2]))) - 18446744073709531391))));
                    arr_12 [i_1] [i_1] [20] [i_3] = (~1948161945265718603);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = (var_9 >= var_9);
        arr_16 [i_4] [12] = (arr_14 [i_4]);
    }
    var_21 = var_16;
    #pragma endscop
}
