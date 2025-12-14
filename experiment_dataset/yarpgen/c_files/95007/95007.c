/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (arr_1 [i_0 - 1]);
        var_19 = (min(var_19, var_9));
        var_20 &= 51;
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [10] [i_1] = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        var_22 = var_9;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (~183);
        var_24 = (min(65532, var_12));

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_25 = var_9;
            arr_15 [i_3] [i_2] = (~166);

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_26 = (max(var_26, (!var_1)));
                var_27 ^= ((~(!var_12)));
                var_28 = (+-194);
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
            {
                arr_20 [i_2] [i_3] [i_3] = ((~(arr_19 [14] [14] [i_5 - 2])));
                var_29 = (max(var_29, 65528));
                arr_21 [i_5] [i_2] [4] [i_2] = (arr_11 [i_2] [i_3]);
            }
            for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_30 = (arr_13 [i_3] [i_3]);
                var_31 = (max(var_31, (((((min((arr_14 [i_3 + 1] [i_6 - 2]), 174))) ? (arr_13 [i_2] [i_3]) : var_16)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_32 = (min(var_32, (((-(max(((var_0 ? 18446744073709551615 : (arr_24 [i_3] [i_7] [i_6]))), var_2)))))));
                            var_33 = ((!(arr_8 [i_6])));
                            arr_29 [i_2] [i_2] = var_3;
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_34 [i_10] [i_2] |= var_16;
                var_34 = (((-(((!(arr_17 [i_2] [i_2] [i_10] [i_9])))))));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_37 [i_2] [i_9] [0] [i_11] = (arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2]);
                arr_38 [i_11] [i_9] [i_2] [i_2] = 715941772;
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_35 += ((!(arr_36 [i_9 - 1] [i_9 - 2])));
                arr_43 [i_12] = ((-(~55437)));
                var_36 = (((-(arr_41 [i_2] [i_2] [i_2]))));
                arr_44 [i_2] [i_2] [i_2] [1] = (arr_33 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2]);
                var_37 = ((~(arr_14 [i_2] [12])));
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    {
                        var_38 = (max(var_38, (arr_8 [i_2])));
                        arr_50 [i_9] [i_13] = ((-(((!(((~(arr_25 [i_2] [i_9] [i_13] [i_9] [i_9])))))))));
                    }
                }
            }
            arr_51 [i_2] [i_2] [i_2] &= 12151;
        }
        for (int i_15 = 2; i_15 < 20;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_39 += 74;
                arr_56 [i_2] [i_2] [11] [i_2] = var_5;
                var_40 = (~-18446744073709551615);
                var_41 = 1;
            }
            arr_57 [i_2] = -20;
            var_42 = (max(var_42, -var_5));
        }
        arr_58 [i_2] = 4998296832643389862;
        var_43 = (!var_6);
    }
    var_44 = var_13;
    var_45 = (((var_4 ? var_15 : var_5)));
    var_46 = (~var_10);
    #pragma endscop
}
