/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((17313293355988704393 ? (~0) : -24988));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] = (((!17313293355988704378) >= (max(1133450717720847238, -5))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                arr_10 [i_0] [i_2] [i_2 + 1] = var_12;
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_19 = (arr_3 [i_1 + 2] [i_3 - 1]);
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = arr_0 [i_1] [i_1];
                        }
                    }
                }
                var_20 = (arr_5 [i_0]);
                arr_17 [i_2] [i_2] = ((55683 >> (3492478692 - 3492478672)));
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] = 17313293355988704377;
                arr_21 [i_0] [i_0] [i_0] [i_0] = (!0);
                arr_22 [i_1] [i_1] [i_5] [i_0] = (max(var_9, 57));
                arr_23 [i_5] [i_5] = var_8;
            }
            for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_1] [7] = (max(1873920147261508648, 17313293355988704387));
                arr_28 [i_0] [i_0] [i_1] [i_6] = 0;
            }
            var_21 = (max(var_21, (arr_18 [9] [i_1 + 2] [i_1 + 3] [4])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_22 = (((arr_38 [i_10] [i_8 - 1] [i_7] [3]) ? 5 : 65524));
                            var_23 = (arr_4 [i_8 - 1] [i_8 + 1] [i_8 + 1]);
                            var_24 = (arr_40 [i_0] [0] [0] [i_8] [12]);
                        }
                    }
                }
            }
            var_25 = var_15;
            arr_41 [i_0] = (arr_25 [i_0]);
            arr_42 [i_0] [i_7] = (1746326501 ? -15 : (arr_40 [i_0] [i_0] [i_0] [i_0] [12]));
        }

        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            var_26 = (min(var_26, -22813));
            arr_46 [i_0] [i_11] = ((!((((!5) / ((4606018084855278188 ? 65535 : 7998630885031536629)))))));
            var_27 = var_13;
            var_28 = (min((max((arr_0 [i_11 - 1] [i_11 - 1]), -188)), -0));
            var_29 = (min((((var_14 ? 2926579250 : 63))), (~5368111680664884051)));
        }
    }
    var_30 = (-3 ? 4294967292 : 1);
    var_31 = (min((~-107), 21784));
    var_32 = var_6;
    #pragma endscop
}
