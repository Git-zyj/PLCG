/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_10 = var_2;
                        var_11 *= (((arr_1 [i_1 - 1]) ? (max((arr_7 [i_2 - 3] [i_2] [0]), (((arr_6 [i_0] [i_1 + 1] [4] [i_3]) << var_3)))) : var_9));
                    }
                    arr_10 [i_0 + 2] [i_0] [i_2] = ((5429976902908537429 ? 32535 : (-32551 >= 32520)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_12 = ((arr_1 [2]) ? ((((((-32527 ? 7090387308955686821 : (arr_11 [i_0 + 1] [3] [i_0 + 1] [i_0] [i_0 - 1])))) ? -32521 : var_1))) : (((arr_3 [i_0] [i_0]) ? var_6 : (arr_3 [i_0] [i_0]))));
                                var_13 = (arr_1 [i_1]);
                                var_14 = 32551;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_1 - 4] [i_1 - 2] [i_1] = 100283592;
                                var_15 = (max(var_15, (((((min((arr_21 [i_7 - 2] [i_6 - 2] [i_7] [i_0 + 2] [i_2 - 3]), var_6))) ^ (arr_21 [i_7 - 2] [i_6 - 2] [i_2] [i_0 - 1] [i_2 + 2]))))));
                                arr_25 [i_0] [i_0] [i_1 + 1] = (((-12 ? 418536242 : -9190422826862992216)));
                                arr_26 [i_0] [i_1] [0] [i_7 - 1] &= min((arr_17 [i_6 + 1] [i_6] [i_2 + 1] [i_6 + 1] [i_0 + 1]), (((((max((arr_16 [3] [i_6 + 1] [i_2] [i_1] [i_0]), var_9))) ? (((arr_13 [0] [i_6 + 1] [i_6] [i_6 - 2]) ? 32521 : 1545389019)) : (arr_0 [i_0 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, ((((((max(var_6, 3612011621))) ? var_4 : ((var_9 ? var_7 : var_8))))))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            {
                arr_32 [i_9] [i_9] [i_8] = var_7;
                var_17 ^= (arr_30 [i_8] [9]);
                var_18 = ((((max((arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1])))) ? (((((((-(arr_31 [i_8] [i_8] [i_8 - 1])))) || ((((arr_31 [7] [i_9 + 2] [i_9]) ? var_8 : (arr_31 [i_8] [i_8 - 1] [i_8 - 1])))))))) : (((((((arr_27 [4] [i_9 + 2]) <= -4441)))) * var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_19 *= ((var_6 ? var_5 : (-9190422826862992227 / 28531)));
                            var_20 = arr_34 [i_10];
                        }
                    }
                }
                var_21 -= (min((arr_29 [i_10] [i_11 + 2]), ((((min(0, 32517))) ? -102012305 : ((32567 ? 9190422826862992207 : -102012300))))));
            }
        }
    }
    #pragma endscop
}
