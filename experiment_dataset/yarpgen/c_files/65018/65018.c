/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((~(min(12665, -73))));
                                var_16 = (max(var_16, ((((((~var_3) ? (!var_1) : ((min(-58, var_9))))) * -57)))));
                                var_17 |= (min(var_4, ((((max(-1917494956327551081, var_7)) < var_5)))));
                            }
                        }
                    }
                    var_18 |= (!85);

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 += -71;
                        var_20 = (min(var_7, (max(((var_0 ? var_7 : -67)), (var_1 & var_7)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_21 = (~var_9);
                        var_22 = (~-5);
                        var_23 += ((-(!var_8)));
                    }
                }
            }
        }
    }
    var_24 = (min(-var_14, var_11));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_25 -= 0;
                        var_26 = -26877;
                        var_27 = (var_4 ? var_10 : var_7);
                        var_28 = -var_5;
                        var_29 = ((76 ? 64 : 7680));
                    }
                }
            }
        }
        var_30 = (((((var_1 ? var_0 : var_6))) ? var_14 : (((48 ? var_1 : -8)))));
        var_31 = ((-26878 ? -903107021 : 1672084136));
        var_32 -= ((-((63 ? 71 : var_2))));
        var_33 *= (var_7 <= ((var_5 ? var_11 : var_7)));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    var_34 = (var_0 == var_12);

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_35 = (min((((!-73) & (~var_10))), -18372));
                        var_36 ^= (76 * var_0);
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_37 ^= (-(!var_13));
                        var_38 |= (~var_0);
                        var_39 = ((min(var_12, var_12)));
                        var_40 = ((~((var_0 ? 240 : var_3))));
                        var_41 = ((~((max(var_3, var_9)))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        var_42 = 7707;
                        var_43 = var_4;
                        var_44 = (!-109);
                        var_45 = (25 | var_9);
                    }
                }
            }
        }
        var_46 = ((!(((var_3 ? ((min(var_3, -6291064793430695373))) : (var_10 - var_4))))));
        var_47 = (~-1166460242);
        var_48 += ((((max(-18446744073709551615, (((var_3 ? var_13 : -26907)))))) ? (((!((max(74, -26874)))))) : ((min(-77, -109)))));
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
    {
        var_49 |= (min((~var_10), (~var_6)));
        var_50 = (~var_10);
    }
    #pragma endscop
}
