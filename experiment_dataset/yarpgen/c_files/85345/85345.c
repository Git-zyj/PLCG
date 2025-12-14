/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [13] [i_0] = 160;
                arr_7 [i_0] [i_0] [i_0] = 1330500549103016698;
                arr_8 [i_0] = (~var_0);
                arr_9 [i_0] = ((min((((var_0 ? (arr_4 [i_0] [i_0] [i_0 + 3]) : (arr_2 [i_1])))), ((var_5 ? 31480 : var_2)))));
                var_10 *= max((max((1 - 17116243524606534911), (max(var_4, 18446744073709551603)))), 1);
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = (max((((arr_11 [i_2]) ? ((max(var_7, -6))) : var_6)), (min(17116243524606534887, var_9))));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_11 += var_3;
                    var_12 = (max((((var_9 == (arr_15 [i_4] [i_3 + 1] [i_4] [i_5 + 1])))), ((var_4 ? ((var_8 ? 126 : 4294967281)) : (((max(200, var_8))))))));
                    arr_20 [i_2] [i_4] = (((min(var_4, 1))) ? (65531 ^ var_9) : (((-(var_6 && var_5)))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_23 [i_4] [i_3 + 1] [i_4] [i_6] = (((((0 ? (arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? (40 & var_4) : var_6));
                    arr_24 [i_4] [i_4] [i_4] [i_6] = var_6;
                    var_13 = ((min(var_2, var_2)));
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_30 [i_4] [i_4] [i_4] = (--1820048718615745728);
                            arr_31 [i_2] [1] [i_4] [i_4] [i_7] [1] [6] = ((((min(var_6, 8504626757408242305)) / 532676608)));
                        }
                    }
                }
                var_14 = (min(var_14, (((((((var_9 ? -61 : var_1)))) ? (1077942006 - var_8) : (max((arr_27 [i_3] [i_3 + 1]), -3846013619185290510)))))));
                arr_32 [i_2] [i_4] [i_3] [4] = (max((max(var_2, (arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1]))), -156));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_15 = (min(var_15, var_2));
                var_16 = (((41 != var_4) ? var_4 : ((var_1 ? var_9 : var_0))));
                var_17 = var_7;
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_39 [i_2] [i_10] [1] = (~var_1);

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_18 *= (((((45 < ((0 & (arr_28 [4] [i_3] [i_3] [i_11] [i_11] [i_2] [i_2])))))) <= (!var_4)));
                            arr_42 [i_10] = ((-38 ? ((((arr_16 [i_3 + 1] [i_3] [1] [1]) <= 0))) : ((-(arr_16 [i_3 + 1] [i_3 + 1] [i_11 - 1] [i_11 - 2])))));
                        }
                        arr_43 [18] [i_3] [i_10] = -6157565842427962145;
                    }
                }
            }
            var_19 -= var_9;
            arr_44 [i_2] = -1;
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 16;i_15 += 1)
            {
                {
                    arr_54 [2] [2] = var_4;

                    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                    {
                        arr_57 [i_16] [i_16] [i_15] [7] = (arr_28 [i_13] [5] [i_13] [i_13] [i_16] [15] [12]);
                        var_20 = (min(var_20, (arr_41 [i_13])));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                    {
                        var_21 -= (((0 ? 4977979925326070329 : 96)) << (122 - 122));
                        var_22 = (!3274220471);
                    }
                }
            }
        }
        arr_61 [i_13] = (min((1 | var_1), (~-1326218930)));
    }
    for (int i_18 = 2; i_18 < 19;i_18 += 1)
    {
        arr_64 [i_18] = (-2147483647 - 1);
        arr_65 [i_18] = (min((max(var_2, 2509570690)), 99));

        /* vectorizable */
        for (int i_19 = 1; i_19 < 19;i_19 += 1)
        {
            arr_68 [i_18] [i_19] [i_18] = 9103243490634222665;
            arr_69 [i_18] [i_19] [2] = var_9;
        }
        arr_70 [i_18] = var_4;
    }
    #pragma endscop
}
