/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 8563928504026263829;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (((var_13 && 13548335912279403736) ? ((4898408161430147879 ? var_11 : (arr_0 [i_0]))) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] = (max((min((((arr_7 [i_3]) ? (arr_3 [i_3] [i_1]) : 9882815569683287817)), (arr_12 [10]))), 1));
                        var_16 = ((max(9223372036854775807, 12771924718600325385)) < var_1);
                        var_17 -= ((~((var_7 / (arr_11 [i_0])))));
                    }
                }
            }
            var_18 += var_1;
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_19 = (arr_18 [i_0]);
                            var_20 = ((((arr_8 [i_4 - 2] [i_5 - 1] [i_6] [i_6]) * (arr_8 [i_4 + 1] [i_5 + 1] [i_5] [i_5]))));
                        }
                    }
                }
            }
            var_21 = (min(var_21, ((((5674819355109226239 - ((4898408161430147879 ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : 13548335912279403724))))))));
            arr_23 [i_1] = min(((5674819355109226228 ? ((2485619878894513470 - (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))) : -var_10)), ((min(var_12, 66))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_22 += (var_11 ? 213 : (~var_7));
            var_23 = 2887222329;
            var_24 ^= var_5;
            var_25 = var_9;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_31 [i_8] [i_0] = ((1829532391 ? (arr_29 [i_8] [i_8] [i_0]) : (arr_27 [i_0] [i_8])));
            arr_32 [i_0] [i_8] [i_8] = (((((arr_11 [i_8]) != -52)) ? (arr_25 [i_8]) : -11193));
            arr_33 [i_0] [i_8] [i_0] = var_3;
        }
        arr_34 [i_0] [i_0] = -10076;
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_26 += (((arr_35 [i_9] [i_9]) || ((((!6531) ? (min(4898408161430147877, 17360)) : (((((arr_35 [i_9] [i_9]) && var_7)))))))));
        var_27 = (max((((arr_36 [i_9] [i_9]) ? var_0 : (arr_36 [i_9] [i_9]))), ((var_6 ? (var_9 || var_7) : var_2))));
        var_28 = (arr_36 [i_9] [i_9]);
        var_29 += (max(1, var_2));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_30 = 16593538755134453710;
        var_31 = 3948479583;
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    var_32 = ((28600 || (~var_13)));
                    var_33 = 1173117627;
                }
            }
        }
        var_34 = (((max(var_5, var_8)) * (arr_5 [i_11] [i_11])));
    }
    #pragma endscop
}
