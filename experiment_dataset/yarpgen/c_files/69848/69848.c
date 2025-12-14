/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_14 = 127;
        var_15 = 30919;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = ((var_10 >> (var_13 + 3079742584115223315)));

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_17 = var_10;
                            var_18 = (min(var_18, var_6));
                        }
                    }
                }
            }
            arr_14 [i_2] [i_1] = var_1;
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 |= ((((max(4192, (22 + var_1)))) ? (min(var_11, -var_5)) : ((((arr_12 [i_1] [i_6] [i_7] [i_8 + 1] [i_9]) ? -103 : var_2)))));
                            arr_24 [i_1] [i_6] [i_7] [i_8 + 1] [i_8] [i_9] = 54;
                            var_20 = (min(var_20, ((min((min((arr_18 [i_6 - 1] [i_9] [i_9 - 3] [i_9 - 1]), (arr_6 [i_6 - 1] [i_8 - 2] [i_8 - 2] [i_9 + 1]))), var_7)))));
                            arr_25 [i_1] [i_6 + 1] [i_6 - 1] [i_7] [i_8 - 1] [i_9 - 2] = 7;
                        }
                    }
                }
            }
            var_21 &= (max(var_8, (arr_17 [i_1] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    {
                        var_22 = (max(var_22, (min(((var_12 ? var_2 : (arr_12 [i_6 + 1] [i_6 + 1] [i_11 - 1] [i_11 - 3] [i_11 - 2]))), (arr_12 [i_6 - 1] [i_6 + 1] [i_11 - 3] [i_11 - 1] [i_11 + 2])))));
                        var_23 = (((min((arr_1 [i_6 + 1] [i_11 + 1]), -8680196165808135516)) != (((arr_1 [i_6 + 1] [i_11 + 2]) ? -16496 : -8680196165808135516))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_24 = (min(var_24, ((((((~(~var_3)))) ? (max(-0, (((arr_5 [i_12] [i_1] [i_1]) ? var_3 : (arr_8 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) : (~var_2))))));
            var_25 = 1133592718987586013;
        }
        var_26 = (min(var_26, var_7));
    }
    var_27 = (var_8 * (~4294967295));
    #pragma endscop
}
