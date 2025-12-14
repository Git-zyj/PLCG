/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (((((255 << (-3876 + 3882)))) && -8));
                var_21 = max(13, 0);
                var_22 = var_11;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_23 += (1 < 2278924389507873546);
            var_24 = (min(var_24, (((~((1 >> (2120416914 - 2120416892))))))));
            var_25 = (min(var_25, (((((5433035021964741412 ? 1924848715965262780 : 1)) >> (((arr_7 [i_3] [i_3 - 1] [i_3 - 1]) - 9834252820648308833)))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 += ((11 ? 505460821 : 119));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_27 = (((arr_18 [i_2] [i_4] [i_5] [i_6] [i_6]) ? (arr_18 [i_2] [i_4] [i_5] [i_6] [i_6]) : (arr_18 [i_2] [i_4] [i_2] [i_6] [i_6])));
                        var_28 = (((arr_20 [i_2] [i_4] [i_4] [i_2] [i_6]) && (arr_20 [i_2] [i_2] [i_5] [i_5] [i_6])));
                        var_29 = (((arr_19 [i_2] [i_4] [i_5] [10]) > var_19));
                        var_30 = 2624144819;
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_31 -= var_0;

            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                var_32 = 8254517484448877723;
                arr_28 [i_2] [i_2] = -var_0;
                var_33 = (arr_26 [i_7 - 1] [i_7 - 3] [i_8 - 2] [i_8 + 1]);
            }
            var_34 = var_4;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_32 [i_2] = (((arr_7 [i_2] [i_9] [i_9]) + 1));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_35 += ((((24 ? (arr_22 [i_2] [i_2] [i_11]) : var_2)) + var_2));
                        var_36 = var_19;
                    }
                }
            }
            var_37 = 179;
            var_38 = (918075881 ? -251770909 : -505460794);
            var_39 = (min(var_39, 573686085));
        }
        var_40 = var_0;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_41 = (arr_20 [i_2] [i_12] [i_13] [i_14] [i_13]);
                            var_42 = var_0;
                            arr_49 [9] [i_14] [i_2] = (arr_11 [i_14]);
                            arr_50 [i_2] [i_2] [i_13] [i_14] [i_15] = (arr_21 [i_14]);
                        }
                        arr_51 [i_2] [i_2] [i_12] [i_13] [i_14] [i_2] = ((77 ? var_11 : ((var_11 % (arr_29 [i_2] [i_13] [i_14])))));
                        var_43 = (arr_12 [i_2]);
                        arr_52 [i_12] [i_2] [i_14] = ((-7340 | (arr_36 [i_2] [i_2] [i_13] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 9;i_16 += 1)
    {
        var_44 ^= ((254 ? 1 : (min((max(17295147751823444402, var_15)), -60))));
        arr_56 [i_16] = (min(((max((-127 - 1), 186))), (((!776233132) ? ((min((arr_53 [i_16] [i_16]), -60))) : (arr_8 [i_16 + 2] [i_16] [i_16 + 3])))));
    }
    #pragma endscop
}
