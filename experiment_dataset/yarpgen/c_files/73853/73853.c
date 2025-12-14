/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_1 [i_0])));
        var_14 = (max(var_14, (((max((max(1951684201, var_7)), var_8))))));
        arr_2 [i_0] [i_0 + 1] = (arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((50943 ? ((((max((arr_0 [i_0 - 1]), (arr_0 [i_0])))) ? ((var_0 + (arr_0 [i_0]))) : -var_9)) : (max(-5015325547228560047, 107))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_9 [i_0] = var_11;
                arr_10 [i_2] [i_2] [18] = (arr_0 [i_0]);
                arr_11 [i_0] [i_1] [i_2] [i_2] = 1951684201;
                var_15 = (arr_4 [i_0 + 1] [i_0 - 2]);
            }
            for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] = (-(arr_5 [i_0] [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((arr_18 [i_4] [i_1] [i_0]) ? (arr_19 [i_5] [i_5] [i_4] [i_3] [i_1] [i_0]) : (arr_20 [i_3] [i_1] [i_3] [i_4] [i_5] [i_3]))))));
                            var_17 += ((~(arr_16 [i_1] [i_3 - 1])));
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_0] = (min(((((var_3 ? var_6 : (arr_13 [i_0] [i_1] [i_3]))))), (min((((94 ? 94 : var_11))), ((var_11 ? (arr_12 [i_0 - 2] [i_0] [i_0]) : -3597606471750361262))))));
                var_18 = (max(var_18, (((94 ? ((+(((arr_20 [i_0] [i_1] [i_3] [i_1] [i_1] [i_1]) ? var_7 : var_2)))) : ((max(1951684201, 94))))))));
            }
            for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
            {
                var_19 = (max(var_19, ((max(44823, 15)))));
                var_20 -= -8582;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_32 [i_7] [i_1] [i_1] [i_1] [8] = ((-(((arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]) ? (arr_17 [i_8 - 1] [18] [i_8 - 1]) : (arr_8 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2])))));
                            arr_33 [i_7] [i_7] = -94;
                            var_21 = var_11;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_38 [i_1] [i_1] [i_9] [i_10 + 1] [i_1] [i_0] = ((arr_30 [13] [i_10 + 1] [i_9] [i_10] [i_0 + 1] [i_1]) ? (((!((min(-1951684201, var_4)))))) : 94);
                        arr_39 [i_0 - 1] [6] [i_9] [i_10] = ((-((var_1 | (arr_31 [i_0] [i_0] [i_0 - 1] [i_1])))));
                        var_22 -= ((102 ? (arr_5 [i_0 + 1] [i_0 + 1]) : (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0 - 1] [i_9]) : -15))));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_42 [i_0 - 1] [6] [i_11] = (~(arr_6 [1] [i_11] [i_11] [i_0]));
            arr_43 [12] = min(((93 >> (((arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_30 [9] [i_11] [i_11] [13] [20] [3]) : (arr_25 [i_0] [i_0] [i_11] [i_11]))))), ((min(((((arr_41 [i_0] [i_11]) || (arr_24 [i_0] [i_0 - 1] [i_0] [i_0])))), (arr_31 [i_0 - 1] [i_11] [i_11] [18])))));
        }
    }
    var_23 = ((((((var_8 || -7262197875862991314) ? var_7 : var_3))) ? ((~(94 != 94))) : -var_7));
    #pragma endscop
}
