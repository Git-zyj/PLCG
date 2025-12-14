/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_21 = 12360999253212030166;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_22 = 1683768701;
                            var_23 = (10585484054251539810 | 1683768699);
                            var_24 -= (!var_4);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_25 = (max(var_25, var_4));
                            var_26 -= (((((12480838833594920750 ? 1683768701 : 3385950826))) || var_5));
                            var_27 = (((min(30077, var_3))));
                            var_28 = (((var_5 && 56209) && (!12480838833594920750)));
                        }
                        arr_14 [i_0] [14] [i_1] [i_3] [i_0] [i_1] |= ((!(0 % 514381390)));
                        var_29 = 30077;
                        var_30 = ((((!(!96))) ? (!var_0) : (-127 - 1)));
                    }
                }
            }
            arr_15 [i_0] [i_0] = ((!((max(var_2, var_12)))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_21 [i_0] [i_6] = var_10;
                    arr_22 [i_0] [i_6] [i_7] [i_7] = ((var_16 + (((var_13 - 0) + 120))));
                    arr_23 [i_0] [i_0] [i_6] [i_7] = 1;
                    var_31 = (min(var_31, 18707));
                    arr_24 [10] [i_6] [10] [10] = 5965905240114630865;
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_32 -= var_1;
                        var_33 = (max(var_33, (((!((min(var_16, (1024 || -21629)))))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_38 [i_8] [i_9] [i_10] [i_11] [i_12] = (!536870911);
                            var_34 = ((32747 ? 12987 : 17600));
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            arr_42 [i_8] [i_8] [i_8] [11] [11] [11] [i_8] = ((max(28672, var_16)));
                            var_35 = ((!(12480838833594920769 - 14813394289713956902)));
                            var_36 = -var_10;
                            var_37 = min(((var_11 ? ((13004 ? 14812635865469076387 : 96)) : -var_16)), 1278);
                            arr_43 [i_8] [i_8] [i_8] [i_11] [i_8] = (((!-28673) && (((100 ? (max(1280324568556914485, -1)) : 6144)))));
                        }
                        /* vectorizable */
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            var_38 += (((!6816) | -40));
                            arr_47 [8] [8] [2] [8] [8] [i_11] [i_14 - 2] = -87;
                        }
                    }
                }
            }
        }
        var_39 = (max(var_39, 0));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        arr_51 [i_15] = (5965905240114630860 ^ 0);
        var_40 = var_11;
    }
    #pragma endscop
}
