/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((var_4 ? var_10 : var_2));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_19 *= (!var_0);
            arr_6 [i_0] [i_1] [i_0] = (arr_4 [7] [7] [10]);
            arr_7 [i_0] = ((!(!var_5)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = var_12;
            arr_11 [i_0] = (arr_1 [i_2]);
            var_20 ^= (((arr_9 [i_0]) ? (arr_1 [i_0]) : var_9));
            var_21 = (!1660709962);
        }
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_16 [i_3] = (((var_7 ? var_1 : var_13)));
        arr_17 [i_3] [i_3] = (~-3730117759062229968);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_4] = (arr_13 [i_3 - 1] [i_3]);
                        arr_27 [i_4] [i_3] = var_7;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (arr_20 [i_7])));
                        var_23 &= (arr_29 [i_3] [i_3 + 1] [i_3] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_35 [i_3] [i_3] [i_5] [i_4] = var_7;
                        var_24 = (((arr_19 [i_4] [i_4]) ? ((var_10 ? (arr_14 [i_3] [i_3]) : (arr_19 [i_4] [i_4]))) : var_3));
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_25 = (min(var_25, var_0));
                        arr_39 [i_9] [i_4] [1] [i_3 + 1] [i_4] [i_3 + 1] = (arr_30 [i_3 - 1] [i_3 - 1] [9] [i_3] [i_3] [i_3 - 1]);
                        var_26 = (!var_4);
                    }
                    var_27 = ((((var_3 ? (((arr_36 [0] [i_5]) ? var_1 : var_14)) : var_9))) ? var_3 : var_1);
                    arr_40 [i_4] [i_5] = var_4;

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        arr_45 [i_4] [i_3] [12] [i_3] [12] [12] = ((var_9 ? (~var_7) : var_12));
                        var_28 = (arr_33 [i_4] [i_4] [i_4] [i_4]);
                    }
                    arr_46 [i_3] [i_3] [i_4] = (~var_13);
                }
            }
        }
        var_29 = (max(var_29, ((((arr_30 [i_3] [i_3] [i_3] [i_3] [3] [i_3]) ? ((~(((!(arr_25 [4] [i_3] [4] [4])))))) : (((!(arr_14 [i_3 + 1] [i_3 - 1])))))))));
    }
    var_30 = (var_13 % var_7);
    var_31 = (max(var_31, (((((~524224) ? ((-27906 ? var_11 : var_0)) : ((var_15 ? -27906 : var_11))))))));
    #pragma endscop
}
