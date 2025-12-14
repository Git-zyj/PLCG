/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(7, ((var_11 ? -1 : var_10))));
    var_13 = ((var_3 + 2147483647) >> ((((var_4 ? 1177424552 : (var_10 == var_8))) - 1177424547)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] |= 9267193504817355784;
                    var_14 *= (!4294967295);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (~-30150);
                        var_15 = var_4;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_4] [i_0] [i_2] = ((!(arr_2 [i_0] [i_0] [i_0])));
                        var_16 = var_2;
                    }
                }
            }
        }
        arr_16 [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_22 [i_5] [i_5] [9] = (--1);
            var_17 = ((-(var_6 & var_7)));
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_18 = var_10;
                            var_19 = (118 / 4294967295);
                            var_20 = var_10;
                        }
                    }
                }
            }
            arr_31 [i_5] [i_5] = (-1437684505 && 121);
        }
        var_21 -= -var_9;

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            arr_34 [i_5] = var_2;
            arr_35 [i_10] = var_8;
            arr_36 [i_5] [i_5] [i_5] = (!-2);
        }
        for (int i_11 = 2; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_22 = (!24026);
            var_23 &= (((((~(arr_1 [i_11])))) ? (arr_3 [i_11 + 2]) : (!var_11)));
        }
        for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
        {
            arr_41 [i_5] [i_12 - 1] |= (((arr_4 [i_5] [i_5] [i_5] [i_12]) + (var_0 | var_10)));
            arr_42 [i_5] [i_5] [21] = var_10;
        }
        arr_43 [i_5] [i_5] = 56312;
        arr_44 [i_5] = var_1;
    }
    #pragma endscop
}
