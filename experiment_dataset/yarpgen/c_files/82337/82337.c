/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_4;

    for (int i_0 = 4; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!(arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [8] [10] [i_4] [i_3] [i_3] [8] = var_10;
                                var_18 -= ((!(arr_9 [i_0] [i_0] [14] [i_4])));
                                arr_16 [i_0 + 1] [i_1] [i_1] [12] [18] |= (!16306559597844313916);
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_19 = 5154921158074183813;
                            var_20 = var_11;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_21 *= (arr_11 [i_0 - 3] [i_0 - 3] [i_5 - 1] [i_5 - 2]);
                            var_22 = var_12;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            arr_27 [0] [i_1] [1] |= 1;
                            var_23 = 15;
                        }
                        var_24 *= (46506 == var_14);
                    }
                }
            }
        }
        arr_28 [0] = ((240 ? -var_8 : (arr_6 [i_0] [i_0] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 23;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] [1] = (arr_13 [i_9] [12] [i_9 - 1] [1] [i_9]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_25 -= 1;

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_26 = (18446744073709551592 & 18446744073709551574);
                            var_27 = (min(var_27, 0));
                            arr_41 [21] [7] [i_11] [18] [i_13] [7] = ((18446744073709551607 ? 1 : 440345555953245809));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_46 [1] [19] [i_11] [1] [i_14] = 0;
                            arr_47 [i_9 + 1] = arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 2];
                        }
                    }
                    arr_48 [13] [11] [i_10] [i_10] = (((arr_36 [i_9 + 1] [i_9 + 1] [i_9 - 4]) ? (arr_9 [6] [i_10] [6] [i_9]) : ((var_14 ? 5154921158074183817 : 1708087507))));

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_28 = (1 == 9248925328164710759);

                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            arr_56 [i_9 - 3] [i_9 - 3] [i_15] = (126 | 222);
                            var_29 = -37;
                            var_30 -= (arr_42 [i_9] [i_9] [1] [i_9] [i_9 - 1] [7]);
                            var_31 = (arr_24 [i_15] [14] [i_15] [14]);
                        }
                    }
                }
            }
        }
    }
    var_32 -= (3829816220 ? ((-((-1369103039 ? 3312376292 : -5)))) : (((var_12 ? -79 : (~18633)))));
    #pragma endscop
}
