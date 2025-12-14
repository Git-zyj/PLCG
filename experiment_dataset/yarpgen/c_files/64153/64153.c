/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 *= var_9;
                                var_17 = 50708;
                                var_18 = (max(((max(0, 50702))), ((var_14 ? 3631787814 : 11958))));
                                var_19 = (((((14828 ? ((27 ? var_10 : var_0)) : var_10))) ? var_3 : (arr_5 [i_0] [i_1 - 1] [1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 -= (((((max(-16, var_11)))) ? ((max(var_12, ((((arr_13 [i_2] [i_2] [i_2] [i_0] [i_0]) ? 11 : var_1)))))) : ((0 ? (arr_10 [i_0] [4] [i_1 + 1] [12] [i_1 + 1]) : var_8))));
                                var_21 = var_14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = 2507;
                                var_23 = (max(var_23, (arr_11 [i_0] [i_8] [4])));
                                var_24 &= 1;
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0] = max(-106, var_10);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                arr_31 [i_9] [i_9] = (max((arr_28 [i_10]), ((var_12 ? var_9 : var_11))));
                var_25 = ((var_7 ? 1 : ((max((~1), (~105))))));
                arr_32 [i_9] [i_9] = 131071;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_26 = (max((((!(arr_29 [i_9])))), (((var_10 ? 7680 : -1603234195)))));
                            var_27 = 1;
                            var_28 = ((var_7 ? (arr_28 [i_9 + 1]) : var_2));
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_11 ? (max(var_6, 16)) : -2));
    var_30 = 50722;
    #pragma endscop
}
