/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!-6157660473124941246);
    var_19 = 189;
    var_20 = (min(-7, -6157660473124941246));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min((!-48), 4110959211)))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_22 ^= var_15;
                    var_23 *= (max(-6157660473124941246, var_12));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_24 |= (min((~2147483647), (arr_9 [i_1 - 1] [12] [i_0] [i_1] [12] [i_0])));
                        var_25 = (!-6157660473124941269);
                        var_26 = (~(((!(arr_2 [i_0 + 1] [i_0] [i_1 - 1])))));
                        var_27 *= (max(((max(15, -16))), (arr_5 [4])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_28 = (!-21);
                        arr_13 [i_0] [i_1 + 2] [i_0] [i_4] = ((max(-21328, -6157660473124941246)));
                    }
                    var_29 = (max(11, 249));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_30 = (-(((!(arr_10 [i_0] [i_1] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] = (((((~(arr_6 [i_0] [i_1] [i_5] [i_6])))) ? ((((!(var_9 / 6157660473124941248))))) : ((-(((arr_19 [i_0] [i_6]) ? 13 : var_16))))));
                                var_31 = (arr_2 [i_5] [i_0] [i_7 + 2]);
                                var_32 &= (((((!((44184 && (arr_15 [i_0] [i_7] [i_5])))))) - (!6)));
                                var_33 = (((arr_7 [i_6] [i_6] [i_6] [i_0]) ? ((-((~(arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))))) : ((min((min(var_9, 236)), (12501 <= 2147483647))))));
                            }
                        }
                    }
                    var_34 -= (((~7870082018068627179) ? ((24713 ? (arr_12 [i_1 + 2] [i_5] [i_5] [i_0]) : ((-(arr_2 [i_5] [i_5] [i_0 - 1]))))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
