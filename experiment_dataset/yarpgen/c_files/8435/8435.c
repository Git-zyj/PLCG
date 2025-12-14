/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_9 [1] [1] [i_0] &= ((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]) != 22400);
                arr_10 [i_1] = (!-19968);

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_12 -= (((arr_12 [i_0]) ? (arr_11 [i_0] [i_0]) : var_1));
                        arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_3 + 1] [i_4] = (-97 / 24823);
                    }
                    arr_18 [i_0] [i_1] [i_2 + 1] [i_3 - 1] = ((-(arr_4 [i_1])));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_13 = var_1;
                    arr_22 [i_0] [i_0] [18] [i_5] [i_1] = (arr_11 [i_0] [i_1]);
                    var_14 += ((!(arr_21 [15] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                    var_15 -= (((arr_20 [i_1 + 1] [i_2 - 1] [i_5]) ? 88 : (arr_6 [i_1 + 1] [i_2] [i_2 + 1])));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_16 -= (((arr_19 [i_1 + 1] [i_0]) + var_5));
                    var_17 = 96;
                }
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_18 = 7356;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 = -71;
                            var_20 = 83;
                        }
                    }
                }
                var_21 = (max(var_21, (((((max((arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_7 + 1] [i_7 + 1]), var_9))) ? ((((arr_13 [i_1] [i_0] [8] [i_1 - 1] [i_7 - 2] [8]) != (arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_7 - 2] [2])))) : -5)))));
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_22 = (max(var_22, 5553816926310481670));
                arr_38 [i_1] [i_1] [i_1] [i_10] = (~-97);
                var_23 -= (arr_7 [i_0] [i_1 + 1] [i_10 - 1]);
            }
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                var_24 = ((~(max((-2344177682950360087 - -92), var_11))));
                arr_41 [21] [i_1] [i_1] [i_11 + 1] = (((arr_7 [i_1 + 1] [i_1 + 1] [8]) ? (arr_35 [19] [i_1 + 1] [i_11 + 2] [i_1 + 1]) : 176));
            }
            arr_42 [17] [i_1] [17] = ((2344177682950360086 != (!96)));
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_45 [4] [7] = (((arr_0 [i_0]) != (~var_4)));
            var_25 = -7470385514979487138;
        }
        var_26 -= (min(9886799555348356418, ((((arr_44 [i_0] [i_0]) ? 3678304768 : 71)))));
        var_27 = (max(((((!var_4) != ((0 ? -24823 : -87))))), (((arr_7 [i_0] [i_0] [0]) ? (((((arr_37 [8] [i_0] [i_0]) != var_10)))) : (arr_36 [i_0] [i_0] [i_0] [18])))));
        var_28 = (max((max(-117, 5553816926310481646)), (((arr_43 [i_0]) ? var_1 : (arr_43 [i_0])))));

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {

            for (int i_14 = 2; i_14 < 22;i_14 += 1)
            {
                var_29 -= (min(97, (((arr_33 [i_0] [14] [i_0] [i_13] [i_14 - 1]) != 1176714120))));
                var_30 = (((arr_35 [i_0] [i_13] [i_0] [1]) ? ((max((arr_50 [i_0] [i_13] [i_14 + 1]), var_10))) : (max(var_6, var_1))));
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    arr_55 [i_0] [0] [i_15] [i_16] [2] = ((arr_50 [i_0] [i_0] [i_0]) ? (arr_32 [3] [i_13] [i_15] [7] [i_13]) : (77 != var_10));
                    var_31 = (!var_5);
                }
                arr_56 [i_0] [i_13] [20] = (((arr_29 [i_15] [i_13] [i_0]) != (arr_43 [i_0])));
            }
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                var_32 = ((-(12892927147399069953 != var_10)));
                arr_59 [3] [i_13] [i_17] &= 18446744073709551610;
            }
            var_33 = (min(((min(23620, (arr_51 [i_0])))), (((arr_37 [i_0] [i_0] [i_13]) ? var_8 : var_6))));
            var_34 = ((~((-(arr_35 [i_0] [i_0] [1] [i_0])))));
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            var_35 = var_8;
            var_36 = (min(var_36, ((max(((((var_4 ? (arr_29 [i_0] [i_18] [1]) : var_11)))), (max(7555184600065753387, ((((arr_29 [i_0] [18] [i_0]) ? (arr_1 [10]) : 71))))))))));
        }
    }
    var_37 = (min(var_37, var_5));
    #pragma endscop
}
