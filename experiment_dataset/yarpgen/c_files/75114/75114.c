/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0 - 1] = (arr_2 [i_0 - 1]);
            arr_6 [i_1] = arr_2 [i_0];
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_18 = (arr_3 [15] [i_0 - 1] [i_2 - 1]);
            arr_10 [16] [16] = (arr_8 [i_2 + 1] [i_2]);
            var_19 = (arr_2 [i_0 - 2]);
            var_20 = (arr_2 [i_0 - 2]);
            var_21 += (arr_1 [i_0]);
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = (arr_9 [i_0 - 1] [i_3 - 3]);
            var_22 = (arr_8 [i_0 - 2] [i_0]);
            var_23 = (arr_3 [i_0] [i_0] [i_3 - 3]);
            var_24 = arr_8 [i_0 - 2] [13];
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_25 = (arr_1 [i_0 + 1]);
            var_26 = (arr_4 [i_0 + 1] [i_4]);
            arr_16 [20] [i_4] [i_4] = (arr_8 [i_0 - 1] [i_0 - 1]);
        }
        var_27 &= (arr_1 [i_0 - 1]);
        var_28 += (arr_14 [i_0 - 1]);
        var_29 = (arr_7 [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_21 [i_5 - 2] = arr_9 [i_5 + 2] [i_6 + 1];
            var_30 = (arr_19 [i_5 - 1]);
            var_31 ^= (arr_1 [i_5 + 2]);
            arr_22 [i_5] [i_5] [i_6] = arr_20 [i_6 - 1] [9];
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_32 = (arr_14 [i_5 - 1]);
            var_33 = (arr_24 [i_7 + 1] [i_7 + 1] [i_7 - 1]);
            var_34 -= (arr_18 [i_7]);
            var_35 = (arr_24 [i_7] [i_7] [i_7 + 1]);
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_36 = (arr_25 [i_5 - 1]);
            var_37 = (arr_1 [i_5 + 1]);
        }
        var_38 = (arr_1 [i_5]);
        var_39 -= (arr_25 [i_5]);
        var_40 = (arr_24 [i_5 + 2] [i_5 - 1] [i_5 - 1]);
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_41 += (min((min(3221225472, -6720410195947175880)), (max((arr_27 [16]), (arr_27 [4])))));
        arr_29 [i_9] = (min((max((arr_27 [i_9]), (arr_27 [i_9]))), (min((arr_27 [i_9]), (arr_27 [i_9])))));

        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_42 = (min(var_42, ((min((min((arr_31 [i_9 + 2] [i_10 - 1] [i_9 + 2]), (arr_31 [i_9] [i_10 - 1] [i_9 + 3]))), (arr_31 [i_10 + 1] [i_9 + 1] [i_9 + 1]))))));
            var_43 = (min((arr_31 [i_9] [i_10 - 1] [i_10 + 1]), (max((max((arr_27 [i_9]), (arr_31 [i_9] [i_9] [i_10]))), ((min((arr_31 [i_9] [i_9] [i_9]), (arr_28 [i_9]))))))));
            arr_32 [16] &= (arr_31 [i_9] [i_10] [i_10]);
            var_44 += (arr_30 [18]);
        }
        var_45 = (min((max((min((arr_31 [i_9] [i_9] [i_9 + 1]), (arr_27 [i_9]))), (arr_30 [i_9]))), ((max(((min((arr_30 [i_9]), (arr_31 [i_9] [i_9] [i_9])))), (max(-256, -89)))))));
        arr_33 [i_9] = max((arr_31 [i_9 + 1] [15] [i_9 + 2]), (max((arr_31 [i_9 + 3] [i_9 + 3] [i_9 - 1]), (arr_28 [i_9]))));
    }
    for (int i_11 = 3; i_11 < 18;i_11 += 1)
    {
        var_46 = min(1, 255);
        var_47 = (min(((max((arr_15 [i_11] [i_11 - 2]), (arr_15 [i_11 + 1] [i_11])))), (min(60, (arr_15 [i_11 + 2] [i_11])))));
        arr_37 [2] &= (arr_36 [16] [16]);
        arr_38 [i_11] = (arr_9 [i_11 - 3] [i_11 + 1]);
        arr_39 [i_11] = (max(((max((arr_1 [i_11 - 1]), (arr_11 [i_11] [i_11 + 1])))), (min((arr_27 [i_11]), (arr_11 [i_11] [i_11 - 1])))));
    }
    #pragma endscop
}
