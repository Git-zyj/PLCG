/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_14;
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 ^= 4294967295;
            arr_4 [i_0] [i_1] = (((!(arr_1 [i_0]))));
            arr_5 [i_0] [0] = ((var_0 < (arr_0 [i_1])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_2] [i_0] &= ((~(min((arr_1 [i_0]), (max(151146379, -7836267693579768622))))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_18 = (min(var_18, (((((!(arr_6 [14] [i_2]))) ? (!0) : ((((-2147483647 - 1) <= (arr_0 [i_0])))))))));
                var_19 = (((arr_3 [i_3 - 1]) / var_5));
                var_20 = (min(var_20, (arr_1 [i_2])));
            }
        }

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_27 [i_7 + 2] [i_7 - 1] [i_6] [1] [i_4] [i_4 + 1] [i_0] = ((arr_6 [i_4 + 1] [i_7 + 1]) ? -1403 : (arr_22 [9] [i_7] [i_7] [i_7] [4]));
                            arr_28 [15] [15] [i_0] [15] [i_7] [i_7] |= ((arr_6 [i_6 - 1] [i_4 - 1]) - (arr_6 [i_6 + 1] [i_4 - 1]));
                            var_21 = (max(var_21, ((!(!var_5)))));
                        }
                    }
                }
                var_22 = (max(var_22, ((((arr_26 [i_0] [i_0] [i_0] [i_4 + 1] [i_0] [i_5]) ? (arr_26 [i_0] [i_0] [i_5] [i_4 + 1] [i_5] [i_5]) : (arr_15 [i_5] [i_0] [i_0]))))));
                var_23 = (max(var_23, (((!(arr_14 [i_0] [5] [5]))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_24 = (((arr_25 [10] [10] [2] [i_9] [i_9] [i_9]) ? (arr_25 [i_10] [i_10] [i_8] [i_8] [i_10] [i_8]) : (arr_25 [i_0] [i_0] [9] [i_8] [i_9] [i_10])));
                            arr_36 [i_0] [i_4] [i_10] [i_9] [i_10] = (((arr_29 [i_0]) + (arr_25 [i_10] [i_9] [i_4] [i_4 + 2] [i_4] [i_0])));
                            var_25 = ((var_4 < (((arr_33 [3] [2] [i_8] [2]) / 7836267693579768623))));
                        }
                    }
                }
                arr_37 [i_4] [i_4] [i_0] [i_8] |= var_9;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_41 [i_11] [i_11] [i_4] [i_0] = (((max((((arr_7 [i_0] [11] [i_11]) - (arr_35 [i_0] [i_4] [0]))), (arr_21 [i_0] [i_4 - 1])))) >= (((arr_15 [i_0] [i_4 - 1] [i_0]) / (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_26 = var_8;
            }
            arr_42 [i_0] [i_0] = (arr_22 [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1] [i_4]);
            arr_43 [i_4 + 1] [i_4 + 2] = (max(((min((arr_3 [i_4 - 1]), (arr_3 [i_4 + 1])))), var_6));
            var_27 ^= ((!(1 != var_4)));
            arr_44 [6] [i_0] [i_0] = ((((arr_33 [i_4 + 2] [i_4 + 2] [i_4 - 1] [1]) >= (arr_33 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1]))));
        }
        arr_45 [i_0] = ((((arr_40 [i_0] [i_0] [i_0] [i_0]) ? (arr_40 [i_0] [i_0] [i_0] [i_0]) : (arr_40 [i_0] [i_0] [i_0] [i_0]))) * ((49934 * (arr_40 [i_0] [i_0] [1] [i_0]))));
        var_28 = -2;
    }
    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        var_29 = (((arr_46 [i_12 - 2] [i_12]) ? (arr_48 [i_12 - 1]) : (arr_48 [i_12 - 2])));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_53 [i_13] [i_12 + 1] = arr_49 [i_12 - 1] [i_12];
            var_30 = ((var_5 << (((arr_48 [i_12 - 1]) - 386374128))));
            var_31 = (max(var_31, var_6));
        }
        var_32 |= (arr_52 [i_12 + 1]);
    }
    var_33 = (max((((15592 >= ((max(var_10, 0)))))), (min(-7836267693579768622, (((var_1 ? var_12 : var_9)))))));
    #pragma endscop
}
