/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= max(((max((((var_3 ? 0 : var_10))), (max(0, var_4))))), var_0);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((512 ? (min(-67, -9200158570660042816)) : -14));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_15 = (min(var_15, ((((arr_4 [i_0 - 1]) == (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_2] [i_2] [i_2] [i_2] = var_12;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_0] = (((arr_0 [i_3]) ? (arr_9 [i_3] [i_0] [i_0]) : ((-427 ? 1 : 5561398869695492370))));
                arr_12 [i_0] = (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_15 [i_0 - 2] [i_1] [10] [i_0 - 2] = ((((min(0, (arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) * ((min(17839882558685985160, var_0)))));
                var_16 &= (!var_8);
                arr_16 [i_4] [i_1] [i_0] = (min((arr_13 [i_0 + 1]), (((!(arr_13 [i_0 + 1]))))));
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_19 [i_0] [14] [i_5] |= 0;
                var_17 ^= (((~(arr_3 [i_0] [i_1] [i_0 + 1]))));
            }
            arr_20 [i_0 - 2] [i_1] = (arr_10 [i_0 + 1] [i_0 - 1]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_28 [i_7] [i_6] [i_6] [i_0] = ((!(arr_6 [i_0 - 2] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_35 [7] [7] [i_7] [i_8] [i_7] [7] = (arr_32 [i_0 - 2] [i_9] [i_9] [i_0 - 2] [i_9] [i_9] [i_0 - 2]);
                            arr_36 [i_0] [i_0] [i_7] [i_0] [i_0] = ((-(arr_26 [i_0] [i_0] [1] [i_0])));
                            var_18 = (arr_0 [i_0 + 1]);
                            var_19 -= -427;
                            var_20 = ((~(arr_6 [i_0 + 1] [i_0] [i_0])));
                        }
                    }
                }
            }
            var_21 = 1;
            var_22 = ((-(arr_7 [i_6] [i_6] [i_0])));
        }
        arr_37 [18] = var_4;
        arr_38 [18] = (((-(arr_23 [i_0] [i_0 - 2] [i_0]))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_23 = ((((arr_41 [i_0] [i_11] [i_0 - 2] [i_0 - 2]) ? (arr_41 [7] [i_11] [i_0 - 1] [i_11]) : (arr_41 [9] [i_11] [i_0 + 1] [i_10]))));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_11] [i_11] = ((((!(arr_7 [i_0] [i_10] [i_11]))) || var_11));
                        arr_46 [i_0] [i_10] &= (arr_42 [i_12] [i_0 - 1]);
                        arr_47 [i_11] = (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_11] [i_10] [i_11] [i_10] = min((((((min(402653184, 504))) ? (((arr_43 [i_0] [i_10] [i_11] [i_0]) * -9200158570660042816)) : (((min(1, 181))))))), (max((max(0, 4503599627370495)), (arr_34 [i_0] [i_0] [i_11] [i_13] [i_0 + 1] [i_0] [i_0]))));
                        var_24 = (max(var_24, 25));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_0 + 1] [i_11] [i_0 + 1] [i_14] = ((!(arr_52 [i_11] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_11])));

                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            arr_57 [i_10] [i_11] [i_10] = 11;
                            arr_58 [i_11] [20] [i_11] [i_11] [i_11] = ((98 < ((~(arr_26 [i_0] [21] [i_11] [i_15 - 1])))));
                        }
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        arr_63 [i_0] [i_0] [i_0] [i_11] [i_10] [i_0] = (max((((((1 > (arr_42 [i_16] [i_0])))) >> (var_3 - 1900147494))), (((!(((4294966784 ? (arr_44 [i_10] [i_11]) : 0))))))));

                        for (int i_17 = 4; i_17 < 21;i_17 += 1)
                        {
                            arr_66 [i_0] [i_11] = (((max((((4294966792 ? (arr_25 [i_0 - 1] [i_0] [i_0 - 1] [5]) : 181))), ((0 ? var_5 : (arr_65 [i_0 - 1] [i_11])))))) ? ((((max(407, (arr_30 [i_0] [i_10])))) ? (arr_5 [i_0 - 1] [i_17] [18]) : 2168185702268845483)) : ((max((1741524299 != var_12), (max((arr_42 [i_10] [6]), (arr_65 [i_0] [i_11])))))));
                            arr_67 [i_0] [6] [i_11] [i_16] = arr_25 [i_10] [i_10] [i_16] [i_17];
                        }
                    }
                }
            }
        }
    }
    var_25 = var_1;
    var_26 = (min(var_26, (((!(!var_4))))));
    #pragma endscop
}
