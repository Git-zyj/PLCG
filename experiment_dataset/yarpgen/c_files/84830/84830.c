/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_0] = max((1262950164 <= 1), 5427408142212511747);
                            var_11 = var_1;
                            var_12 = (((((max((arr_6 [i_1] [i_1] [i_1]), 29)) | ((var_6 ? 52040 : -2052845555)))) >> (((max((min(var_5, var_3)), ((((arr_3 [i_0]) >> (var_1 - 6478770868329923742)))))) - 655549))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_13 = arr_14 [i_1];
                            arr_15 [i_5] [i_5] [i_1] [i_1] [i_1 + 3] [i_0] = -1262950178;
                            arr_16 [i_0] [i_1] [i_4] [i_5] [i_4] [i_4] = min(var_8, (max((((arr_10 [i_0] [i_5] [i_4] [i_5]) ? (arr_12 [0] [i_1]) : (arr_8 [i_1 - 1] [i_1 + 3] [i_4] [i_5]))), (min(var_9, var_5)))));
                            var_14 = (((!var_9) >> ((var_7 ^ ((((var_0 || (arr_0 [i_4] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_15 = (max(var_15, (min(((min(var_10, -var_10))), (max((min((arr_14 [11]), var_3)), (!var_10)))))));
                            arr_22 [i_0] [i_1] [i_1] [i_0] = (((((!(arr_3 [i_1]))) ? ((min(52435, (arr_6 [i_1] [i_1 + 1] [i_6])))) : (max((arr_13 [i_7]), var_0)))));
                            var_16 ^= (arr_7 [i_0] [6] [i_6] [i_7]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_17 |= 1;
                                var_18 += (((-((1 ? var_6 : var_3)))));
                                var_19 = ((max((arr_4 [i_8] [i_9 + 1]), var_10)));
                                var_20 ^= (arr_25 [i_10] [i_10]);
                                arr_37 [i_12 - 1] [i_8] [i_8] [i_8] [i_8] = (((arr_24 [i_8]) ? (var_7 != 880) : 8333));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_21 += ((!((!((((arr_12 [i_13 - 1] [i_14]) ? 1 : var_4)))))));
                                var_22 *= var_9;
                                var_23 = (var_2 ? (((17249574859189460379 || (-2147483647 - 1)))) : ((min(var_3, (arr_33 [i_8 - 1] [i_8 - 1] [i_10] [i_13 + 2] [i_14] [10])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
