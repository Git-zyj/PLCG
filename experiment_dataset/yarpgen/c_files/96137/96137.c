/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 &= var_11;
                        var_21 = (((arr_7 [i_2] [i_3 + 1] [i_3 - 1] [1] [i_3 + 2] [i_3 + 2]) ? (arr_7 [i_3] [i_3 + 1] [8] [i_3] [i_3 + 2] [i_3 - 1]) : -26579));
                        var_22 = (~var_12);
                    }
                }
            }
        }
        var_23 = (min(var_23, (~var_0)));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_24 *= -4294967295;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_20 [i_4] [i_5] [i_6] [1] [i_5] = ((var_6 ? var_0 : var_5));
                        var_25 = (min(var_25, (((var_0 ? (arr_15 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : 16)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    var_26 = (min(var_26, (var_3 / 1)));
                    arr_26 [i_8] [i_8] = 4294967295;
                }
            }
        }
        arr_27 [i_4] [i_4 - 1] = (((!1) ? -var_3 : (((-2032436386 + 2147483647) >> (var_9 + 10549)))));
    }
    for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] [i_10] = (((arr_9 [i_10]) ? (((-26593 ? var_1 : (arr_14 [i_10] [i_10 - 3] [14])))) : (arr_9 [i_10])));
        var_27 |= (max((arr_24 [8] [14] [i_10 - 1] [i_10 - 1]), ((126 ? ((max(40932, var_13))) : var_10))));
        var_28 &= (max((arr_9 [12]), ((2182232391265492055 ? ((var_8 ? var_9 : (arr_21 [1] [16]))) : (var_6 && var_1)))));
    }
    for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_34 [i_11] &= ((((-var_12 ? var_9 : var_0)) % (arr_23 [i_11] [i_11] [14])));
        arr_35 [i_11] [i_11 - 3] = var_7;
        var_29 = (min(var_29, (((((~(arr_10 [i_11 - 2]))) & 1)))));
        arr_36 [1] = (max((max(var_10, var_7)), (((4290151119 != (1 | var_10))))));
    }
    #pragma endscop
}
