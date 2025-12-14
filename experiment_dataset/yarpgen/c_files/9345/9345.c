/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_20 = (min(var_20, var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (min((max(-5487508668973641065, (1 > 23344))), ((!((min(42191, var_11)))))));
                                var_21 = 4284569612;
                                var_22 = ((((max((157 & 0), (max((arr_0 [i_0 + 1] [i_4]), var_7))))) ? ((-13525 ? (((63 ? -28611 : 1))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_9 ^ var_19)));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = (min(((((((arr_10 [i_0] [i_0] [i_0] [i_0] [13] [i_2]) + 2147483647)) >> (var_6 - 1248)))), (min(1931153581, ((var_7 ? (-2147483647 - 1) : 6))))));

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_23 = (((1 >= 1938497634) || (((((min(211, 1))) * 1)))));
                        var_24 = (min(((1 | (2803427558 / var_17))), ((((!var_11) >> (((!(arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_5])))))))));
                        var_25 = (max(var_25, 1045967777338703699));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_26 = var_18;
                        var_27 = (min(((min(var_19, 1))), ((min((1 && var_2), (!var_8))))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = (var_2 + var_10);
                    arr_24 [i_0] [i_7] [10] [i_0] = -4091;
                    var_29 = arr_6 [i_0] [i_0] [i_0] [2];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [14] [i_7] [i_0] = 108;
                                var_30 = (35755 >> (((~124) + 128)));
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_31 = 4294967273;
                    arr_33 [i_0] [i_1] [i_1] [i_10] = ((((((min(22470, -121))) & (~-1115870830))) | (28610 | 1957734917)));
                    var_32 *= min(((-1 ? 56 : var_2)), (((-(arr_29 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 4])))));
                }
                var_33 *= (arr_4 [i_1] [i_0] [i_0]);
            }
        }
    }
    var_34 *= (max((((max(61781, 1)))), 290931948));
    #pragma endscop
}
