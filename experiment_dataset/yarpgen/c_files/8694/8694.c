/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(1, (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [4] [i_0] [i_0] |= ((0 ? (max((arr_7 [i_2 - 1] [i_1 + 1] [i_2] [i_3]), (((arr_6 [i_0]) ? 1 : (arr_7 [i_3] [i_2] [i_1] [i_0]))))) : var_2));
                        var_13 = (max(0, var_7));
                        var_14 ^= (max((((arr_1 [i_3] [i_3 + 4]) ? (arr_1 [i_3] [i_3 - 1]) : (arr_1 [i_3] [i_3 + 4]))), ((min((arr_7 [i_0] [i_1] [i_1 + 3] [i_2 - 1]), 65528)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = 1;
                                var_15 += 1;
                            }
                        }
                    }
                    var_16 = max((max((arr_8 [i_0] [i_1 + 1]), 1)), (((!((min((arr_3 [i_0] [i_1]), (arr_11 [i_2] [i_1] [i_1] [i_0]))))))));
                }
            }
        }
        arr_16 [i_0] [i_0] = var_5;
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_17 = (max(((max((arr_0 [i_6]), (arr_0 [i_6 - 1])))), (arr_0 [i_6])));
            arr_22 [1] &= (min(((+(((arr_0 [i_6]) ? var_3 : (arr_12 [i_7] [i_7] [i_7] [i_6]))))), (min(((1563352755 ? 1 : 19393)), ((max(117, var_5)))))));
            var_18 = ((((((~11869) ? (~1) : ((max(1, var_4)))))) ? 49922 : (((arr_17 [i_6 - 1]) ? (arr_17 [i_6 + 1]) : (arr_17 [i_6 - 1])))));
            var_19 = (-(arr_18 [i_7]));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_25 [i_8] = ((((((arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]) ? (((max((arr_5 [i_8] [i_8] [i_8]), 1)))) : ((1 ? (arr_17 [i_6]) : 5076722177580679504))))) ? ((((((arr_4 [i_6] [i_6]) ? (arr_5 [i_8] [i_8] [i_6]) : var_1))) ? ((max(1, (arr_0 [i_6])))) : ((-(arr_11 [i_6] [i_8] [6] [i_8]))))) : ((((max(19393, -11869))) ? (arr_7 [i_8] [i_6] [i_6] [i_6]) : ((-20853 ? 1 : 1))))));
            var_20 = (arr_17 [i_6]);
            arr_26 [i_8] [i_8] [i_6] = ((max((((arr_5 [i_8] [i_6] [i_6]) ? 96 : var_12)), (arr_23 [i_6]))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] [i_6] = 20853;
            var_21 = arr_1 [i_9] [i_6];
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_22 -= -11877;

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_23 |= ((((min(128, -8345489493581836605))) ? ((-var_2 ? (max((arr_19 [i_6]), -17)) : (arr_4 [i_6] [i_11]))) : (-2147483647 - 1)));

                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_24 ^= (max(128, var_1));
                    var_25 = (min(1, 20852));
                    var_26 = ((-((-(arr_9 [i_12] [i_12 + 1] [i_11] [i_11] [i_11] [i_11])))));
                    arr_39 [i_6] = ((!((((arr_35 [i_6] [i_6] [i_6 - 1]) ? 1 : ((1 ? (arr_24 [i_6] [i_12]) : (arr_24 [i_10] [i_6]))))))));
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    var_27 = (((((~((9745 ? 1 : 11867))))) ? ((0 ? 0 : 4294473871709394863)) : 15951));
                    var_28 = ((max((arr_29 [i_6] [i_6 - 1]), (arr_29 [i_6] [i_6 + 1]))));
                    var_29 *= ((-65535 ? ((65535 ? (arr_11 [i_13] [i_11] [i_11] [i_6]) : (min(1, (arr_34 [i_6] [i_13] [i_11]))))) : 1));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_30 ^= ((((((arr_1 [i_6 - 1] [i_14]) ? ((min(1, 11870))) : ((-5790150441291840025 ? (arr_9 [i_6] [i_6] [i_11] [i_14] [i_10] [i_10]) : 1))))) ? (~0) : (min((arr_8 [i_6 + 1] [i_6]), (((arr_18 [i_11]) ? (arr_45 [i_14] [i_11] [i_10] [i_10] [i_6]) : (arr_21 [i_14] [i_14] [i_11])))))));
                    arr_47 [i_14] [i_6] = (min((((1 ? (((arr_41 [i_14]) ? (arr_14 [i_11] [i_11] [i_11] [i_10] [i_11] [i_10]) : var_4)) : ((~(arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))), ((-(arr_8 [i_14] [i_11])))));
                    var_31 = (max(((1 ? -1 : 1)), ((max(1, 1)))));
                }
            }
        }
        var_32 = (!-20849);
        var_33 = 0;
    }
    var_34 = (min(((1 ? (max(9745, var_10)) : (((1 ? -9745 : 1))))), var_3));
    #pragma endscop
}
