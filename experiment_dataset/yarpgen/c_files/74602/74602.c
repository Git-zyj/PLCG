/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 -= 276481349;
                            var_18 = (((((~((min(0, -10575)))))) ? (((!((((-32767 - 1) ^ 4414011503447683858)))))) : ((((arr_10 [i_1 - 4] [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_1]) || ((20748936 < (arr_6 [i_0] [i_1] [5] [i_3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_19 = (((~(((var_10 && (arr_8 [2] [10] [i_1])))))));
                            var_20 = (~var_0);
                            var_21 = (min((((!(arr_5 [i_0 + 1] [i_1])))), (((arr_1 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_5 [i_0 - 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_22 *= ((((min(32767, 1))) && ((max((arr_1 [i_1 - 1]), (arr_13 [i_1 + 1] [i_8 - 1]))))));
                                var_23 = ((~((((-2147483647 - 1) && 32)))));
                                var_24 = ((-1 | (((~9170) * (arr_3 [i_0])))));
                                var_25 *= (((((arr_8 [4] [i_1] [i_6]) ? (arr_21 [i_0 + 1] [i_1 - 3] [i_8 + 3] [i_0] [i_8]) : (arr_13 [i_0 - 2] [i_1 - 4]))) * ((7007 >> (3567 - 3538)))));
                                var_26 = ((!(arr_0 [i_0 + 2] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 = (((arr_24 [i_9] [i_12]) ? (((arr_29 [i_12 - 1] [i_12] [i_13 - 1]) >> (((arr_28 [i_9] [i_9] [i_12 + 1] [i_12 + 1]) - 37818)))) : ((max((arr_30 [i_9] [i_9] [i_9] [i_12 - 1]), -1365825567)))));
                                var_28 &= arr_30 [i_12 + 1] [i_11] [i_11] [i_9];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_29 = (min((arr_34 [i_9] [i_11 - 2] [i_11 - 2] [i_15 + 1]), ((16473673866043377484 ? (arr_35 [i_11] [i_11] [i_9] [i_11]) : 1))));
                                var_30 = 2147483640;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
