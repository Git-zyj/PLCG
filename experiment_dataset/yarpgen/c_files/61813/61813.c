/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min(var_16, var_11))));
    var_19 = (max(var_19, ((min((max(196, var_0)), (!var_13))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(((((arr_1 [i_0] [i_0]) && var_3))), (arr_1 [i_0] [i_0])));
        var_21 = (max(var_21, ((max(-857394543, ((((-(arr_0 [i_0] [i_0]))) * -var_9)))))));
        var_22 = -16;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_23 = (((((arr_2 [i_0] [i_1]) + (max((arr_1 [i_0] [i_0]), var_16)))) != -var_1));
            arr_5 [20] |= (max(((64150 + (-32767 - 1))), ((-(arr_4 [i_0])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_2] [i_1] |= (((29739 && 4294967295) ? 65515 : var_10));
                arr_9 [i_0] [i_0] [i_0] [i_0] = (65508 | 4294967272);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((var_10 - var_10) > var_0)))));
                            var_25 = (min(var_25, ((((arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2]) % var_5)))));
                        }
                    }
                }
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_18 [i_0] [i_0] [0] &= ((-((min((((var_11 < (arr_0 [i_0] [i_0])))), (-32767 - 1))))));
                arr_19 [i_0] [i_1] [i_1] [12] |= max(((max((arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]), (arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])))), 31032);
                arr_20 [i_1] [i_0] = (((arr_14 [4] [20] [i_5] [i_0] [i_0] [i_0]) && var_16));
                var_26 = var_17;
            }
            var_27 -= (((arr_16 [i_0] [i_0]) ? ((((arr_2 [i_1] [i_1]) < (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) : (((!(arr_2 [i_0] [i_1]))))));
            arr_21 [i_0] [i_0] = (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (min((max(var_13, (arr_6 [i_0] [i_1] [14] [i_1]))), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = var_11;

                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_28 = var_0;
                    arr_31 [i_0] [i_6] [i_0] [i_8] = 65515;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_29 = var_13;
                    var_30 = (arr_29 [i_9]);
                }
                var_31 *= (min((arr_4 [i_7]), var_8));

                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_36 [i_10] [i_0] [i_0] [i_0] = var_14;
                    var_32 = (max(((max(var_8, ((max((arr_17 [i_0] [i_0] [i_0] [i_0]), var_15)))))), (max((arr_4 [i_0]), (min(var_16, (arr_35 [i_10 + 2] [i_10] [i_10] [i_10] [i_10] [i_10])))))));
                    var_33 = (arr_26 [i_0] [i_0] [i_0]);
                }
                var_34 = (min(((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), var_8));
            }
            for (int i_11 = 4; i_11 < 18;i_11 += 1)
            {
                arr_41 [i_0] [i_0] [i_0] = (max((arr_37 [i_11 - 2] [i_11]), (((arr_37 [i_11 - 3] [i_11]) ? (arr_37 [i_11 - 3] [i_11]) : var_16))));
                arr_42 [i_0] [i_0] [i_0] = (min(((max(var_15, (arr_38 [i_0] [i_6] [i_11])))), 1392127214));

                for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_35 = (max(((min((min((arr_34 [i_0] [i_0] [9] [i_0]), (arr_16 [i_6] [i_11 - 3]))), -var_16))), (min((arr_33 [i_11 + 3] [i_11 - 1] [i_11 + 1] [i_11 - 1]), var_9))));
                    arr_45 [i_6] [i_6] [i_6] [2] |= min(var_16, (min(var_14, (min(var_12, (arr_32 [i_0] [i_0] [i_0] [i_11] [i_0] [i_12]))))));
                    var_36 = (max(var_36, (arr_22 [i_11] [i_6])));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_37 = ((!(((-(arr_32 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 3]))))));
                    var_38 = (((max((min((arr_32 [i_11] [i_11 + 3] [i_11] [i_11] [i_11 - 4] [i_11]), var_11)), ((min(var_12, var_17))))) >> (65515 - 65501)));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    arr_52 [i_0] [i_6] [i_11 - 1] [i_0] [i_14] = (arr_1 [i_11 - 4] [i_0]);
                    var_39 = ((((((arr_12 [i_11 - 1] [12] [i_11] [i_11] [i_11 - 1]) || ((max(var_6, var_16)))))) % (max((max(var_12, 166)), var_15))));
                    arr_53 [i_0] [i_6] [i_0] [i_6] [i_6] [i_0] = 16;
                }
            }
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                var_40 = (-65513 >= var_7);
                var_41 = (max(var_41, (((-((255 % ((min(var_1, (arr_50 [i_0] [i_0] [i_6] [i_0])))))))))));
                var_42 *= (min(((((-(arr_22 [i_0] [i_0]))) >> (((arr_13 [i_15] [i_15] [i_15 - 1] [i_15] [i_15] [i_15 - 1]) - 14251972942653185177)))), (arr_27 [i_15 + 2] [i_15 + 1] [i_6])));
                arr_56 [i_0] [i_0] = ((((((arr_30 [i_6] [i_6] [i_6] [i_6]) ? var_1 : var_4)) + (((min(var_15, (arr_7 [i_0] [i_0] [i_0]))))))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_43 = (max(var_43, ((((var_0 + 0) - (arr_55 [i_17 + 3] [i_17 + 1] [i_17 + 2] [i_17 + 2]))))));
                            var_44 = (((arr_58 [i_17 + 4] [i_17 + 2] [i_17 + 4]) <= var_14));
                            arr_64 [i_16] [i_17 - 1] [i_0] = 787708684768140540;
                        }
                    }
                }
                arr_65 [i_0] [i_16] |= ((~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            var_45 = (min(var_45, ((max((((((min(var_14, (arr_6 [i_6] [i_6] [i_6] [i_6]))))) - (min((arr_27 [i_0] [i_0] [i_6]), (arr_48 [i_6] [i_6] [i_6]))))), ((max((~var_12), ((min(var_0, var_2)))))))))));
        }
    }
    var_46 = var_3;
    #pragma endscop
}
