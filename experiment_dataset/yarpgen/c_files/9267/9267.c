/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1225610211;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_18 -= 5961876271016815037;

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_19 = var_14;
            var_20 = (min((!-var_5), 1225610211));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 = -6573;
                        arr_11 [i_0] [i_0] [i_2] [i_3] = var_7;
                    }
                }
            }
            var_22 &= 1;
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = (~var_13);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_26 [6] [i_8] [i_8] [i_5] = -8534;
                                var_24 |= -18018941669223999384;
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_4] [i_4] = 8536;
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_25 |= (max(18018941669223999389, var_10));
                    var_26 = (~var_6);
                }
            }
        }
        arr_38 [1] [i_9] = var_4;
        var_27 = 427802404485552231;
    }

    for (int i_12 = 2; i_12 < 22;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 23;i_16 += 1)
                        {
                            {
                                arr_51 [i_13] [i_13] [i_14] [i_15] [i_16] = 336701895;
                                arr_52 [i_13] = -336701895;
                            }
                        }
                    }
                    var_28 *= var_3;
                    var_29 = var_7;
                }
            }
        }
        var_30 = -var_5;
        var_31 = (--336701895);
        arr_53 [19] |= var_12;
    }
    var_32 = var_14;

    /* vectorizable */
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_33 ^= 4032;
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {
                        var_34 = 15144270402932286788;
                        var_35 = var_14;
                        var_36 = var_10;
                        var_37 = (max(var_37, var_14));
                    }
                }
            }
        }
        arr_64 [10] = 336701894;
    }
    for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
    {
        var_38 += var_8;
        var_39 = (~var_0);
    }
    for (int i_22 = 0; i_22 < 23;i_22 += 1)
    {
        arr_70 [i_22] [i_22] = var_14;
        var_40 -= ((~((~(!-32762)))));
    }
    for (int i_23 = 2; i_23 < 8;i_23 += 1)
    {
        arr_73 [i_23] = var_7;
        var_41 = var_15;
    }
    #pragma endscop
}
