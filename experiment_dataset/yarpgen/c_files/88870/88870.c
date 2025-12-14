/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((652072664 ? (~var_18) : (-32767 - 1)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_2 [i_0 + 2]);
        var_21 = (arr_0 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [3] = (((((var_18 ? (arr_4 [i_1] [i_0] [i_0 - 2]) : -34))) * (arr_2 [i_0 - 4])));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_22 = var_18;
                var_23 = var_9;
            }

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_24 = (max(var_24, ((((~750902643) / var_14)))));
                        var_25 = (~750902643);
                        var_26 = ((!(arr_2 [i_0 - 1])));
                    }
                    var_27 &= var_1;
                }
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [i_6] = (((((~(arr_18 [6] [i_1] [14])))) & (((arr_13 [i_0 - 4] [i_1] [i_0 - 4] [i_6] [i_1] [i_6]) ? (arr_10 [i_1]) : var_11))));
                    var_28 |= ((var_4 | (arr_2 [i_0 - 3])));
                }
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    var_29 *= var_15;
                    arr_23 [i_0 - 2] [i_1] [16] = var_8;
                }
                arr_24 [i_0] [i_1] [i_0] [1] = ((arr_6 [i_0] [i_1]) ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]) : var_10);
                arr_25 [i_3] [i_1] [i_1] [i_0 - 2] = (((arr_18 [i_0 - 3] [i_0 - 1] [i_0 + 2]) / (arr_19 [6] [i_1] [i_1] [i_3])));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_30 = (((arr_26 [i_8] [i_1] [i_1] [i_9]) ? 32767 : (4197 * var_5)));
                        var_31 |= arr_1 [i_0 + 2];
                    }
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        var_32 = ((((((arr_19 [i_0] [i_1] [i_8] [i_9]) ? (arr_30 [i_0 + 1] [i_0 + 1] [i_8] [i_9] [i_11] [i_0 + 1]) : (arr_3 [2] [2])))) < var_18));
                        var_33 = ((~(750902643 / var_10)));
                        var_34 &= (((((-9109319254705134100 ? (arr_13 [i_0] [1] [i_1] [i_8] [i_9] [i_11]) : var_7))) ? var_15 : ((var_4 ? var_13 : var_15))));
                        arr_35 [i_1] [i_8] = (((arr_21 [i_1] [9] [i_0 - 4] [i_11 - 3]) < (arr_30 [i_11 - 4] [i_11 + 1] [19] [i_1] [i_0 - 1] [i_0 - 2])));
                        var_35 = (((arr_6 [i_8] [i_1]) || (!var_7)));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_39 [i_0 - 3] [i_1] [i_8] [i_9] [i_1] = ((!(arr_1 [i_0 + 1])));
                        var_36 = ((~(arr_2 [i_0 - 1])));
                    }
                    var_37 -= ((-(arr_16 [i_0 - 4] [i_0 + 2] [i_0] [8] [i_0] [i_0] [i_0])));
                    var_38 = (arr_2 [i_0 - 1]);
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_39 = var_0;

                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        arr_44 [i_1] [i_1] = (-9109319254705134104 < -71);
                        arr_45 [i_1] [i_1] = (((arr_30 [i_0] [i_0] [i_8] [i_14 - 2] [i_14] [i_0 + 2]) < (arr_14 [i_0 - 4] [i_0 + 1])));
                    }
                    var_40 = (((arr_42 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ? (arr_26 [i_0] [i_0 - 2] [i_0] [i_0]) : (arr_1 [i_0 - 4])));
                }
                var_41 &= ((~(arr_36 [i_0 - 2] [2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));
            }
            var_42 = ((-(arr_2 [i_0 - 4])));
        }
        var_43 = -var_14;
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_44 = ((((max(15761, 147))) ? (((arr_47 [i_15]) ? (arr_47 [i_15]) : (arr_47 [3]))) : (((arr_47 [i_15]) >> (((arr_47 [i_15]) - 47372))))));
        var_45 = (arr_47 [i_15]);
        var_46 = (((((((((~(arr_47 [10])))) ? (max(var_7, (arr_46 [i_15]))) : (arr_47 [15]))) + 2147483647)) >> (var_7 + 28)));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_50 [i_15] [i_16] = -var_3;
            arr_51 [i_15] [i_16] [i_16] = ((~(arr_49 [i_16])));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_47 = ((var_6 ? (((arr_46 [i_15]) ? var_17 : var_16)) : 4214));

            for (int i_18 = 1; i_18 < 22;i_18 += 1)
            {
                arr_58 [i_17] [i_17] [i_17] [i_17] = (!var_12);
                var_48 = (((arr_53 [i_18 - 1] [i_18 + 3] [i_18 + 2]) ? var_1 : (arr_47 [i_18 + 1])));
            }
            var_49 &= (((arr_47 [i_15]) ? (arr_48 [i_15] [i_15] [i_15]) : (113 | -9109319254705134104)));
        }
        var_50 = (!(((~(arr_48 [i_15] [i_15] [i_15])))));
    }
    #pragma endscop
}
