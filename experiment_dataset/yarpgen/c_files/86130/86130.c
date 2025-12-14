/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = 39;
                        var_19 = (arr_0 [i_2]);
                        var_20 = -5608864545148091206;
                    }
                }
            }
        }
        var_21 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [i_7] = (((arr_8 [i_4 + 1] [i_4 + 1] [i_7] [i_7] [i_4 + 1] [i_4 + 1]) <= (19450 / 9223372036854775807)));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_22 = (arr_24 [i_4] [i_4] [i_4] [i_4]);
                            var_23 = (max(var_23, var_12));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] |= ((~(((-28804 + 2147483647) >> (-22763 + 22769)))));
                            var_24 |= ((39 ? (arr_25 [i_11 - 1]) : 29397));
                        }
                    }
                }
            }
        }
        var_25 |= (arr_11 [i_4]);
        var_26 = (max(var_26, (((-var_12 ? ((((arr_17 [i_4] [i_4] [i_4] [i_4]) * -19455))) : (var_11 / 3201669872))))));
        var_27 = (min(var_27, -79));
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_44 [i_12] [i_12] = (arr_17 [i_12] [i_12 - 1] [i_12] [i_12]);
                        var_28 = (max(var_28, ((min(var_6, 1912482979)))));
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        var_29 -= (var_14 + var_13);
                        arr_47 [i_12] [i_12] [i_12] [i_12] = (((arr_14 [i_12] [i_12] [i_12]) != (((-9223372036854775790 + 9223372036854775807) >> (-513351480 + 513351535)))));
                        var_30 |= (((min(-2311, 513351461)) & ((((arr_33 [i_12] [i_12 - 1] [i_16] [i_12 - 1] [i_12 - 1]) != (max((arr_14 [i_12] [i_12] [i_12]), (arr_24 [i_16] [i_16] [i_16] [i_16]))))))));
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        arr_52 [i_17] &= 2147483647;
                        arr_53 [i_12] [i_12] [i_12] = ((!(arr_36 [i_12] [i_12])));
                        arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] = var_5;
                        var_31 = ((!((min((arr_30 [i_13] [i_13] [i_13]), (8064 | var_9))))));
                        var_32 = var_12;
                    }
                    arr_55 [i_12] [i_12] [i_12] = 1;
                }
            }
        }
    }
    var_33 = var_8;
    #pragma endscop
}
