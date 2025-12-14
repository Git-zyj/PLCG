/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_19 [0] [0] [i_3] [i_3 + 1] = (max(((12 | (arr_3 [i_4]))), (arr_2 [i_3 + 1] [8])));
                                var_18 &= ((((min(((232 ? (arr_18 [i_4] [i_4] [i_2] [i_2] [i_2] [17] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))), -99))) ? (arr_9 [i_4] [i_4] [1] [i_1 + 1]) : (min(-1162756781, (15087494998131437954 < 2143289344)))));
                                arr_20 [i_0] [i_0] [i_0] = (max((min((arr_5 [i_1 - 2] [i_3 + 1] [i_3]), ((15087494998131437956 ? var_16 : 1)))), ((((min((-9223372036854775807 - 1), 12))) ? (arr_8 [i_0] [i_2] [i_2] [i_4]) : (!42)))));
                                arr_21 [i_0] [i_2] [i_3] = (arr_18 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] [i_3] [i_3]);
                            }
                        }
                    }
                    var_19 ^= ((((((!(arr_12 [i_0] [i_1 - 2] [i_0] [i_1]))) ? -47 : (!var_7))) % (((((max((arr_10 [5] [5] [i_2]), (arr_12 [i_0] [i_0] [3] [i_0])))) ? 3717 : (arr_9 [i_0] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_1] [i_5] [i_6] = (((!((((arr_11 [i_0] [i_1 - 2] [0] [i_5]) / (arr_1 [i_2])))))));
                                var_20 ^= ((((((((min(-75, (arr_11 [i_1] [i_2] [i_2] [i_2]))))) >= -9223372036854775806))) * ((((min((arr_22 [i_0] [i_0] [i_0] [i_0]), var_16))) ? ((25554 ? 0 : var_16)) : ((~(arr_2 [11] [i_2])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_34 [i_0] [i_1] [i_0] [i_1] [i_7] &= (((-(min(-660603549, 25535)))));
                                var_21 = (!-12);
                                var_22 = (((((var_10 + (arr_14 [i_8] [i_7] [i_2] [i_0] [13] [i_0])))) ? ((((max(25535, (arr_25 [i_0] [i_7] [i_2] [i_1] [i_0])))))) : ((+(((arr_32 [i_0] [i_1] [i_1] [i_7]) ? 2769974057 : (arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    arr_35 [i_0] [i_1] [i_2] = ((max(9223371487098961920, 1)) == (((((1122297690 <= (arr_25 [6] [i_1] [i_1] [i_1] [6])))))));
                }
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
