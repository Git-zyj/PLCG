/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((min(((1 >> ((244 >> (((arr_1 [1] [17]) - 1314276260)))))), (((153 == (((arr_0 [i_0] [14]) ? var_16 : var_2))))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((85 || (arr_2 [i_0])));
            arr_7 [i_0] [i_1] [14] = (min((arr_0 [i_0] [i_0]), ((((var_9 ? (arr_4 [i_1] [i_0]) : 153)) / ((max((arr_2 [i_0]), 65535)))))));
            var_21 ^= (max((((((var_8 ? var_15 : (arr_1 [i_0] [i_1])))) ? (var_5 >= var_17) : 11)), 153));
        }
        arr_8 [i_0] [i_0] = ((var_7 / (((arr_5 [i_0]) ? ((max(var_14, (arr_4 [i_0] [i_0])))) : (102 - 37)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (14340697162964288546 / 153)));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_23 *= ((!(arr_5 [i_2])));
                var_24 += ((!(arr_11 [i_2] [i_2])));
                arr_19 [i_4] = 102;

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_25 = (((47 + -3) + ((80 ? 255 : 236))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_26 = (min(var_26, (((((((arr_16 [i_5]) / (arr_21 [i_2] [i_3] [i_2] [i_3] [i_6])))) ? (arr_9 [i_2]) : (arr_22 [4] [i_5] [7] [i_2] [i_2]))))));
                        var_27 = ((!(((var_10 ? 117 : 0)))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_29 [i_4] [i_4] [1] = (arr_28 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] [i_3]);
                        var_28 = ((((~(arr_25 [i_2] [i_3] [i_2] [i_2] [i_3]))) / var_15));
                    }
                    arr_30 [i_3] [i_3] [i_4] [i_5] [i_3] = (((arr_13 [13] [13] [13]) ? var_1 : (arr_0 [i_2] [2])));
                }
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_29 = (arr_23 [i_8 - 3] [14] [14] [i_8 - 3] [i_8 - 1] [i_8 + 1] [i_8 - 2]);
                        var_30 = (((arr_2 [i_9]) ? (((arr_25 [i_2] [i_2] [i_4] [i_2] [i_9]) ? -1322746528 : (arr_14 [i_9] [i_9]))) : 13061));
                        arr_38 [i_2] [i_2] [i_3] [12] [i_2] [i_2] [i_9] |= 103;
                        arr_39 [i_4] [5] [i_4] [i_8] [5] = ((-25 ? 7512387071247969351 : (arr_22 [i_2] [i_3] [2] [i_8 + 1] [i_2])));
                        arr_40 [i_2] [i_4] [i_2] [1] [5] = (((arr_35 [i_8 + 1] [i_8] [11] [4] [i_8 + 1] [i_8 + 1] [i_4]) == (arr_37 [i_8 - 1] [i_4] [i_4] [i_4] [i_4])));
                    }
                    arr_41 [i_2] [9] [i_4] [i_2] [14] = (arr_23 [i_2] [i_8 - 1] [9] [i_2] [i_8] [i_8 - 1] [7]);
                }
            }
            var_31 = (min(var_31, (((-(arr_33 [i_2] [i_2] [i_2] [i_2]))))));

            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                arr_44 [i_2] [i_2] [i_10] [i_10] |= (((((-(arr_23 [i_10] [9] [i_3] [i_3] [i_2] [9] [i_2])))) + (arr_43 [4] [i_10 - 1] [4])));
                var_32 = -2879958129813587598;
            }
        }
        arr_45 [i_2] = (((arr_20 [i_2] [i_2] [i_2] [i_2]) ? 21299 : (arr_9 [i_2])));
    }
    var_33 = var_8;
    var_34 = ((((var_1 ? 127 : -97)) == (var_1 || var_10)));
    var_35 = (((((((min(255, 255))) && 52475))) == (((!((min(1, -97))))))));
    #pragma endscop
}
