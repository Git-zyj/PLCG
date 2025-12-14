/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_16 = ((((arr_2 [i_0]) >> (((arr_2 [i_0]) - 18)))));
            var_17 += ((var_14 ? (arr_4 [10]) : 1));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_18 = var_7;
                var_19 = (((-18446744073709551609 && (arr_0 [i_0]))) ? (var_1 > var_0) : var_0);

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = (max((arr_0 [i_1]), var_5));
                    var_21 = (var_6 > (((var_14 == ((min(var_11, var_5)))))));
                }
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] [i_1] [i_4] = (arr_1 [1]);

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_22 = (((((arr_0 [i_1]) / -var_2)) - (max((arr_1 [i_0]), (max(18446744073709551615, var_4))))));
                    var_23 &= (((max(((((arr_9 [i_0] [i_1] [i_4] [i_5 + 1]) && var_12))), ((-(arr_2 [14]))))) <= -1951449022));
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_20 [i_1] [i_1] [i_1] [i_1] = (((arr_5 [i_0]) ? 18304046987268959035 : ((((!((!(arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, (arr_5 [i_7 + 1])));
                            var_25 = (arr_10 [1] [i_1] [i_6] [i_8]);
                        }
                    }
                }
                var_26 = ((+((var_12 ? (((arr_21 [i_0] [i_0] [i_0] [i_0]) | var_2)) : (((max((arr_17 [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_1] [i_0] [i_6])))))))));
                arr_26 [i_0] = arr_24 [i_0] [i_1] [i_6];
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                var_27 = (min(((var_11 / (arr_8 [i_0] [i_0] [i_9] [i_1] [i_0] [i_9 - 1]))), 280925220896768));
                arr_31 [i_9] = (max((((arr_12 [i_1]) ? (arr_5 [i_0]) : var_10)), ((((max(0, (arr_28 [i_0] [i_9] [i_0] [i_0]))) >= ((((arr_27 [9] [i_1] [i_0]) ? var_4 : var_10))))))));
            }
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_0] = (((((~(((arr_23 [i_10] [i_10]) ? (arr_4 [i_0]) : var_5))))) >= ((var_4 ? 1 : (arr_33 [i_10] [i_0])))));
            arr_36 [i_0] [i_10] [i_0] = ((~((-(arr_16 [i_0] [i_0] [i_0] [i_10])))));
            var_28 = 7294270920781393710;
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_29 = ((!((max((arr_9 [i_11] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_30 = (~var_15);
        }
        var_31 = (arr_23 [12] [i_0]);
        var_32 = -46;
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                {
                    var_33 = (arr_46 [i_14 - 2] [i_14 - 2] [i_14 + 1]);
                    var_34 = (min(var_34, ((((arr_48 [i_12] [i_12] [i_12]) ? ((-(arr_43 [i_14 - 2] [i_14 - 2]))) : var_13)))));
                    var_35 = (((arr_41 [i_12] [i_12]) ? (max((var_8 + 2305229772758134289), ((min(var_8, var_13))))) : (((((!(arr_45 [i_12]))) ? (arr_43 [i_14] [i_12]) : -var_3)))));
                }
            }
        }
        var_36 = (min((((!(arr_48 [i_12] [i_12] [i_12])))), (arr_48 [i_12] [i_12] [i_12])));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_37 = (arr_51 [i_15]);
        arr_53 [i_15] = var_9;
    }
    var_38 = var_11;
    #pragma endscop
}
