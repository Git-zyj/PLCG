/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_5;
    var_21 = var_10;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 &= (((max((arr_5 [i_0 + 1] [i_1] [i_2]), -9212862709748608809)) & ((min((arr_7 [i_1 + 1]), ((41168 / (arr_3 [i_0] [i_0] [i_0]))))))));
                        var_23 += ((-915122918 ? 1 : (((arr_2 [6]) ? 15 : 18187713345547736510))));
                        arr_10 [i_3] [i_1] [i_2] [i_2] [i_3] = (arr_5 [i_0] [i_1] [17]);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_24 = (max(25501, (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                arr_15 [i_5] [i_5] [0] [i_0] = var_4;
            }
            var_25 = (arr_6 [3] [i_4] [i_0] [9]);
            var_26 &= (((arr_7 [i_4]) ? ((((!(arr_13 [i_0 - 1] [i_0] [i_4] [i_4]))))) : var_9));
        }
        var_27 += (arr_1 [5] [i_0]);
        arr_16 [4] [i_0] = var_6;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            var_28 ^= (arr_0 [i_7 + 4]);

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                arr_25 [i_6] [i_6] [i_8] [i_8] |= ((!(arr_18 [i_7 - 3])));
                arr_26 [i_6] [i_7] [i_6] = (((arr_13 [i_7 - 4] [i_7 - 1] [i_7 - 3] [i_7 + 4]) <= (arr_13 [i_7 + 2] [i_7 - 1] [i_7 - 4] [i_7 + 2])));
                arr_27 [4] [8] [i_6] |= ((!119) && var_14);
            }
            var_29 = 25501;
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            arr_32 [i_6] [i_9] = (arr_0 [i_9 - 2]);

            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                arr_37 [i_6] [i_6] &= (arr_6 [i_6] [i_6] [i_6] [i_6]);

                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        arr_43 [i_10] [i_9 - 1] [i_9 - 1] [i_10] [1] [11] = (arr_8 [i_6] [i_6]);
                        var_30 = (((arr_5 [i_11 - 1] [i_11 + 1] [i_11 + 2]) + 25471));
                        var_31 = (arr_20 [i_6] [i_12 + 1]);
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_32 ^= ((~(arr_38 [i_11 + 1] [1])));
                        var_33 = ((((((arr_28 [i_6]) * 0))) ? (arr_20 [i_9 + 1] [i_11 - 2]) : (arr_9 [i_6] [i_6] [i_13])));
                        arr_47 [i_6] [i_10] [i_10] [i_11] [i_13] = (((0 && -915122918) > 67108863));
                        var_34 = (arr_36 [i_6] [i_10] [i_10] [i_6]);
                        var_35 = (((arr_19 [i_6]) ^ (arr_21 [i_10])));
                    }
                    var_36 = (11 && (arr_11 [i_10] [i_9] [i_10]));
                    var_37 = 8;

                    for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_38 = ((-(arr_40 [i_6] [i_14 + 1] [i_11 - 2] [i_10] [i_14 + 1] [i_9 - 1])));
                        var_39 *= (!var_15);
                    }
                    for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
                    {
                        var_40 = (var_9 | -2147483638);
                        var_41 = (var_10 != (arr_40 [i_6] [i_6] [i_9] [i_10] [i_9] [4]));
                        var_42 &= ((-(arr_6 [i_6] [i_9 - 2] [i_10] [8])));
                    }
                    arr_53 [i_10] = (((arr_12 [i_6] [12]) >= ((((arr_29 [4] [4]) ? (arr_51 [i_10] [i_10]) : var_14)))));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_56 [i_6] [i_10] = var_7;
                    var_43 = ((arr_48 [i_9 + 1] [i_9 - 2] [i_10]) ? (arr_48 [i_9 - 2] [i_9 - 1] [i_10]) : (arr_48 [i_9 - 2] [i_9 + 1] [i_10]));
                    var_44 -= var_6;
                }
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                var_45 = (arr_11 [i_17] [i_9 - 2] [22]);
                var_46 = 9223372036854775807;
            }
            for (int i_18 = 4; i_18 < 11;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    arr_66 [i_6] [i_9] [i_18] [i_19] &= ((var_16 > (arr_65 [i_18 - 4] [0] [i_18 - 4] [i_18 - 3] [i_9 + 1] [i_9 - 1])));
                    var_47 = var_12;
                }

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_69 [i_6] [i_6] [i_6] [i_6] [i_6] = -117662029906989936;
                    var_48 = (arr_18 [i_18 + 1]);
                    arr_70 [i_6] = (arr_4 [i_6] [i_18 - 2] [i_20]);
                    arr_71 [12] [i_18] [i_9] [0] [i_6] = (((arr_1 [i_9 - 1] [i_9 - 1]) ? (arr_1 [i_9 + 1] [i_9 - 2]) : (arr_1 [i_9 - 2] [i_9 - 2])));
                }
                for (int i_21 = 3; i_21 < 12;i_21 += 1)
                {
                    arr_75 [i_21] [i_21] [i_18] = (!-1006735775136353929);
                    arr_76 [12] [i_21] [i_18] [i_18] [i_18] = (((arr_31 [i_9] [i_21 + 1]) ? (arr_11 [i_18 - 1] [i_21 - 3] [i_9 - 2]) : (arr_12 [i_6] [i_9 + 1])));
                }
                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    arr_81 [i_18 - 4] [i_18 - 4] [2] [i_18 + 1] [2] [i_18] = (arr_73 [i_6] [i_9] [i_18 + 2] [i_22 - 2]);
                    arr_82 [5] [1] [i_22 + 1] = ((!(arr_39 [i_9 - 1] [i_6] [i_22 - 2] [i_9 - 1] [i_22 + 1])));
                }
            }
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            var_49 &= (((arr_23 [i_6]) != var_17));

            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                var_50 = (((1332492017 && 22958) + 2016));
                arr_88 [i_24] &= (var_15 == 116);
            }
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                arr_91 [i_6] [i_23] [i_23] &= var_1;
                var_51 += (arr_30 [i_23] [i_23] [i_25]);
                arr_92 [i_6] [i_6] [i_23] = (((arr_21 [i_23]) + (arr_21 [i_23])));
            }
        }
        arr_93 [i_6] = arr_61 [i_6] [i_6] [i_6];
    }
    var_52 ^= var_16;
    #pragma endscop
}
