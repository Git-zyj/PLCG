/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [3]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = (min(var_21, ((((arr_2 [i_0]) ? (arr_1 [i_1]) : (((arr_0 [i_1]) ? var_5 : 1)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [13] [13] [i_2] [i_3] [13] = ((arr_2 [i_0]) + (arr_9 [i_2] [i_1] [i_1] [i_1] [2] [1]));
                        arr_14 [i_0] [i_1] [10] [4] = (~1568719770);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [i_0] [i_0] = (((arr_19 [i_6] [i_5 + 1] [i_4]) ? 422431028 : (arr_4 [i_4] [i_4] [i_4])));
                        arr_24 [i_6] = (arr_2 [i_6]);
                        var_22 ^= var_9;
                        arr_25 [9] [2] [i_4] [i_4] [9] = -22234;
                    }
                }
            }
            arr_26 [12] [12] [12] = ((~(arr_16 [i_4])));
            var_23 *= ((!(arr_9 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0])));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_29 [i_0] [i_7] [i_0] = ((((((((arr_2 [i_0]) < 1)) ? (arr_10 [i_7] [i_0] [0] [i_0]) : -19))) ? ((23824 ? 23824 : (((arr_11 [i_0]) ? (arr_17 [i_0] [i_0] [i_7]) : var_9)))) : (min(((18446744073709551615 ? (arr_17 [i_0] [16] [18]) : (arr_28 [i_0] [i_0] [i_7]))), (((-127 - 1) ? 111 : 41716))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_8 - 1] = (!7728067694457718238);
                        arr_35 [19] [19] [i_8] [i_8 - 2] [i_7] [i_9] = (((((23828 ? (!111) : (-1 >= -4949238606742036071)))) ? ((4968491867166417403 ? -var_4 : 1)) : (arr_17 [i_8 + 3] [i_8 + 1] [i_8 + 2])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~((var_10 ? var_3 : (arr_31 [15])))));
                            arr_45 [0] [i_11] [i_10] [i_10] [10] = 9092914788524330273;
                        }
                    }
                }
            }
        }
        var_24 = (+-30720);
    }
    #pragma endscop
}
