/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 298883808;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] |= (((-9223372036854775807 - 1) ? 13 : -2713));
                                var_17 &= (arr_3 [i_1] [i_2] [i_1]);
                                var_18 = (min((max(-var_8, (arr_1 [i_1]))), -13201));
                            }
                        }
                    }
                }
                arr_14 [19] = (min((max(1139141449, 7634024169060399015)), var_12));
            }
        }
    }
    var_19 = var_11;

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_20 = ((!((min(((min(1, (arr_15 [i_5])))), (~-11389))))));
        arr_17 [12] = (((-9223372036854775804 ? 1 : -8815133611340672866)) % var_2);
        var_21 = (min(var_21, ((min(var_8, (-8070873142922389491 == 48))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_22 ^= var_15;
        var_23 ^= (-1 ? 133678407 : 2037);
        var_24 &= ((((max(32522, var_12))) ? (max((arr_3 [i_6] [i_6] [i_6]), ((14001245390803776648 + (arr_5 [i_6] [i_6] [i_6] [i_6]))))) : -var_6));
        var_25 ^= (arr_19 [i_6]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = ((32767 ? 1756215937 : 1660052696));
        var_26 = -252090783681433852;
        var_27 = (min(var_27, ((min(-641394707, 210)))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    {
                        var_28 = (max(var_28, (((~(~410011539))))));
                        arr_30 [i_7 - 1] [2] [i_9 - 2] [i_10] [i_7] [i_10] = (((((~(var_9 ^ 18421)))) || var_9));
                    }
                }
            }
            arr_31 [i_7] [i_7 - 1] [i_7 - 1] = ((-(-127 - 1)));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_29 = (arr_20 [i_7 - 1]);
            var_30 = 18446744073709551615;

            /* vectorizable */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                var_31 = (~2334935420245934211);
                arr_37 [i_7] [i_7] [i_7] [14] = (arr_11 [2] [2] [i_7 - 1] [i_11] [i_7 - 1] [i_7 - 1] [19]);
                var_32 = ((!(arr_4 [i_7 - 1])));
            }
            var_33 = (max(var_33, ((min(0, -124)))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_34 = ((!((min((min((arr_1 [i_7]), 3815975763780308285)), 6485377493948003714)))));
            var_35 = 7666927077410474348;
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_36 *= -8169631708713086317;
            var_37 = (arr_8 [11] [i_7] [i_14] [i_14] [i_7] [i_7]);
        }
    }
    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_38 *= (arr_3 [i_15] [i_15 - 1] [i_15]);
        var_39 = -72;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 13;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_57 [i_18 - 1] [i_15] [i_15] [i_15] = 4569561325473724800;
                                arr_58 [i_15] [i_16] [i_16] [i_16] [i_15] [i_19] [1] = (((max(-242130519, (arr_56 [i_15] [i_15] [4] [i_15] [i_15 - 1] [i_15] [i_15]))) >> ((((-(arr_27 [11] [11] [i_15 - 1] [11] [i_15 - 1]))) - 1262618104))));
                            }
                        }
                    }
                    arr_59 [i_15] [i_17] [i_17] = 0;
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 14;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 14;i_21 += 1)
                        {
                            {
                                arr_64 [10] [10] [10] [i_20] [14] [i_15] = ((((max(var_4, 12431021566391208355))) ? (((arr_29 [i_17 - 1] [i_17] [i_15] [i_20 + 1] [i_17]) ? -4986131508161117344 : (arr_29 [i_21] [i_16] [i_15] [i_16] [i_15]))) : (((-50 ? 3875043205 : 0)))));
                                var_40 = (arr_36 [i_20 + 1]);
                                var_41 = (min(var_41, (min((arr_20 [i_15]), 246))));
                                var_42 = ((+(min((arr_9 [i_20 - 1] [i_16] [i_21 - 1]), (min(1890068221706276108, 17232902813789162273))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
