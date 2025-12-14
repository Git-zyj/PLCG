/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_14, ((((!-var_1) > (((!(arr_2 [i_0])))))))));
        arr_4 [i_0] = var_2;
        arr_5 [i_0] [i_0] = ((~((~(arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        var_15 = var_9;
                        var_16 = var_9;
                        var_17 = ((~(!var_5)));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_21 [i_1] [i_1] [4] = (arr_17 [i_1] [0] [7] [i_5] [i_5]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_18 = (((!9093132604286569264) ? 7561 : var_0));
                            var_19 = 6345160754841590590;
                        }
                    }
                }
            }
            var_20 = ((var_12 ? var_11 : var_6));
            var_21 = ((((var_12 & 1642843133503212240) <= (((((arr_22 [i_1] [i_5] [i_5]) < (arr_30 [i_1] [i_1] [i_1] [i_5] [i_5]))))))));
        }
        var_22 = (((((!(arr_1 [i_1])))) > 39592));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            var_23 = (!(arr_18 [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11]));
                            var_24 = ((4282538346 && ((max(((((arr_22 [i_1] [i_9 - 2] [i_12]) <= -6345160754841590595))), var_9)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            arr_44 [i_11] [i_11] = var_11;
                            arr_45 [i_11] [i_9 - 3] [i_9] = (arr_33 [i_1]);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            var_25 = (~var_6);
                            var_26 -= (arr_48 [i_1] [i_1] [i_14] [i_14] [i_14]);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            arr_51 [i_1] [i_11] [i_9] [i_11] [i_10] [i_11 - 2] [i_15] = ((~(arr_36 [i_1] [i_9 - 1] [i_10])));
                            var_27 += (arr_31 [i_1]);
                            var_28 = var_2;
                            var_29 |= ((-17069 ? var_7 : (arr_42 [i_9 - 1] [i_11 - 1] [i_15] [i_9 - 1] [i_15])));
                        }

                        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            var_30 = var_10;
                            arr_54 [i_1] [i_9 - 1] [i_9 - 1] |= var_11;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                        {
                            var_31 = ((-(((arr_46 [i_17] [i_11] [i_10] [i_1]) << (12559093765178185450 - 12559093765178185430)))));
                            var_32 = (!var_2);
                        }
                        var_33 = -6345160754841590595;
                        arr_57 [i_1] [i_9] [i_10] [i_9] [i_11] = (!32);
                    }
                }
            }
        }
        arr_58 [i_1] [i_1] = ((!(-32767 - 1)));
    }
    var_34 = ((-1 ? ((((!var_1) & ((var_9 ? var_5 : var_9))))) : (min(var_3, var_8))));
    var_35 -= (max((!9638), -6345160754841590595));
    var_36 = 842851320;
    #pragma endscop
}
