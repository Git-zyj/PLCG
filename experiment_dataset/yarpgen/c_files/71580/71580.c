/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (arr_1 [9]);
        var_12 = (i_0 % 2 == zero) ? ((((((arr_0 [i_0]) + 9223372036854775807)) << ((((~(arr_0 [i_0]))) - 3577090373181581414))))) : ((((((arr_0 [i_0]) + 9223372036854775807)) << ((((((((~(arr_0 [i_0]))) - 3577090373181581414)) + 979654980155739349)) - 56)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 &= var_8;
            var_14 = (arr_3 [i_0 + 1] [i_0] [i_0 - 1]);
            var_15 = ((((((var_3 + (arr_3 [i_0] [i_0] [i_1])))) + ((1604317009 - (arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_16 = (arr_1 [i_0]);
                var_17 = var_9;
                var_18 = ((108 % (((arr_10 [i_0 + 1]) | (arr_0 [i_0])))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_19 = ((((min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))) ? (((arr_6 [i_0 + 1]) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 + 1]))) : (arr_6 [i_0 + 1])));
                var_20 = var_4;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 = ((var_0 / (arr_8 [i_0 + 1] [i_0 + 1])));
                            var_22 = ((((arr_10 [i_0 + 1]) <= 61)) ? ((min((~206), var_2))) : (var_4 / 11643));
                            var_23 = ((~((var_1 / (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                }
                var_24 = (((arr_8 [i_0 - 1] [i_0 + 1]) ? ((min((arr_8 [i_0 - 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0 + 1])))) : (((arr_8 [i_0 - 1] [i_0 + 1]) ? var_7 : (arr_8 [i_0 - 1] [i_0 + 1])))));
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((((16745790117807711959 ? ((min(1, var_7))) : 1)) + ((min(var_4, var_9))))))));
                            var_26 = var_10;
                        }
                    }
                }
                var_27 = (max(((((((arr_8 [i_0 + 1] [i_0 + 1]) ? var_6 : -1))) ? (arr_1 [i_0 - 1]) : ((var_5 ? (arr_1 [9]) : (arr_5 [i_2] [4]))))), ((((arr_0 [i_0]) / (arr_24 [i_0 - 1] [i_8 + 1]))))));
            }
            var_28 = (min(var_28, ((max(((((arr_15 [i_0] [8]) && (arr_15 [i_0 - 1] [2])))), (min((arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_26 [i_0] [1] [i_2]))))))));
            var_29 = ((((arr_7 [i_0] [i_0 - 1]) ^ (arr_24 [3] [i_0]))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_30 ^= (((~var_0) <= var_1));
            var_31 = ((arr_33 [i_0 - 1] [i_0 - 1]) ? (arr_33 [i_0 + 1] [i_0 - 1]) : (arr_20 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_11]));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_32 = (arr_14 [i_0]);
                    var_33 = 161;
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_34 = (var_8 * var_2);
                    var_35 = (arr_12 [i_0] [i_11] [i_12] [i_11]);
                }
                var_36 = (min(var_36, var_6));
            }
        }
    }
    var_37 += ((var_8 * ((((min(-26034, var_1)) != ((min(var_2, var_3))))))));
    var_38 += -var_6;
    #pragma endscop
}
