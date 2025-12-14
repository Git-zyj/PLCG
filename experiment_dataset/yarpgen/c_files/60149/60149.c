/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_7;
    var_18 -= var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [1] [i_1] [3] [i_0] = (arr_2 [i_0]);
                    var_19 |= (((((var_13 ? (arr_1 [i_1]) : (max(var_15, (arr_3 [i_2])))))) ? (((arr_6 [i_2 + 1] [i_2 + 3] [4]) % (((arr_3 [i_1]) ? (arr_3 [i_0]) : 14361)))) : ((-38671 * ((26865 ? var_3 : (arr_1 [7])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_20 = (((((((max(var_13, 26865))) ? var_12 : var_5))) ? ((var_9 ? var_13 : (arr_3 [i_0]))) : (min(var_9, var_0))));
                        arr_15 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] = ((~(min((((var_14 ? var_13 : var_3))), (min((arr_4 [i_0]), var_12))))));
                        var_21 = (((arr_0 [i_0]) ? var_10 : (!38671)));
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = var_13;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_24 [i_7] [i_7] [i_0] = max(38659, 26856);
                    var_22 = (((((max(var_14, 26865)) ? (min(var_14, var_15)) : (((var_0 & (arr_5 [i_0] [i_6] [9]))))))));
                }
            }
        }
        arr_25 [i_0] = 38651;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    {
                        var_23 = (max(var_23, (((var_11 % (arr_28 [i_9 - 1] [i_10 - 1]))))));
                        var_24 = (max(var_24, ((((arr_35 [i_9 + 2] [i_9 + 2]) ? var_8 : (arr_34 [i_8 - 1] [i_9 + 1] [i_10 + 1]))))));
                        var_25 *= (arr_28 [12] [12]);
                    }
                }
            }

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_41 [i_8] [i_9] [i_12] [i_12] = (var_9 ? var_1 : (((arr_26 [i_9]) ? var_13 : var_13)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_26 = ((((((arr_44 [i_8] [i_12] [i_12] [4] [i_12] [17]) ? (arr_32 [i_8] [i_9] [i_8] [i_12]) : var_16))) ? ((var_15 ? 26873 : (arr_44 [i_8] [i_12] [i_12] [i_13] [i_14] [i_14]))) : (((var_3 ? 26876 : var_7)))));
                            arr_47 [i_9] [i_12] [i_9] [4] [i_9] = var_16;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                arr_50 [18] [i_15] [18] [i_15] = (((arr_40 [i_15] [3] [14]) ? (38666 && var_2) : var_6));
                var_27 = var_1;
            }
            for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
            {
                arr_53 [i_16] [3] [19] [19] = ((var_8 ? var_16 : (arr_33 [i_8 - 1] [i_8 + 1] [i_9 + 1])));
                arr_54 [i_8] [i_8] [i_8] = ((26865 & (arr_44 [i_8] [10] [i_8] [i_9 - 1] [10] [i_9 - 1])));
                arr_55 [i_8] [i_8] = (arr_51 [i_16] [i_16] [i_16] [i_16]);
            }
            for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
            {
                var_28 = (arr_57 [15] [i_9] [i_8]);
                var_29 = ((((var_6 ? var_5 : var_15))) ? ((((arr_43 [i_17] [i_17] [i_17] [i_8]) && 38665))) : 26870);
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_30 = var_7;
            arr_61 [1] [i_8] [i_18] = (((var_4 ? var_0 : var_2)));

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_31 = (max(var_31, (((var_12 | (var_5 && 26876))))));
                var_32 = 38666;
            }
            for (int i_20 = 1; i_20 < 20;i_20 += 1)
            {
                arr_66 [18] [3] [i_20] = (26873 >> (var_0 + 1543525145));
                var_33 = (max(var_33, (arr_64 [i_8 + 1] [2] [i_8 + 1])));
                var_34 = (((((arr_29 [i_20]) ? var_4 : 38647)) - var_1));
            }
            arr_67 [i_8] &= var_0;
            var_35 = ((26893 ? ((var_13 ? 38660 : var_15)) : 38655));
        }
        arr_68 [i_8] [i_8] = 38659;
        arr_69 [i_8] = var_4;
        var_36 = (min(var_36, (((38668 ? 26893 : var_10)))));
        arr_70 [i_8] = var_11;
    }
    #pragma endscop
}
