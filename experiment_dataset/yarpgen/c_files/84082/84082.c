/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_18;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = 7144670221952223035;
            var_20 = (((4294967295 - (arr_1 [5]))) << (arr_5 [0] [i_1] [7]));
            var_21 = var_5;
            var_22 = (-17323 < var_8);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] [8] [6] |= (arr_6 [3] [1]);
            var_23 ^= 237;
            var_24 = var_14;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_25 = (((arr_7 [i_3]) < (arr_7 [i_0])));
            var_26 = ((223 ? 19 : -17330));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_27 = (arr_1 [i_4]);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_28 = ((((((var_8 < (arr_5 [i_0] [i_0] [i_0]))))) % (((arr_14 [i_6 - 1]) ? (arr_7 [i_0]) : (arr_20 [i_0] [i_4] [i_5] [11])))));
                    var_29 |= 13037;
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_30 = (((arr_6 [i_0] [i_0]) < (arr_6 [i_7 - 1] [i_7 - 1])));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (arr_20 [i_8] [i_7] [i_7 - 1] [i_4]);
                        arr_30 [i_0] [i_5] |= (((var_8 == (arr_1 [i_0]))));
                    }
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_31 = (arr_22 [i_0] [i_0] [i_5] [i_9]);
                    var_32 -= (((arr_13 [i_0] [i_0] [i_9]) ? (((var_4 << (arr_22 [i_0] [i_4] [i_5] [i_9])))) : var_0));
                    arr_33 [i_9] [i_9] [10] [2] [i_9] = (arr_25 [i_0] [i_4] [6] [i_9] [i_9]);
                    var_33 = var_12;
                    var_34 = (0 ? (arr_24 [i_0] [i_0] [i_4] [i_5] [i_9]) : 223);
                }
                var_35 &= (((arr_15 [i_4]) - (arr_15 [i_4])));
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        var_36 = ((var_17 % 109) ? (arr_26 [i_10] [1] [i_10] [i_11] [i_11 - 2] [i_11] [i_11 - 2]) : (arr_3 [i_0] [i_10] [i_0]));
                        arr_40 [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_12] = -6462469153836997164;
                        var_37 -= ((arr_24 [i_10] [i_10] [i_10] [i_12 + 1] [i_12]) ? (arr_26 [i_11 + 2] [i_11 + 2] [i_12 + 1] [i_11 + 2] [i_12 + 1] [i_12] [i_12]) : 1);
                    }
                }
            }
        }
        var_38 = ((-(((arr_4 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : var_9))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    {
                        var_39 = (17317 < 4096);
                        arr_50 [6] [6] [i_13] [i_14] [i_14] [12] |= (arr_22 [i_0] [i_13] [12] [12]);
                        var_40 &= ((!(arr_12 [i_13] [i_14] [i_15])));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                {
                    var_41 = arr_57 [i_16] [i_17] [i_16];
                    var_42 -= (max((arr_52 [i_17]), var_8));
                }
            }
        }
        var_43 = (61439 + 194);
        var_44 = var_8;
        arr_58 [7] = var_11;
        var_45 |= (((((arr_52 [i_16]) != (arr_52 [i_16]))) ? (arr_52 [i_16]) : (arr_52 [i_16])));
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        var_46 = ((~(~2919905978)));
        var_47 = ((((max(-22761, 0))) ? (arr_57 [i_19] [1] [i_19]) : 1));
    }

    for (int i_20 = 2; i_20 < 16;i_20 += 1) /* same iter space */
    {
        var_48 = (arr_57 [i_20] [14] [i_20]);
        var_49 = arr_53 [1] [i_20 + 2];
    }
    for (int i_21 = 2; i_21 < 16;i_21 += 1) /* same iter space */
    {
        var_50 = (max((var_1 / -6572328130747189923), var_13));
        arr_69 [i_21] [i_21] = arr_57 [i_21] [i_21] [i_21 + 3];
    }
    for (int i_22 = 2; i_22 < 18;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                {
                    arr_80 [i_24] = (arr_71 [i_23]);
                    var_51 |= (max((arr_76 [i_23] [i_23]), -6462469153836997163));
                }
            }
        }
        var_52 = (max(3, -15680));
        arr_81 [3] [i_22] = (arr_72 [15]);
        arr_82 [12] = (!4096);
    }
    var_53 = var_0;
    var_54 = var_8;
    #pragma endscop
}
