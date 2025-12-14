/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_15 = 1;
                        arr_11 [i_0] [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_0] = min(((+(((arr_10 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_3 + 1] [i_0]) % 532480383)))), (var_13 && -26144));
                        arr_12 [21] [i_1 + 2] [i_1 - 2] [i_0] [i_3] = var_12;
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (arr_3 [0] [i_1 - 2])));
                        var_17 ^= ((+(((arr_8 [i_4 - 1] [i_1 - 2] [i_1 - 2] [i_4 - 1]) ? 26142 : (7 && 26143)))));
                        var_18 = var_8;
                        var_19 += ((min(-26144, 5106138383351678974)));
                        var_20 = var_5;
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_21 ^= (((((~(arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])))) ? (arr_7 [i_0] [i_0] [i_2 - 3] [i_5]) : (~4294967270)));
                        var_22 += ((var_6 << (4162253928005834342 - 4162253928005834335)));
                        var_23 = (arr_3 [i_0] [i_0]);
                        arr_18 [i_0] [13] [i_0] [i_5] = (62535 < 244);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_2] = ((((((arr_15 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) ? var_14 : var_14))) ? ((((arr_16 [i_5] [i_1 - 1]) ? (arr_19 [i_0] [i_0] [14] [i_5] [14]) : var_3))) : ((2048 ? 5106138383351678975 : 65526))));
                            arr_22 [i_6] [i_0] [i_2] [i_0] [i_0] = 26143;
                        }
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 + 2] [i_2] [i_0] = (((((((!var_13) && var_9)))) | ((((-12656 ? -50877960188281873 : var_1)) % var_9))));

                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_24 = (arr_7 [i_7] [i_7] [i_7] [i_7]);
                            var_25 = ((10278885445495636901 ? var_2 : 1));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1 - 1] [i_0] = ((var_13 ? (arr_26 [i_0] [11] [i_1 - 1] [i_0] [i_2 - 4] [i_0] [i_0]) : var_7));
                            arr_32 [i_0] [i_0] [i_0] [i_0] = (((~1623367794) ? (arr_7 [i_0] [i_2] [i_7] [i_9 - 1]) : (!17314177519643448239)));
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min(2120267626, (arr_8 [i_0] [i_0] [i_0] [i_0])))) != ((((arr_0 [i_0]) + 29)))));
                    }
                    var_26 = (max(var_26, ((max((arr_14 [i_0] [i_2] [i_1 + 1] [i_0] [i_0]), 216)))));
                    arr_34 [i_0] [i_1] [i_0] = 18446744073709551614;
                    var_27 = (min(var_27, (arr_28 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_28 = (max(var_28, (-72 | -2048)));
    var_29 += var_8;
    #pragma endscop
}
