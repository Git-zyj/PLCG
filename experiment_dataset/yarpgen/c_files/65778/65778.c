/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((-(-127 - 1))) / -12))), (min((((var_5 ? 117 : -1))), (min(2007954902, var_10))))));
        var_18 += 913675138;
        var_19 |= var_12;
        arr_3 [i_0] [i_0] = (max((arr_0 [i_0 + 3]), -2007954907));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
        var_20 = (((arr_0 [i_1]) | (max(var_1, (max(var_4, var_13))))));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_18 [i_4] = var_5;
                        var_21 = ((max(-126, (!var_15))) & 126);
                        arr_19 [i_2 + 2] [i_2] [i_2 + 2] [i_4] [i_2] = (arr_17 [i_4]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_22 = (arr_10 [i_7]);
                        var_23 = var_2;
                    }
                }
            }
        }
        var_24 = (max(((min(var_10, (arr_10 [i_2 + 2])))), var_8));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                {
                    arr_31 [i_9] [i_2] = var_10;
                    var_25 = var_5;
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_26 = var_9;
                                var_27 *= ((!((max((arr_26 [i_12] [i_9] [i_9] [i_9] [i_9] [i_9]), ((min(2007954884, -2007954895))))))));
                                var_28 = (min((((!((((arr_0 [i_2]) ? 104 : var_6)))))), (min((arr_26 [i_9] [i_9] [i_9] [i_9] [i_11] [i_12]), var_0))));
                                arr_37 [i_2] [i_2] [i_2] [i_11 + 1] [i_12] [i_9] = arr_34 [i_2] [i_2] [i_2] [i_2] [i_9];
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, ((max((min((arr_6 [i_13] [i_13]), var_8)), var_6)))));

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_30 = ((-(min(-2007954903, var_14))));
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_9] [i_2] = (min(-116, (min((min(var_3, var_15)), (min(var_10, var_16))))));
                            var_31 ^= ((((min(2007954902, var_3))) ? (min((arr_5 [i_13]), ((max(var_2, var_12))))) : var_12));
                            var_32 *= (arr_10 [i_2]);
                        }
                        for (int i_15 = 4; i_15 < 11;i_15 += 1)
                        {
                            var_33 = -112;
                            var_34 = var_11;
                            var_35 = max(var_11, var_11);
                        }
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                    {
                        var_36 = (max(var_36, (~var_14)));
                        arr_52 [i_9] [i_9] = (i_9 % 2 == 0) ? ((max(((((arr_17 [i_9]) >> (var_2 - 1280126619)))), (min(4294967283, (min(1, 494784574913247950))))))) : ((max(((((((arr_17 [i_9]) + 2147483647)) >> (var_2 - 1280126619)))), (min(4294967283, (min(1, 494784574913247950)))))));
                    }
                    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                    {
                        arr_55 [i_2] [i_2] [i_2] [i_9] [i_17] = 251;
                        var_37 *= (arr_20 [i_2] [i_9]);
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                    {
                        var_38 *= var_5;
                        var_39 -= -2007954886;
                    }
                }
            }
        }
    }
    #pragma endscop
}
