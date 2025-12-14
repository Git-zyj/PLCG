/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 *= 45469;
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] = (-1 || ((max(5562445305490457518, var_12))));
                                var_14 = (~-var_2);
                                var_15 = (((0 <= 1) + (((!4077732843) % (max(4172658482253340854, 2693))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_16 = ((106 * ((-(var_8 / 1)))));
                            var_17 *= 2917531425;
                            var_18 = (max(var_18, ((max(var_10, (((0 || (((2444754051774272228 >> (-92 + 142))))))))))));
                            var_19 |= (-8 + -827773998);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_31 [i_9] [i_9] [i_7] [i_10 - 1] = 1;
                            var_20 = ((((((((1 + (-2147483647 - 1))) + 2147483647)) >> ((((max(1, 42452))) - 42445)))) == ((min((1 <= var_1), (409278112 != -277718913))))));
                            var_21 = -18446744073709551614;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_22 += -126;
                                arr_40 [i_7] [i_7] = (max((0 * 372112607), 20480));
                                var_23 = (min(var_23, ((((3427 <= (!7155343097977755451))) && ((min((min(var_2, 1)), (-9123 == 22350))))))));
                                arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] [i_13] [i_7] = (max((((~(min(var_10, var_8))))), 6786209199623821566));
                                var_24 = 2314786598;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 19;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            {
                var_25 = (min(var_25, (((-(max((15866102462007934088 - 1), var_5)))))));
                arr_47 [i_14 - 1] [i_14 - 1] = (((max(16777215, ((var_3 << (16777184 - 16777180))))) - (((((min((-127 - 1), var_2)) != (1 || -99)))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_26 = (1088652719442325992 ^ 1);
                            arr_53 [i_14] [i_14] [i_16] [i_14] = var_11;
                            var_27 = ((((((!(-1761262991 + 0))))) <= var_0));
                            arr_54 [i_16] [i_16] [i_16] = ((1590432331 > (max(8, 782688996))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
