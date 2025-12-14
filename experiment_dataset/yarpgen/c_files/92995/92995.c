/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!-22155);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, ((min((!35), (arr_1 [i_0]))))));
        var_15 -= ((min(-1, (arr_2 [i_0]))));
        var_16 -= ((max((arr_2 [i_0]), var_8)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((var_3 - (min((arr_7 [i_0] [i_1] [i_2] [i_3]), (arr_10 [1] [22] [16] [i_0]))))))));
                        arr_11 [i_0] [i_2] [i_2] [i_2] = (min(5, 0));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_18 = var_4;
            arr_16 [i_4] = 103114405;
            var_19 = var_9;
            var_20 -= (arr_2 [i_0]);
            var_21 -= (var_10 & var_10);
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_22 = (max(var_22, (((!(arr_15 [i_5 + 1] [i_5] [i_5]))))));
        var_23 = (max(var_23, ((((arr_2 [i_5]) ? var_4 : -410289287)))));

        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_24 = 202;
            arr_23 [i_5 + 1] [i_6] = ((arr_21 [i_5 + 2]) ? (arr_4 [i_5 + 1] [i_5 + 1] [i_6 - 2]) : (arr_4 [i_5 - 2] [i_5 - 2] [i_6 + 1]));
            var_25 *= var_8;
        }
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        arr_27 [i_7] = var_6;
        var_26 = ((var_3 ? var_2 : (arr_8 [i_7 - 1] [i_7 - 3] [i_7 - 1] [i_7 - 3])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_27 = (min(var_27, (~581656632)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] &= var_4;

                        for (int i_12 = 4; i_12 < 16;i_12 += 1)
                        {
                            var_28 = (max(var_28, var_3));
                            var_29 = var_9;
                        }
                        arr_42 [13] [i_9] [i_9] [i_9] [13] = var_0;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = (arr_8 [i_8] [i_8] [7] [i_8]);
                        arr_46 [i_8] = var_5;
                        arr_47 [i_8] [i_8] = var_2;
                        arr_48 [i_8] [i_9] [i_10] [i_13] = ((!(arr_13 [i_8] [i_8] [i_10])));
                        arr_49 [i_13] = (18446744073709551613 >= (arr_40 [i_8] [i_9] [i_10] [i_13] [i_13]));
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, ((var_10 == (arr_17 [i_8] [i_8])))));
                        var_32 = (min(var_32, (((!(arr_22 [i_8] [6] [i_8]))))));
                        var_33 = (((4095 || 410289287) && (arr_35 [i_9] [i_14])));
                        var_34 = var_3;
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_35 = (max(var_35, (arr_24 [i_16])));
                            arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] = (!var_1);
                            var_36 -= var_4;
                            var_37 = (arr_35 [i_8] [i_10]);
                        }
                        var_38 *= (arr_28 [1] [i_15]);
                        arr_58 [i_8] [i_9] [i_10] = 18446744073709551614;
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_62 [15] [15] [i_10] [i_17] [i_17] = -410289287;
                        arr_63 [i_17] [i_10] [i_9] [1] = (~var_10);
                    }
                }
            }
        }
    }
    var_39 = (max(var_0, (max(4116, (105553116266496 && -655089462)))));
    var_40 = (min((max(var_0, ((var_7 ? var_1 : var_4)))), var_5));
    var_41 = (max(var_41, (((!(((((max(-1536226378, var_1))) ^ (var_10 * -1723800437)))))))));
    #pragma endscop
}
