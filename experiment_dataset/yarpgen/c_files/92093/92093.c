/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(1459803677, 1879048192));
    var_16 = (min(var_16, ((min(var_7, var_4)))));
    var_17 = ((((min(var_10, 7724871855519308487))) ? (max(var_13, (!var_6))) : var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((arr_0 [i_0] [i_0 - 2]) ? 7724871855519308487 : -7459566282920688704);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_18 &= (((arr_6 [i_0 - 1]) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 + 1])));
                    var_19 += (arr_7 [i_0] [i_1] [i_1] [i_3]);
                    var_20 = 9223372036854775807;
                    var_21 = -7724871855519308487;
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4;
                }
                var_22 += arr_3 [i_0 - 1];
                var_23 = (max(var_23, 53155771323898350));
                var_24 -= ((7724871855519308487 ? 3495611078 : 7459566282920688704));
            }

            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_4] [14] = (144115188075331584 | var_0);
                var_25 *= (((arr_12 [11] [i_0 - 2] [i_0 - 2] [i_1]) ? (arr_12 [i_0] [i_0 - 2] [20] [0]) : (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0])));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_26 ^= ((arr_6 [i_1]) << ((((var_9 ? (arr_12 [i_0] [i_0 + 1] [i_0] [i_0]) : var_0)) - 1479384124515419806)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_5] [i_5] [i_5] [i_7] = -3228175512631781480;
                            var_27 = arr_1 [i_0];
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_26 [i_8] [i_8] = (var_8 << (((arr_6 [i_0 + 2]) - 1205353817)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] = (-(((arr_20 [i_0 + 2] [i_8] [i_8] [i_9] [i_8]) ? (arr_6 [i_1]) : 2618212957)));
                            var_28 = (arr_0 [i_0] [i_0 + 1]);
                        }
                    }
                }
                var_29 = arr_10 [i_0 - 1] [i_0 - 1];
                var_30 = var_8;
            }
        }
        var_31 ^= 0;
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_32 = ((3404793531 ? 7459566282920688704 : (arr_33 [i_11 + 1])));
        var_33 = 4;
        var_34 -= ((arr_8 [i_11] [i_11 + 1] [i_11] [14] [i_11] [i_11]) * ((((!(((939524096 ? 144115188075331584 : -144115188075331584))))))));
        var_35 = (max(var_35, (min((((min(2900865763, 1739392080)))), (((arr_28 [i_11] [8] [i_11]) ? 558300003229698822 : (min(7724871855519308487, 7724871855519308490))))))));
    }

    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_36 ^= (arr_13 [i_12] [i_12] [i_12] [i_12]);
        var_37 = (((var_7 + (arr_27 [i_12] [i_12]))));
        var_38 = (((2669584626 / 4187615067) ? ((2803757822 ? (arr_17 [i_12] [i_12] [i_12]) : (~var_5))) : (((min((!3484095687), (2440457804 > var_11)))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                {
                    var_39 = (1048585312 ? 2618212957 : 1658604755);
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 7;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_40 |= (~(arr_17 [i_13] [i_14 + 1] [i_16 - 2]));
                                arr_50 [i_13] [i_13] [8] [8] [i_17 + 2] = ((arr_24 [i_14 + 1] [i_16 + 2]) ? 3824213544 : var_4);
                                var_41 = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_51 [i_13] [i_13] = -5468559058378360133;
    }
    #pragma endscop
}
