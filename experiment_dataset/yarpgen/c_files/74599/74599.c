/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_7;
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 6048;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (((max(((var_3 ? var_10 : 13942972963740787678)), 7770108524894243096)) + (var_14 < 18446744073709551615)));
                                var_18 -= var_10;
                                var_19 = (max(var_19, var_11));
                            }
                        }
                    }
                }
                arr_14 [14] [i_1] [i_0] = (max((min(4503771109968763935, -1476281127)), var_5));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_20 = ((min((17873661021126656 + 1610612736), var_8)));
                            arr_20 [i_5] [i_5] [i_5] [12] [14] [i_6] &= (((48330 == var_1) - (((-22472246 ? 28694 : 28206)))));
                            arr_21 [i_6] = (((max(-21182, (((-2147483647 - 1) ? -752717569 : 65535)))) == var_9));
                        }
                    }
                }
                var_21 = (((1984 ^ 28694) | (min((((3840 ? var_6 : var_2))), 4503771109968763923))));
            }
        }
    }
    var_22 ^= ((((min(((max(7104, var_5))), 1641422231))) ? (var_7 <= 3) : (((var_7 <= var_13) ? ((min(var_10, var_9))) : 18446744073709551615))));
    var_23 = -752717559;
    #pragma endscop
}
