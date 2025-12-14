/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 |= 182;
        var_17 &= (1 >> 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [2] = (~0);
                    var_18 = ((-(arr_2 [i_0])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 *= (arr_5 [i_0] [i_1] [i_3]);
                        arr_12 [7] [i_1] [i_3] = var_8;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((159 ? 49174 : (-1708551399 && 3167018242752937624)));
                        arr_16 [i_0] [2] [i_2] [i_2] [i_1] [i_4] = 127;
                        arr_17 [i_4] [i_1] [i_1] [11] = (arr_1 [i_2]);
                        var_20 = (arr_2 [i_0]);
                        var_21 = var_15;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_22 = (-(-6 * 116));
                            var_23 += (((arr_4 [i_2] [i_2]) ? 3 : -62929803));
                        }

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] = -142715771;
                            var_24 = ((-(127 - var_9)));
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            var_25 = var_5;
                            var_26 *= (1 >= 5);
                        }
                        var_27 = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_28 = (~var_11);
                                arr_33 [i_1] [i_9] [i_2] [i_1] [i_1] [i_1] = ((96 ? 127 : 5));
                                var_29 ^= 1152921435887370240;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 += min(var_15, var_9);
    #pragma endscop
}
