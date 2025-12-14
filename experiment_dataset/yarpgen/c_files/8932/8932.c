/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0 + 1] = (arr_4 [i_0 + 1]);
            arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_1]);
            arr_7 [i_1] [i_0] = var_6;
            arr_8 [i_1] = (arr_1 [i_0]);
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_14 [i_3] [i_0] [i_0] = (arr_10 [i_0 + 1]);

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_10 = -var_1;
                    arr_18 [i_0] [i_3] = (arr_12 [i_0] [i_2] [i_3] [i_4]);
                    var_11 = (arr_16 [i_2] [i_2] [i_2] [i_2]);
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] = (((arr_10 [i_3]) ? var_1 : var_3));
                    var_12 = (((arr_11 [i_0] [i_0] [i_0]) << (var_2 - 1430000088)));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_25 [i_0] [i_0] [i_0] [i_6] = (((((18 ? (arr_3 [i_2]) : var_9))) ? (arr_0 [i_0 + 1]) : (arr_17 [i_2 + 1] [i_2] [3] [i_2 - 3] [i_2 - 1] [i_2 - 3])));
                    arr_26 [i_6] [8] [i_6] [i_6] = (((arr_16 [i_0] [i_0] [i_3] [i_2 - 1]) < var_3));
                    arr_27 [i_6] [i_6] [i_3] = arr_2 [i_0 - 1];
                    arr_28 [i_6] [i_6] [i_6] [i_0] = (((arr_22 [i_0] [i_0 + 2] [i_3] [i_6] [i_2] [i_2 - 3]) ? (((((arr_22 [i_0] [i_0] [i_0] [i_0] [17] [i_0]) || (arr_3 [i_0]))))) : (arr_23 [i_3] [i_2] [i_3] [2])));
                    arr_29 [i_6] [i_6] [i_0] [i_0] [i_6] [i_0] = (arr_10 [i_0]);
                }

                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_13 = ((((arr_20 [i_0] [13] [i_0] [i_3] [13] [i_8]) ? (arr_17 [i_0 + 2] [i_2 - 2] [i_3] [i_7 + 3] [i_8] [i_0]) : 35)));
                        var_14 = (arr_17 [20] [i_2] [i_2] [12] [i_8] [i_3]);
                    }
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_15 = 3978168599;
                        var_16 = ((!(arr_36 [i_0] [i_2 - 3] [i_3] [i_7] [i_9 + 2])));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_42 [i_0] [i_2] [i_3] [i_10] [i_10] = (arr_23 [i_2 - 1] [i_0 + 1] [i_2 - 1] [i_7]);
                        arr_43 [i_0] [i_2] [17] [i_7 - 2] [i_10] = (arr_9 [i_0 + 2] [i_0 + 2]);
                        arr_44 [i_10] [19] [i_3] [i_7] [i_10] [i_2] [i_10] = arr_23 [i_10] [i_0] [i_2 - 2] [i_0];
                    }
                    var_17 = (max(var_17, (((-(arr_12 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 1]))))));
                }
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    arr_48 [i_11] [i_11] = (arr_19 [i_0 + 2] [i_2 - 2] [i_11 + 4]);
                    var_18 = ((-((var_8 ? var_6 : var_3))));
                }
            }
            arr_49 [i_0] = (168 & 205);
        }
        arr_50 [i_0] [i_0] = (arr_0 [i_0 + 1]);
    }
    var_19 = ((var_4 ? var_0 : (min(var_3, var_1))));

    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_20 = -25611;
        arr_54 [i_12] = (min(-var_0, (((arr_52 [i_12]) ? ((max((arr_51 [i_12]), var_2))) : (arr_53 [i_12] [i_12])))));
    }
    #pragma endscop
}
