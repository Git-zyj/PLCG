/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_10 = (~2098155377);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_11 = ((max((arr_10 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_1 + 1]), (arr_6 [i_0] [i_1 + 1] [i_1 + 1]))));
                            arr_13 [1] [1] [i_3] [i_3] [i_4 + 1] [i_3] = (arr_12 [i_3]);
                            arr_14 [i_1 + 1] [i_3] = 1;
                        }
                    }
                }
            }
            var_12 = var_7;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_22 [i_1 - 1] [8] [i_6] [i_6] [i_1 - 1] [i_0] = (arr_5 [i_7] [12] [i_1]);
                            arr_23 [i_0] [i_6] [i_5] [i_6 - 3] [i_6] [i_7 + 1] [i_7] = ((!(((-46 ? ((-110 ? 24022 : 1)) : var_3)))));
                        }
                    }
                }
            }
            var_13 |= (max((max((var_9 - 3906615217), (arr_8 [0]))), (arr_15 [i_1] [i_1 + 1] [4])));
            arr_24 [i_1] [i_1 - 1] [i_0] = (arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_27 [0] [0] |= (arr_4 [i_0] [i_8] [4] [i_0]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_14 |= (arr_16 [i_0] [i_0 + 1] [i_0 + 1]);
                        var_15 = var_5;
                    }
                }
            }
            var_16 = ((((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) << (var_3 - 309083210)))) ? ((((arr_0 [i_8]) & var_7))) : (arr_26 [i_0 - 1] [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_43 [i_12] |= var_5;
                            arr_44 [i_0] [i_0] [i_0] [11] [i_11] = arr_12 [i_11];
                            var_17 = (min(var_17, (((-(arr_37 [i_0 + 1] [i_12]))))));
                            var_18 = var_2;
                            var_19 |= (((((arr_8 [i_12]) ^ (arr_17 [i_0] [i_8] [i_8]))) * var_5));
                        }
                    }
                }
            }
        }
        arr_45 [i_0 + 1] = (var_4 <= 3906615217);
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            {
                var_20 = var_1;
                arr_51 [i_14] [i_15] [i_15] = ((-(((arr_49 [i_15 - 1]) ? -7139844768139271516 : var_2))));
                var_21 = var_6;
            }
        }
    }
    #pragma endscop
}
