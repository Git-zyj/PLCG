/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_4] [i_0] [i_4] = ((((min((min((arr_12 [i_1] [i_3] [i_4] [i_1] [19]), var_1)), -1))) ? (max((arr_6 [i_0] [i_1] [i_2] [i_3]), ((-16 ? 150609256 : 4294967284)))) : 4144358046));
                                var_10 = (min((max((arr_11 [i_1] [i_2] [i_3] [i_3]), ((var_2 >> (((arr_6 [i_0] [i_0] [i_2] [i_3]) - 2024798132)))))), ((~((150609229 << (2326224732 - 2326224702)))))));
                                var_11 = ((((-363248917 ? 65507 : 150609261)) > ((((arr_13 [i_0] [i_1] [i_1] [i_4 - 1] [20]) ? -14 : (arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [i_1]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_0] [i_5] [i_0] [i_5] = (((arr_14 [i_5] [6] [i_2] [16] [i_1] [1] [i_0]) ? (min((arr_0 [i_5]), (min((arr_8 [i_5] [i_5] [i_2]), var_3)))) : ((((min((arr_1 [i_1]), var_8))) ? ((255 ? (arr_5 [i_5]) : 1098656586)) : (!var_3)))));
                        var_12 = ((!((min((arr_16 [i_5]), (arr_16 [i_5]))))));
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        var_13 = ((!(!951491589)));
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = (min((arr_13 [i_0] [10] [i_2] [i_6] [i_2]), (arr_16 [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_27 [i_8] = ((44 >> (-951491590 + 951491610)));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -1404187701));
                                var_14 *= arr_7 [i_0] [i_0] [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((min((~var_6), var_6))) ? (min((min(var_6, var_0)), var_4)) : ((((!(!-109))))));
    var_16 = ((((((((1166156754 ? 647354021963972542 : var_2))) ? 150609248 : var_4))) ? (--27183) : ((-((3306783360 ? var_5 : var_2))))));
    var_17 = (32 ? 0 : 0);
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_18 = (max(var_18, (((-125 - (arr_32 [i_9 - 2] [i_9 - 2]))))));
                    arr_35 [i_9] [i_10] = 11133720042732720428;
                    var_19 = (((arr_30 [21]) | var_0));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                arr_40 [i_9] [i_10] [i_11] [i_12] [i_13] [i_11] = 232;
                                var_20 = 16483560685642059822;
                                var_21 = ((2147483639 ? 6149 : 1870977865));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
