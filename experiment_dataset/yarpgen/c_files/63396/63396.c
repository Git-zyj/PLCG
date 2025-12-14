/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = ((((min(var_12, (arr_4 [i_0] [i_1])))) ? var_11 : (((arr_4 [i_0] [i_2]) ? var_4 : var_0))));
                            var_19 ^= (arr_8 [i_2] [i_2]);
                            var_20 -= -28;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = (((((arr_12 [i_5] [i_4] [i_1] [i_0]) ? (arr_12 [i_0] [i_0] [i_4] [i_5]) : 42876)) <= (((((42896 ? -690924894 : 42876)) <= (arr_2 [i_1]))))));
                            arr_13 [i_0] [i_1] [i_4] [i_4] [i_5] = (((((var_6 ? 42896 : var_9)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_22 = (~-var_5);
                            var_23 ^= (~0);
                            var_24 = (min((((~-3231395015321717056) ? (arr_10 [i_0] [i_1] [1]) : (~var_8))), var_10));
                            arr_19 [i_0] [i_0] [i_6 + 2] [i_6] = (((max(-10, var_11)) & (min(((var_9 ? (arr_3 [i_0] [i_1]) : var_7)), ((22668 ? -33 : var_5))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_29 [i_10] [i_10] [i_10] [10] = max(-28, (((arr_26 [i_10] [i_11]) + 82)));
                            arr_30 [i_10] [i_9] [12] [i_11] [12] = 22673;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((-8 ? ((((min(16332128804748117751, 127))) ? 3231395015321717030 : -3231395015321717058)) : (((min(1, -33)))))))));
                            var_26 = ((-((((max(-89, -55))) ? (0 / 536739840) : 5934))));
                            var_27 = (max(((-((min(42868, 32759))))), (~-var_0)));
                            arr_36 [i_8] [i_12] [i_13] = ((((((((690924892 ? 42840 : 42868))) ? ((42870 | (arr_22 [i_12] [i_8]))) : (((arr_22 [i_9] [i_13]) ? 0 : (arr_27 [i_8] [i_8] [i_8] [i_8] [i_12] [13])))))) ? (((var_9 ? (arr_21 [i_8]) : (arr_25 [i_8] [i_8] [i_13])))) : (var_9 & 1)));
                            arr_37 [i_8] [i_8] [i_9] [i_12] [21] [i_13] = (arr_28 [21] [i_9]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
