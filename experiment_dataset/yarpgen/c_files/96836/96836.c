/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_10 < var_1) ? -26125 : (26125 % var_2)))) ? var_3 : var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(-1608667599, ((-5515624244420046570 ? var_4 : ((-(arr_3 [i_0])))))));
        var_14 = ((((arr_0 [i_0]) & (arr_0 [i_0]))));

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_15 = (((((-1136982436 ? 56 : -26125))) ? ((-1272018538 ? (!1272018538) : (max(1272018538, (arr_2 [i_1] [i_0]))))) : ((~(((arr_1 [i_0]) ? 26155 : (arr_2 [i_0] [i_0])))))));
            arr_9 [i_0] = ((4294967295 ? -1272018538 : -26126));
            arr_10 [i_0] = ((((((arr_6 [i_0] [i_0] [i_1 - 4]) ? (arr_5 [i_0] [i_1]) : (var_4 ^ var_6)))) ? (((26155 | var_3) ? var_2 : -var_4)) : var_6));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_13 [i_2] [i_2] = ((0 ? var_6 : (-26126 & -26156)));
            arr_14 [i_0] [13] = (!4294967295);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [i_5] [21] = (arr_17 [i_3] [12]);
                        var_16 = (((arr_22 [i_3] [6] [i_5] [i_6 - 2] [i_6 - 1]) ? 2110076306 : (!26777)));
                    }
                }
            }
        }
        var_17 = (!var_7);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_8] [9] [i_9 - 1] [i_10] [i_7] [i_11] = (((arr_30 [i_7 - 1] [i_7 - 1] [i_10 + 1]) ? (arr_22 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]) : (((arr_23 [i_7] [i_7 - 1] [i_7]) ? 26125 : (arr_20 [i_10] [i_7 + 1] [i_7 + 1])))));
                                var_18 = ((!(arr_16 [i_10 + 1] [i_11 - 1])));
                                arr_40 [i_7] [i_8] [i_9 - 1] [i_10] [i_11 + 1] = (((arr_36 [0] [i_11 - 1] [i_7 - 1]) ? -26125 : -var_9));
                                var_19 *= 68719476735;
                            }
                        }
                    }
                    arr_41 [8] [i_7] = (!((((-26777 + 2147483647) << (var_9 - 138)))));
                }
            }
        }
        var_20 += (!((((arr_29 [20]) ? (arr_21 [i_7] [i_7]) : (arr_16 [1] [1])))));
        arr_42 [i_7] = var_3;
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        arr_46 [i_12] = (((arr_31 [i_12 + 1] [i_12]) ? ((-(arr_8 [i_12 + 1] [i_12 + 1] [i_12 + 1]))) : (((!((32749 != (arr_2 [i_12] [i_12 + 1]))))))));
        var_21 = var_4;
    }
    var_22 = ((var_3 ? 32749 : (56 - 26777)));
    #pragma endscop
}
