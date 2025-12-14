/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [13] = 247;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 += ((9223372036854775807 ? (arr_8 [12] [i_1] [i_2]) : (arr_0 [i_3])));
                        arr_12 [i_0 + 1] [i_0] [11] [i_0] [i_0 + 1] [11] = ((((!((!(arr_5 [i_0 + 2] [i_0 + 2]))))) ? (arr_4 [i_0]) : ((max((arr_11 [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0 - 2] [i_0 + 1]), (arr_11 [i_0 + 1] [i_0 - 1] [4] [i_0 + 1] [i_0 + 3]))))));
                        var_17 = (min(var_17, (((arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 2]) & (max((arr_7 [i_1] [i_2] [i_3]), (arr_7 [i_0 + 3] [i_0 - 3] [i_0])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        var_18 = (max(var_18, ((min((max(2106810045, (max(43, (arr_15 [i_0] [i_0] [i_6 - 3]))))), 0)))));

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_19 = (arr_4 [i_0 - 1]);
                            var_20 = (((((~(max(-223853740, 1768844594))))) ? (min(((4271060118 ? (arr_8 [i_0] [i_5] [i_0]) : 43)), 249)) : (arr_13 [i_6] [i_6] [i_0 - 1])));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_28 [i_0] [i_8] [i_9] = ((-(arr_21 [i_0] [i_0] [i_8] [i_8] [i_9] [15] [i_9])));
                    var_21 = (arr_26 [i_0] [i_8] [i_9]);
                }
            }
        }
    }
    var_22 = min((~-5744798332553117435), (((((max(22, var_4))) ? var_9 : ((min(var_15, 43)))))));
    #pragma endscop
}
