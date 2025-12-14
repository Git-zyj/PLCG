/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!(((~((max(1, 1)))))));
    var_11 = (!var_8);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 = (arr_2 [i_0 + 1] [i_0 - 1]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0 - 3] [i_0 - 2]);
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 = ((~(max(1, 2646276155243122571))));
        var_14 = (max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [3])));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_15 = var_2;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_19 [1] [11] [i_3 + 2] [9] [i_2] = (max((max(var_3, 1)), (arr_16 [i_2])));
                        var_16 = (arr_9 [i_5]);
                    }
                }
            }
        }
        arr_20 [i_2] = ((max((arr_8 [i_2 + 2] [i_2]), (arr_8 [i_2] [i_2]))));
        var_17 = (arr_0 [i_2 - 1] [i_2]);
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = 1;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_31 [i_6] [i_6] [5] [i_6 + 2] = (max((max((max(55447, 1)), var_0)), 4165073707));
                        arr_32 [i_6] [i_7] [i_6] [i_9] = ((((arr_5 [i_9 + 3]) == var_0)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                {
                    arr_39 [i_6] [i_6] [i_11] [7] = 1;
                    var_18 = ((((((31816 + var_3) ? (min(1, var_4)) : -4291066624064844023))) ? (arr_10 [i_6] [i_11 - 1]) : 1));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_44 [i_6] = (0 ? (((((var_1 ? var_1 : (arr_34 [i_6])))) ? (((arr_36 [i_6]) % var_3)) : (arr_12 [i_6] [i_6]))) : ((min(-3, 17954070042361275340))));
                        var_19 = ((-((((max(55460, 1))) + ((min(var_0, 55427)))))));
                        arr_45 [i_6] = var_4;
                        arr_46 [i_6] = (max((arr_36 [i_6]), ((((arr_35 [6] [i_11] [i_10]) ? var_1 : var_9)))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_49 [1] [i_10 + 3] [i_6] [i_10 - 1] [i_10 - 1] = (min(2822501045, 3286));
                        arr_50 [i_6 + 3] [i_6 + 3] [i_6] [i_6] [i_6] [8] = (min((((((1 >> (var_8 - 850787005304966138))) >> (var_9 - 3134016611)))), ((min(31, (arr_41 [i_6] [i_10] [i_6] [i_13]))))));
                        arr_51 [i_11] [i_11] [i_6] [i_11] = ((((((min(11250098019466887082, 1922852686))))) + (min((min(0, var_5)), var_7))));

                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            var_20 = ((((((max(14979569319416080532, 1)) << (-2156218303 - 2138748990)))) ? (arr_53 [i_6] [i_14] [1] [i_14 + 1] [i_11] [i_11] [i_6]) : ((1472466251 ? -8100179107978653309 : 10062))));
                            arr_54 [i_14 + 1] [i_14 + 1] [7] [i_6] [i_14] = ((-(max(2822501047, (arr_38 [i_10 - 1] [i_10 + 4] [i_10 + 4] [i_10 + 2])))));
                        }
                    }
                    arr_55 [i_6] = ((1 <= (max((min(var_0, var_5)), (arr_35 [i_6] [i_6] [i_11 + 2])))));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_21 += (min((arr_28 [8] [i_15] [8]), (~var_9)));
        arr_60 [i_15] [i_15] = var_2;
        var_22 = (max(var_22, (((1 ? 1472466250 : 1)))));
    }
    #pragma endscop
}
