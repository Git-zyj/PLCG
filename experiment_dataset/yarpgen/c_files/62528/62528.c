/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = arr_1 [4];
        arr_2 [i_0] [8] = var_6;
        var_19 = 1640450335;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [5] = var_17;
        var_20 = ((2447310888 ? -91 : -91));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_21 = (~-91);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = (var_5 || var_16);
                        arr_16 [i_1] [i_2] [i_3] = (arr_14 [i_1] [i_2]);
                    }
                }
            }
            var_23 = 222;
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_24 = (!1);
                arr_23 [4] [i_5 - 2] [i_5 - 2] [i_5 - 2] = (9223372036854775807 != -116);
                var_25 = 185;
                var_26 = var_4;
                arr_24 [i_1] = -1332101988;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_27 = (arr_22 [5] [5] [5] [7]);
                arr_29 [14] [8] [i_5 + 2] [14] = (((arr_8 [i_1] [i_5 + 2] [i_5]) >> (var_14 > var_6)));

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_28 = (((((-30 ? 48 : (arr_9 [13] [i_5 + 1])))) / 13563555546884476834));
                    var_29 = -0;
                }
                for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_30 = (~var_9);
                    var_31 = ((65535 ? (arr_8 [i_5 + 2] [i_5 - 1] [i_5 + 2]) : (arr_8 [i_5] [i_5 - 1] [3])));
                    arr_37 [i_1] [i_5] [0] [i_9] = (22 | var_16);
                    arr_38 [i_1] [i_1] [i_5] [2] [i_1] = (((-9223372036854775807 || 222) / var_0));
                }
                for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_32 = (arr_11 [i_1] [3] [i_7] [i_1]);
                    var_33 = ((48 ? var_6 : (arr_39 [i_1] [7])));
                }
                for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    arr_43 [i_1] [i_5] [i_7] [i_1] [i_11] = (+-9223372036854775807);
                    arr_44 [i_1] [i_5 - 2] [i_7] [1] [i_1] [i_7] = (((213 && -94) ? 1 : (4294967295 == 4294967281)));
                    arr_45 [i_1] [i_5] [i_7] [i_11 + 1] = ((!(arr_14 [i_1] [i_5 + 2])));
                    var_34 = (((arr_7 [i_7]) || var_3));
                }
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
            {
                arr_50 [i_5] = ((!((((arr_7 [0]) ? var_8 : 9223372036854775801)))));
                arr_51 [i_1] [i_1] = ((((((var_5 ? var_9 : (arr_32 [i_1] [i_5] [i_1]))))) * (min((!48), (((arr_47 [i_1] [i_1] [i_12] [i_12]) | 48))))));
                var_35 = ((1 ? ((max((arr_17 [i_12]), (arr_19 [i_5])))) : (max((arr_11 [i_1] [11] [11] [11]), var_0))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
            {
                var_36 = ((-(arr_10 [0] [i_5 - 1])));
                arr_55 [i_1] [i_1] [i_1] = (((arr_4 [i_5 + 1]) ^ -12));
            }
            var_37 = ((-91 ? (((arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1]) + 4294967289)) : (((-(arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1]))))));
            arr_56 [i_5] [i_5] = ((-(max((arr_11 [i_1] [i_1] [i_1] [i_1]), (((4188107015718357141 || (arr_39 [i_1] [i_1]))))))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_38 = (arr_54 [i_1] [i_14] [i_14] [12]);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_66 [i_1] [i_1] = (arr_34 [i_1] [i_14] [i_1] [i_1]);
                        var_39 = (arr_12 [i_1] [i_1] [i_1] [0]);
                        var_40 = 1;
                        var_41 = (((arr_27 [i_14 + 1]) <= (arr_27 [i_14 - 1])));
                        var_42 = ((~(arr_22 [i_1] [i_14] [i_15] [i_1])));
                    }
                }
            }
            arr_67 [i_1] = (!var_0);
        }
    }
    var_43 = ((~(((var_1 + 17923724668408702880) + -var_9))));
    #pragma endscop
}
