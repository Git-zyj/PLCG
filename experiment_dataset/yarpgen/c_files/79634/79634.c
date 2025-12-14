/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (+-220);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((!(var_4 == var_0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (((-((var_5 ? var_12 : (arr_3 [i_2] [i_2]))))));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_17 = (min(var_17, (var_7 & 1)));
                            var_18 = (min((arr_6 [i_2] [i_3] [i_2]), ((-(arr_10 [i_4] [i_4 + 2] [i_4 + 2] [i_3] [i_1] [i_4])))));
                        }
                    }
                }
            }
        }
        var_19 = (max(var_19, (((~(arr_3 [i_0] [i_0]))))));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_16 [i_0] = ((0 << (~var_7)));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_21 [i_6] = ((-(arr_17 [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, var_9));
                            var_21 = ((!(arr_7 [i_6] [15] [i_6] [7])));
                            arr_28 [i_0] [i_6] [i_0] [i_7] [i_8] = (((arr_8 [i_6]) & (((arr_8 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_5])))));
                            var_22 *= ((!(arr_6 [i_5] [i_6] [i_5])));
                            var_23 = ((!(arr_10 [6] [i_5] [i_5] [15] [i_8] [i_7])));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_24 *= ((-var_8 ? (arr_29 [13] [i_5] [i_0] [i_0]) : (-2147483647 - 1)));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_25 *= -13878;
                    var_26 = (arr_23 [i_0] [i_5] [i_9] [i_10]);
                    arr_33 [i_5] [i_9] [i_5] [15] = ((!(((~((var_10 ^ (arr_27 [i_10] [i_10] [16] [i_10]))))))));
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_37 [i_11] [i_11] [i_11] [i_0] = (arr_14 [10] [13] [i_0]);
                arr_38 [i_11] = 24;
                var_27 = ((~(arr_18 [i_5])));
            }
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_28 = (arr_25 [8] [i_0] [i_0]);
            arr_43 [i_12] = (((((~((((arr_40 [i_0] [i_12] [i_12]) != var_6)))))) & (((arr_26 [5] [i_12] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_12] [i_12] [i_12]) : var_2))));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_29 = -65535;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        arr_52 [i_15] [i_14] [i_0] [i_0] = (min((arr_39 [i_0] [i_14]), (max((arr_18 [i_0]), (((~(arr_23 [i_14] [i_13] [i_14] [i_15]))))))));

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_30 = (max(((max((!var_13), (arr_3 [i_14] [i_14])))), 67));
                            var_31 = (arr_29 [i_0] [i_13] [7] [i_15]);
                        }
                        arr_56 [10] [i_0] [i_0] [0] [i_0] = ((((!(!var_1))) ? (((!((!(arr_47 [3] [3])))))) : (((!((min(25, 8531513472803091642))))))));
                    }
                }
            }
            var_32 ^= var_13;
            var_33 = ((-((~(((arr_26 [i_0] [i_0] [i_0] [i_13] [i_13]) ? 1 : (arr_15 [i_0] [i_0])))))));
            var_34 = (min(var_34, (arr_15 [i_13] [i_0])));
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_35 = ((((!((((arr_39 [i_17] [i_17]) & (arr_8 [i_0])))))) ? (!var_7) : 8531513472803091642));
            var_36 *= ((!(((((((arr_1 [i_17]) ? var_12 : var_2))) ? (((1 ? -1 : 104))) : (arr_26 [14] [14] [i_17] [i_17] [7]))))));
        }
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        arr_61 [i_18] = ((~(((var_11 ? (arr_59 [i_18]) : (arr_59 [i_18]))))));
        arr_62 [i_18] = ((!(((-(~var_8))))));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                {
                    var_37 &= ((!(arr_68 [i_20] [5])));
                    var_38 = (arr_69 [i_19] [i_20] [i_21]);
                }
            }
        }
        var_39 = ((((((arr_63 [i_19]) - ((var_2 / (arr_66 [1] [i_19])))))) ? (((~(arr_63 [i_19])))) : (arr_72 [i_19] [i_19])));
        arr_73 [i_19] = ((((+(((arr_70 [i_19] [0] [0] [i_19]) ? (arr_66 [i_19] [i_19]) : (arr_66 [i_19] [0]))))) > ((-(arr_69 [i_19] [i_19] [i_19])))));
    }
    #pragma endscop
}
