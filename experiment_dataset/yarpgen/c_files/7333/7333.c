/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((!(!-17096))))));
        var_22 = (((arr_0 [i_0]) - 9489));
        var_23 = (min((min((max(3438396132, 3410511592)), 182)), var_16));
        var_24 = (max(((((~var_14) <= (8274004 % 2700610821)))), (min((((arr_0 [i_0]) ? var_4 : -17096)), var_2))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_25 = ((var_11 ? (((!54) * (!20))) : var_6));
        var_26 = var_12;
        var_27 &= min((((!(!var_5)))), 411560630);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_28 += 3883406665;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_29 = 3772698223;
                                var_30 = -var_14;
                                var_31 = (((arr_1 [i_3]) / 34728));
                            }
                        }
                    }
                    var_32 = (var_5 < var_14);
                    var_33 = ((18 ? (arr_3 [i_2 + 1]) : 1));
                }
            }
        }
        var_34 = ((!(((var_17 ? var_13 : var_6)))));
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_35 = (~178);
        var_36 = (max((min((17077 != 2397768979), -4294967295)), (632886069 != 239)));
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    {
                        var_37 = (min(var_37, ((1978144176 <= ((((51 | (arr_1 [12])))))))));
                        var_38 = (((!1561899919) <= ((-(var_1 || var_11)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {
                var_39 = ((max(var_19, (max(0, 178)))));
                var_40 &= (var_2 <= var_0);
                var_41 &= ((!4294967290) < ((-((var_2 ? (arr_30 [i_12]) : 3324194349)))));
            }
        }
    }
    var_42 = (max(var_42, var_15));
    #pragma endscop
}
