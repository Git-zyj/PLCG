/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (0 != 16352);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 |= ((((((max(16337, 4294950954))) ? ((16352 ? 53084 : 4294950956)) : (((~(arr_1 [i_0]))))))) != (((arr_0 [i_0] [i_0]) % -196456454148809261)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 = -8942148221811309708;
            var_13 = (min(var_13, 16349));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_14 = arr_0 [i_1] [i_2];
                            var_15 = ((arr_7 [i_1] [i_2] [i_3] [i_4]) || var_1);
                            arr_13 [i_4] [i_2] [i_1] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_1));
                            var_16 = (max(var_16, 0));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_2] [i_2] = ((!(arr_1 [i_0])));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_17 = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_18 = ((!(arr_15 [i_5] [i_5] [i_5] [i_1])));
                        }
                    }
                }
                arr_24 [i_0] [i_5] = 0;
            }
        }
        var_19 = var_9;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        arr_27 [i_8] = var_4;
        var_20 = (var_6 % (arr_5 [i_8] [i_8 + 1] [i_8 + 1]));
        var_21 = var_0;

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_22 -= (((arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]) ? 4294950939 : (arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])));

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_23 = (min(var_23, (~8942148221811309711)));
                        arr_38 [i_8 - 1] [i_8] [i_9] [i_10] [i_11 - 1] [i_12] = -5881;
                    }
                    var_24 = (arr_9 [i_11] [i_10] [i_10] [i_9] [i_8 + 1]);
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_25 = 820891999;
                arr_41 [i_8] [i_8] [i_9] [i_13] = ((~((var_6 ? var_9 : 13))));
                var_26 |= var_4;
                var_27 = var_5;
            }
            var_28 = (min(var_28, ((var_5 ? var_2 : (!var_4)))));
        }
        var_29 = -32742;
    }
    var_30 = ((((((var_6 != 16363) ? (~196456454148809242) : -8942148221811309686))) ? var_6 : 0));
    #pragma endscop
}
