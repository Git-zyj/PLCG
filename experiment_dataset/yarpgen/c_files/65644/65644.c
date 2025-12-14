/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = 43;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = var_3;
                                var_20 = -var_3;
                                arr_12 [i_4] [i_3] [i_2 - 1] [i_2] [i_2 - 1] [i_1 - 4] [i_0] = (((-28080 + 2147483647) >> (((((((-43 ? (arr_11 [i_4] [i_3] [i_0] [i_1] [i_0]) : 110))) ? (arr_6 [i_2] [i_2] [i_2 - 1]) : var_5)) - 4294940564))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = ((((0 && (arr_3 [i_2 - 1] [i_1 - 3] [i_1 - 3]))) ? (((arr_16 [i_6] [i_6] [i_2 - 1] [i_6]) ? ((-3909199177747781838 ? (arr_9 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6]) : (arr_2 [i_0] [i_0]))) : (((((arr_18 [i_0] [i_1 + 1] [i_2 - 1] [i_5] [i_6]) || 85)))))) : (min((arr_18 [i_0] [i_1] [i_1 - 4] [i_0] [i_0]), (arr_15 [i_0] [i_1])))));
                                arr_19 [6] [6] [i_2] [i_1] [6] [i_0] = ((33554431 ? 0 : -28075));
                                var_22 = (((var_1 / (arr_3 [i_1 + 1] [i_1 - 4] [i_2 - 1]))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] = (min(-2008172261, (arr_2 [i_1 - 1] [i_1 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((2717644108 ? 1968297850 : 4516)))));
                                var_24 += (arr_10 [i_0] [i_0] [i_0] [i_0] [14]);
                                arr_28 [i_0] [i_1] [i_1] [i_7] [i_7] = (((arr_24 [i_7 - 4] [i_7 - 4] [i_2] [i_1 - 1] [i_2 - 1] [i_7 - 4] [i_8]) ? ((((-28084 + 2147483647) >> (((arr_24 [i_7 + 2] [i_1] [i_2] [i_1 - 1] [i_2 - 1] [i_2] [i_8]) - 1194406734))))) : ((1577323189 ? (arr_13 [i_7 - 1] [i_1] [i_1] [i_1 - 3]) : (arr_24 [i_7 - 4] [1] [1] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((~(((((min(var_15, 156))) && 4294967295)))));
    var_26 += var_15;
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 24;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                arr_46 [i_9] = (+-1);
                                var_27 = var_8;
                                arr_47 [i_9] [i_10 - 1] [2] [i_12] [i_13] = ((2717644107 ? ((((((arr_41 [i_9 + 2] [i_11] [i_13]) / 171)) ^ (var_4 || 12196)))) : var_1));
                                var_28 ^= ((var_11 ? (((max(-29039, (arr_33 [i_10] [i_11 + 4] [i_13]))))) : (arr_40 [i_12] [i_13])));
                            }
                        }
                    }
                }
                var_29 = var_3;
                var_30 = (min(var_30, ((((((-(arr_41 [i_9] [i_9 - 1] [i_10 - 2])))) ? -53 : ((1 ? (arr_41 [i_9] [i_9 + 4] [i_10 - 1]) : (arr_41 [i_9] [i_9 - 1] [i_10 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
