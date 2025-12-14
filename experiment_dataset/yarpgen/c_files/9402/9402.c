/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = var_9;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_15 ^= (~var_5);
                arr_6 [i_0] [i_2] [i_2] = (var_2 & var_5);
                var_16 = ((0 ? -1 : 536870911));
            }

            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                arr_10 [i_0] [i_1] [16] |= -var_6;
                arr_11 [i_3] [i_3] [i_3] = var_6;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_17 |= var_12;

                for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] [i_4] [i_4] [i_0] [i_5] = -var_11;
                    arr_18 [i_0] [i_0] [10] [i_5] = (~var_4);
                }
                for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_4] [6] = var_7;

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_1 + 4] [i_4] [1] [i_7] = ((-1 ? 0 : -470409516));
                        var_18 = (min(var_18, var_5));
                    }
                }
                var_19 = ((-((var_9 ? var_9 : var_11))));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        var_20 ^= (~var_13);
                        var_21 = (max(var_21, (var_10 - var_8)));
                    }
                    var_22 = var_11;
                    var_23 = var_3;
                }
                var_24 = (52742 == -1459175987);
                arr_35 [i_8] [i_1] [i_0] [i_8] = (~4);

                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_25 *= (~var_11);
                    var_26 = 145;
                    var_27 ^= ((-var_7 - (~var_8)));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_40 [i_0] [i_8] [i_1] [i_0] [i_12] = ((-var_5 ? (~var_6) : var_10));
                    var_28 = (!-var_10);
                }
            }
        }
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            var_29 = ((((var_8 - var_1) - var_2)));
            var_30 &= (~var_10);
            arr_44 [i_13] |= ((~(min(var_11, (min(var_9, var_4))))));
            arr_45 [i_13 + 1] [12] = (+-470409538);
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        arr_49 [i_14] = var_0;
        arr_50 [i_14] = (-var_10 >= -var_1);
    }
    var_31 = (!var_4);
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            {
                arr_57 [i_16] [i_15] [i_15] = (max(((-25172 ? -119 : 173)), -var_6));
                var_32 = -0;
            }
        }
    }
    var_33 &= (((14093 > var_11) ? (((~var_0) ? var_1 : (~var_10))) : (~var_6)));
    #pragma endscop
}
