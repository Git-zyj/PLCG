/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 ^= (max(0, ((-92 & (arr_1 [i_0 - 1])))));
        var_15 = (max(var_15, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            arr_14 [17] [i_2] [9] [i_2] [i_3] [i_4] [i_5 + 4] = 200;
                            arr_15 [i_1] [17] [12] [i_1] [i_2] [i_5] = (min(-94, -114));
                            arr_16 [i_1] [i_1] [i_3] [i_1] [i_2] = (max(192, 240));
                        }
                        var_16 = (min((((!(var_12 < var_13)))), -52));
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_17 = (min(var_17, (-18 + 4)));
            arr_20 [i_1] [i_1] [i_1] = -858172951;
            arr_21 [i_1] [i_1] [16] = (min(((min(-63, var_13))), var_2));
            arr_22 [i_1] [i_6] = (((((-(~var_11)))) ? ((min((arr_13 [i_6 - 1] [i_1] [i_6] [i_6]), var_0))) : (((arr_3 [i_6 - 2]) ? ((16443 ? var_9 : (arr_17 [10]))) : -var_8))));
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_18 += arr_17 [6];
                        arr_33 [i_7] [i_7 + 1] [i_7 - 3] [i_7] = (arr_6 [i_8]);
                    }
                }
            }
        }
        var_19 += (arr_9 [5] [i_7 + 2] [i_7 + 4] [i_7 + 4]);
        var_20 = (((arr_13 [i_7] [i_7] [i_7] [i_7 - 1]) || (arr_24 [i_7] [4])));
        var_21 |= var_12;
        var_22 &= (((((255 | (arr_24 [i_7] [i_7])))) ? (arr_8 [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 - 2]) : var_3));
    }
    #pragma endscop
}
