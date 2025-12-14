/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = (arr_1 [i_0]);
        arr_2 [i_0] = 185;
        var_12 = (max(var_12, 182));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_13 = ((201 ? 4294967295 : 4294967295));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_14 = 2;
                        arr_11 [i_2] [11] [i_2] [2] [i_4] [i_4] = (4294967293 + var_2);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_14 [11] [i_2] = (!var_9);
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = var_5;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_15 += ((((var_2 << (var_9 - 4044411985))) >= var_2));
                        arr_18 [i_2] [i_2 - 1] [i_3] [i_6] = (((arr_3 [i_2 - 1]) & (arr_10 [i_6] [i_6] [i_6] [i_6] [i_2])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_26 [i_1] [8] [i_2] [i_3] [i_2] [i_2] [i_1] = (((arr_13 [8] [i_2 + 1] [i_2] [i_2 + 2]) | var_6));
                                var_16 = (arr_17 [i_2] [i_2]);
                                arr_27 [5] [i_2] [i_3] [i_3] [i_3] = var_0;
                            }
                        }
                    }
                    var_17 = ((4294967292 ? (arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : var_2));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_34 [i_1] [i_2] [i_3] [9] [i_10 + 1] = ((((55 ? 1 : 6921046555128492225))) ? (!var_8) : var_9);
                                var_18 = (2 ^ 1439729894374888038);
                                arr_35 [i_1] [i_2] [i_2] [i_2] [i_9] [i_9] [8] = (((!var_3) % var_0));
                                arr_36 [i_1] [i_1] [i_1] [i_2] [5] [i_1] = (((((4294967295 >> (-9223372036854775790 - -9223372036854775805)))) ? ((var_1 ? var_2 : 4294967293)) : (arr_13 [i_1] [i_2] [i_3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                {
                    arr_44 [i_1] [i_1] [i_11] [i_1] = var_4;
                    arr_45 [i_1] [i_1] [i_11] = (!-1469008909681038632);
                    arr_46 [i_11] [i_11] [i_11] [i_11] = ((var_5 ? -108 : (arr_12 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_11] [i_12] [i_12])));
                }
            }
        }
        var_19 = (!21103);
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            var_20 = (max((((!((min(-114, 118)))))), (min((!var_0), 0))));
                            var_21 = 5;
                        }
                    }
                }
                arr_58 [i_13] = ((!((!(arr_50 [i_14 + 1])))));
                var_22 += ((((max(-31962, -30716))) ? (((!1) % (max(187, var_9)))) : -122));
            }
        }
    }
    #pragma endscop
}
