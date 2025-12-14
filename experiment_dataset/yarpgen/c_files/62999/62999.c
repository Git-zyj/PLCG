/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 = (arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (min(((((-(arr_4 [i_0] [i_0] [i_0]))) % (var_0 != var_9))), ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((-50 ? 24497 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : 210)))));
                                var_12 = ((+(((arr_1 [i_0 - 2]) ? (((-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_2))));
                                var_13 = 32765;
                            }
                        }
                    }
                    var_14 = (~-1);
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_15 = (arr_16 [i_5]);
        var_16 = var_9;
        var_17 = (!58);
        var_18 = (arr_15 [i_5] [i_5 - 1]);
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_19 = (min(((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) || -117))), -117));
                        var_20 = ((((!((min(7, 1839674224)))))) / ((min(-7, 115))));
                    }
                }
            }
        }
        var_21 = (((((-5830375425891671587 ? 20 : 0))) ? (((max(5, (min(-7, (arr_18 [i_6]))))))) : var_6));
        var_22 |= var_5;
        var_23 = arr_5 [i_6];
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, (((-((197 ? 1 : var_4)))))));

                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_25 = ((63 ? 104 : -10463));
                        var_26 = (min((max(((max(-7, (arr_21 [i_6] [i_6] [i_6])))), var_8)), (!17936)));
                        var_27 = (max(0, -15));
                        var_28 = var_4;
                    }
                    var_29 = var_1;
                    var_30 = var_5;
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_31 = -var_8;
        var_32 = (1 ? -117 : (min(((max(var_6, 9191))), (-7 | 1592687184066650541))));
        var_33 = (arr_31 [i_13] [i_13] [i_13] [6]);
        var_34 = (min(var_34, ((((min((arr_21 [i_13] [i_13] [i_13]), (-9191 + 15)))) ? ((var_1 ? (arr_33 [8]) : ((max(9191, 7))))) : ((((arr_3 [i_13] [i_13] [i_13]) < 0)))))));
    }
    var_35 += var_1;
    #pragma endscop
}
