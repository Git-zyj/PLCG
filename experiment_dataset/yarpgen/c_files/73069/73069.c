/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3 + 1] [i_1] [i_1] [i_1] [i_0] = ((((max((!44), ((~(arr_8 [i_1] [i_3])))))) ? ((((arr_9 [i_2]) || ((min((arr_11 [i_4] [i_2]), (arr_6 [i_0] [i_1]))))))) : (((((max(13, (arr_8 [i_1] [i_4])))) && (((arr_9 [i_2]) || (arr_3 [i_0] [i_2] [i_3 - 1]))))))));
                                var_13 = (arr_7 [i_0] [i_1]);
                                var_14 = 901694571379502768;
                                var_15 = (min((arr_11 [i_1] [i_3 + 3]), ((((((~7) + 2147483647)) >> (~4294967295))))));
                                var_16 = (arr_3 [i_1] [i_3 + 1] [i_4]);
                            }
                        }
                    }
                    var_17 -= arr_3 [i_0] [i_1] [i_2];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = (max((((((max((arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [i_6]), (arr_5 [i_1] [i_5] [i_1])))) << (arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_6])))), ((138513903840796159 ? (arr_17 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]) : (18 | 1)))));
                                var_19 = (((((((878777677 < (arr_3 [i_0] [i_1] [i_0]))) ? -2109770347 : 4294967295))) ^ ((17 ? ((((arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6]) & 1))) : (arr_6 [i_1] [i_5])))));
                                var_20 = -8691149261770525852;
                                var_21 = ((!((!(arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= 121;
    var_23 = var_2;
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_24 = (min(1, (arr_11 [i_7] [i_8])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_35 [i_7 - 2] [i_9] [i_9] = (-((((arr_34 [i_7] [i_8] [i_9] [i_10] [i_9] [i_10] [i_11]) || (arr_30 [i_7] [i_8] [i_9])))));
                                var_25 = (arr_2 [i_7 - 4] [i_11 + 1]);
                                var_26 = (max(((((max((arr_5 [i_9] [i_9] [i_9]), -1623074903))) ? (((((arr_28 [i_7 - 4] [i_8]) <= 17247004111289589933)))) : (max((arr_6 [i_7] [i_8]), (arr_34 [i_7] [i_7 - 2] [i_7 - 1] [i_8] [i_9] [i_10] [i_11 + 1]))))), (((1623074902 & (arr_3 [i_7 + 2] [i_8] [i_11 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_11;
    #pragma endscop
}
