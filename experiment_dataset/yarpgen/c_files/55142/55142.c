/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_3 ? var_14 : (var_1 - -67))) | (var_3 - var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_16 = ((var_7 + (arr_1 [i_0])));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_17 = arr_0 [i_1 - 1] [i_1 - 1];
                var_18 = var_3;
            }
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_9 [3] [i_0] [3] [i_0] = var_2;
                var_19 = 83;
                var_20 = (min(var_20, 104));
            }
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_21 = var_12;
                        arr_21 [i_0] [i_4] [6] [i_5] [1] [i_6] = ((-var_13 != ((((!(arr_15 [i_4] [i_4] [i_4])))))));
                        arr_22 [i_4] = 262142;
                    }
                }
            }
            arr_23 [i_0] [i_0] &= (((arr_19 [i_4] [i_4] [i_0] [i_0]) ^ (~var_4)));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_22 = (arr_3 [i_7]);
            var_23 = (max(var_23, (((-73 ? var_13 : (arr_12 [i_7] [i_0]))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    var_24 = (min(var_24, 4294705154));
                    var_25 = var_1;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_26 += (var_1 - (arr_20 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9]));
                                var_27 = ((!(arr_31 [i_0] [1] [i_9 + 3] [i_10])));
                            }
                        }
                    }
                }
            }
        }
        arr_37 [9] = (((arr_3 [i_0]) / 84));
        var_28 = ((!(arr_18 [i_0])));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_29 &= (min((arr_19 [i_12] [i_12] [i_12] [i_12]), ((var_12 ? (arr_17 [i_12] [i_12] [i_12] [i_12]) : (arr_17 [i_12] [i_12] [i_12] [i_12])))));
        arr_42 [i_12] [i_12] = (max((((arr_18 [9]) ? ((var_6 ? 7722513174355338981 : (arr_31 [i_12] [i_12] [i_12] [11]))) : (((max((arr_31 [5] [5] [1] [i_12]), var_9)))))), 127));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] = min((arr_44 [i_13]), -1);

        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_30 = (min((((-(arr_18 [i_13])))), (((var_4 / 2016282951412203218) ? (((var_8 ? 1016 : var_1))) : ((0 ? 4294967281 : var_6))))));
                arr_50 [1] [i_14 + 1] [i_13] &= var_8;
                var_31 ^= ((((-61 ? (((arr_20 [i_13] [i_13] [i_13] [i_13] [9] [i_13]) ? var_0 : (arr_3 [i_14]))) : ((max(-111, var_10))))) + (((((var_0 ? var_5 : var_3))) / var_6))));
            }

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                var_32 = ((-(((arr_47 [i_14 + 1] [i_14 - 1]) * (arr_47 [i_14 + 2] [i_14 + 3])))));
                var_33 *= ((((min((arr_25 [i_16] [i_13] [i_13]), (arr_25 [16] [16] [i_16])))) ? -13880663694964099732 : 7264476839210138));
                var_34 = ((2078476294 | (max(((max(4294967280, var_7))), var_10))));
            }
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                var_35 = (((((max(1, 115))) ? var_6 : (((32 ? 262116 : 1))))));
                var_36 = ((var_6 ? (((arr_44 [i_13]) << (var_7 - 556))) : -10041));
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_37 *= 152;
                    arr_62 [i_13] [i_14] [i_18] [i_19] [i_13] = ((-var_13 == ((((var_10 / 1) ? 16383 : (6146069686776956234 == var_6))))));
                }
                var_38 = (max(var_38, 163));
            }
            arr_63 [i_13] = 10048;
        }
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            arr_66 [i_20] [i_13] [i_13] = (18446744073709551615 ^ 65526);
            var_39 &= (arr_33 [i_13] [11] [i_20]);
        }
        var_40 = ((var_7 ? ((min(((max(var_12, var_11))), (arr_10 [i_13])))) : -35));
    }
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        var_41 += (((arr_68 [i_21] [i_21]) / (((var_1 ? 3 : 7)))));
        arr_69 [i_21] = (max(141, ((-var_14 ? (min(2147483647, var_12)) : var_12))));
    }
    var_42 = (((((var_2 ? var_8 : (~var_14)))) ? ((var_11 ? var_9 : (!var_1))) : var_11));
    var_43 = var_5;
    #pragma endscop
}
