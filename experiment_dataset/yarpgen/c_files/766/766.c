/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min((((~(-2147483647 - 1)))), (min(((5815313257505831945 ? 1 : var_7)), (var_7 & 2147483647))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((max(var_11, (~65524))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [5] = var_0;
                            var_20 += ((~(arr_6 [i_1 + 1])));
                            var_21 = (((((-(((arr_6 [11]) / (arr_4 [i_0] [i_1 - 1] [i_2] [i_4])))))) ? (((arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 1] [21] [21]) / 110)) : (arr_3 [i_1 - 1] [i_1 - 1])));
                        }
                    }
                }
            }
            arr_12 [i_0] [i_1 - 2] = (max(((2147483647 ? (-2147483647 - 1) : -2147483647)), (-2147483647 - 1)));
            arr_13 [i_0] = var_11;
        }
        arr_14 [i_0] [i_0] = ((~(arr_9 [i_0])));
        arr_15 [i_0] = ((-239 * (min(var_11, (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? 47 : (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 = (-2147483647 - 1);
        var_23 = (min(var_23, -var_17));
        arr_18 [i_5] = ((((32768 ? (arr_9 [i_5]) : (arr_3 [i_5] [i_5]))) < var_10));
        arr_19 [i_5] [i_5] = var_8;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_6] = -1506574369;
            arr_25 [i_6] [7] = 0;
            var_24 = var_11;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_29 [i_6] [i_8] = arr_17 [i_6];
            var_25 = (max(var_25, ((((arr_5 [i_6 - 1] [i_8]) ? (arr_5 [i_6 + 2] [i_8]) : (-9223372036854775807 - 1))))));

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                arr_34 [i_6] [i_6] [i_9] [i_9] = 25218515934319358;

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_26 = var_1;
                    var_27 = (((arr_6 [i_8]) ? var_14 : var_12));
                    var_28 = (((arr_23 [i_6 - 1] [i_6 + 3]) ? (arr_23 [i_6 + 1] [i_6]) : (arr_23 [i_10] [i_6])));
                }
                arr_39 [i_6] [8] [i_9] = (((arr_28 [i_6 - 1] [9] [i_9]) ? (arr_28 [i_6 - 1] [i_8] [i_9]) : (arr_28 [i_6 + 1] [i_9] [i_9])));
                var_29 = (((arr_1 [i_6]) ? (arr_1 [15]) : var_12));
            }
            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {

                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    var_30 = (arr_40 [i_6 - 1] [i_6 + 3] [i_6] [i_6]);
                    var_31 = (max(var_31, ((((arr_41 [i_6] [i_8] [i_11] [i_8]) ? (arr_3 [i_6 + 3] [i_11 - 3]) : (((-127 - 1) ? 6 : var_7)))))));
                    arr_47 [i_12] [i_6] [i_11] [i_6] [i_6] = (~(arr_30 [i_6 + 3] [i_6 + 3] [i_6 + 3]));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_53 [i_6] [3] [3] [i_13] [i_13] = 122;
                            var_32 = ((-(arr_35 [i_6] [i_11 - 3] [i_11 + 1] [i_6])));
                            arr_54 [i_6] = arr_0 [i_8];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_33 = (max(var_33, var_7));
                            arr_62 [i_6 - 1] [i_8] [i_11 + 1] [i_11 + 1] [i_15] [i_6] [i_16] = var_6;
                            arr_63 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] = -4581025951836217444;
                        }
                    }
                }
            }
            var_34 = 1506574351;
        }
        var_35 = (min(var_35, 5815313257505831945));
        arr_64 [i_6] = (((arr_56 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]) ? (arr_52 [2] [2] [i_6] [i_6]) : (!8861)));
        var_36 = (((arr_21 [i_6 + 3]) / var_3));
    }
    var_37 = var_1;
    var_38 = 3257880407135139499;
    #pragma endscop
}
