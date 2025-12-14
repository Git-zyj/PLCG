/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((((arr_7 [i_0] [i_1] [i_2] [i_2]) ? (arr_7 [i_0] [i_1] [i_2] [i_0]) : ((39 ? var_8 : 39))))) ? (max(((min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_6 [3] [i_2] [i_2])))), (max(56105, (arr_5 [i_0] [i_1]))))) : (((((arr_3 [i_0] [i_0] [i_2]) && (((var_1 ? 53 : var_7))))))));
                    var_13 |= (max((max((arr_1 [i_0]), (arr_0 [i_1]))), (~44590)));
                }
            }
        }
        arr_8 [i_0] = ((14375 ? (528870401680911339 + 8074826729479477752) : var_10));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 += ((-(arr_10 [i_3])));
        var_15 = (max(var_15, ((((arr_10 [20]) >> (((arr_10 [i_3]) - 2724457745699468205)))))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_16 = (((((var_4 ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 1])))) ? ((-3205538566694034023 ? ((var_7 & (arr_20 [i_4] [i_5] [i_5]))) : (min(var_8, (arr_20 [i_4] [i_7] [i_4]))))) : ((((!((!(arr_22 [i_4 - 2] [i_4] [i_4] [i_4])))))))));
                            var_17 = (min(((0 ? (arr_18 [i_4] [i_4] [i_4 - 1] [i_8]) : 8074826729479477752)), -9223372036854775797));
                        }
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            var_18 = (3818834103728783990 ? (~-3205538566694034023) : (1 && 2949946312464874898));
                            arr_26 [i_4] [i_5] [i_4] = (((~var_3) ? (((!(arr_18 [i_4 - 1] [i_4 - 1] [i_6] [17])))) : (((!((min(131072, var_2))))))));
                        }
                        var_19 = (max(var_19, 9223372036854775779));
                    }
                }
            }
        }
        arr_27 [i_4] = (!-39);
    }
    var_20 &= var_9;
    #pragma endscop
}
