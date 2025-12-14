/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (min(((((arr_0 [i_0]) / var_3))), (min((!9223372036854775793), (max(var_12, var_2))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_18 *= -9223372036854775793;
                var_19 = (arr_2 [i_0]);
                arr_10 [i_0] [i_1] [i_1] [i_2] = (arr_1 [i_0]);
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_17 [i_4] [i_4] [i_3] [i_0] [11] [i_0] = (arr_6 [i_4] [i_3]);
                    arr_18 [i_0] [10] [i_4] = (((arr_11 [i_4] [i_1] [i_0]) ? -14 : (arr_4 [i_4])));
                    arr_19 [i_0] [i_0] [i_3] [i_4] |= (arr_9 [i_0] [0] [i_3] [i_4]);
                    var_20 = (max(var_20, (arr_8 [i_4] [i_3] [i_0])));
                    var_21 = var_11;
                }
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_22 = (arr_9 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                    arr_24 [9] [i_1] [7] [i_5] = (max((arr_3 [i_5 + 1]), (max(-9223372036854775794, (arr_21 [i_1] [i_1] [i_5 - 1] [i_5 - 1])))));
                    arr_25 [4] [i_0] [4] [i_0] = (arr_4 [i_5 + 1]);
                    arr_26 [i_0] [i_0] [i_0] [i_0] = 9223372036854775793;
                }
                var_23 = (((((arr_15 [i_0] [i_1] [i_1] [i_3]) ^ 4294967295)) != (((max((arr_15 [i_0] [i_0] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_1] [i_3])))))));
                arr_27 [i_0] = var_12;
                var_24 = (((arr_13 [i_0] [i_0] [i_1] [i_3] [i_3]) > ((((~98) ? 4294967295 : ((((arr_15 [i_0] [i_1] [i_0] [i_3]) ^ (arr_4 [i_3])))))))));
            }
            arr_28 [i_0] = (((arr_21 [i_1] [i_1] [i_0] [9]) ? -2072770229207188076 : (((max(((((arr_5 [i_0] [i_1]) != 685677095575090586))), (arr_8 [i_0] [i_1] [i_1])))))));
        }
        arr_29 [6] = -var_0;

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                arr_35 [i_0] = (arr_21 [i_0] [i_0] [i_0] [8]);
                arr_36 [3] [i_6] [3] [i_0] = ((9223372036854775793 ? 14 : 7168));
                var_25 = (((((~((max(82, 24502)))))) == (arr_3 [i_6])));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_6] [12] [7] [0] = ((arr_37 [i_0] [i_6] [i_8] [i_9]) ? (arr_21 [1] [15] [16] [i_9]) : var_13);
                    var_26 = (max(var_26, (arr_2 [i_8])));
                    var_27 = ((var_1 < ((((arr_32 [7] [i_6]) || var_10)))));
                    var_28 = (~var_7);
                    var_29 = 1;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_30 = var_11;
                    var_31 = var_9;
                    arr_45 [i_0] [i_6] [i_10] [i_10] = (((arr_44 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0]) ? 11 : ((40 ? 14281823562788792744 : 1))));
                    var_32 = (max(var_32, ((34376 ? ((-(arr_37 [i_0] [i_0] [i_0] [i_0]))) : 98))));
                }
                arr_46 [i_0] [i_6] [i_6] [i_8] = -2147483628;
            }
            arr_47 [i_0] [7] [0] = ((((arr_3 [i_0]) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : (arr_30 [i_0]))) >= var_8);
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_33 = (min(var_33, ((((98 ? 1152917106560335872 : 0))))));
            arr_50 [i_0] = (((arr_0 [i_0]) + (min(-1152917106560335873, ((((arr_20 [i_0] [i_11] [i_11] [i_11]) ^ 2261058135)))))));
            arr_51 [i_0] [13] [i_0] = var_8;
        }
    }
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        var_34 = (((arr_53 [i_12 - 1] [i_12 - 1]) - ((~(arr_53 [17] [i_12 + 1])))));
        var_35 = (arr_53 [i_12 - 1] [i_12 - 1]);
    }
    var_36 |= ((var_8 != ((var_12 ? -3772934529691766872 : (min(2033909151, 120))))));
    var_37 = (((min(1152921504606846976, 60337))));
    var_38 = (var_0 & var_2);
    #pragma endscop
}
