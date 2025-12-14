/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 || ((max((69 && 8859), (max(var_11, var_6)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((((min(16, 65495)))) | ((-(max(var_2, var_9))))));
            var_15 = (--32078);
            arr_6 [i_0] [i_1] [i_0] = ((!(!var_4)));
            var_16 *= ((-((var_1 % (var_6 & var_0)))));
            arr_7 [i_0] = (!(!var_5));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_0] [i_4] [i_3] [i_2] [i_0] = (var_13 || var_11);
                    var_17 ^= -var_13;
                    var_18 = (max(var_18, var_7));
                }
                var_19 = (min(var_19, ((((!var_3) & var_8)))));
                var_20 = (((var_3 + 2147483647) >> (var_13 - 30973)));
                var_21 = (min(var_21, (!var_12)));
            }
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_22 ^= -var_2;
                    var_23 = ((-(~var_6)));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_26 [i_0] [i_2] [i_0] [i_6] [i_7] = (var_9 && var_9);
                        var_24 += ((-(!var_13)));
                        var_25 |= (((~var_13) > var_11));
                        arr_27 [i_0] [i_7] = (5277409684074844746 - 1);
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_26 ^= (!4294967295);
                        var_27 = var_11;
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] &= (!-var_3);
                        arr_33 [i_0] = ((!(!var_2)));
                        var_28 ^= (~var_6);
                        var_29 = (~var_13);
                    }
                }
                arr_34 [i_0] [i_2] [2] = (var_3 % var_12);
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] [i_11] = (!var_2);
                            arr_45 [i_2] [i_10] [i_11] [8] [i_10] [i_10] [10] &= ((!(var_7 * var_4)));
                            arr_46 [i_0] [i_0] = (var_11 ? var_6 : var_7);
                        }
                    }
                }
            }
            var_30 = (~var_8);
            var_31 = (max(var_31, (!var_0)));
        }
        var_32 = var_11;
        arr_47 [i_0] [i_0] = ((((min(251, 65506))) > (!var_6)));
    }
    var_33 = (min(var_33, (max(1, 60933))));
    var_34 ^= ((((!(65512 && 38))) ? (((!(!var_8)))) : var_5));
    #pragma endscop
}
