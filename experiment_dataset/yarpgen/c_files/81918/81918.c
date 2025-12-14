/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_1) & (min((max(var_4, var_8)), (var_11 && var_1)))));
    var_15 = (min((var_4 - var_5), (((var_5 | var_1) - -var_4))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((arr_12 [i_0] [i_3]) >= ((((!((min((arr_7 [4] [i_1] [i_1] [i_3]), (arr_9 [1] [5] [2] [i_3])))))))))))));
                            var_17 -= ((((((-(arr_7 [i_0] [i_1 - 1] [i_2] [13]))) % (arr_1 [i_1])))));
                            var_18 = ((-(arr_8 [i_0] [0] [i_2])));
                            var_19 = (min(var_19, ((max((min(((((arr_0 [10]) | (arr_10 [9] [9] [9] [i_0])))), ((-(arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [18] [i_3] [1]))))), (arr_2 [i_0] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_9 [i_0] [6] [i_4 + 3] [1])));
                            var_21 = (min(var_21, (((~((~(arr_0 [1]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_22 = (max((max((((arr_14 [i_1] [i_1] [i_7]) % (arr_18 [i_0 + 1] [6] [i_6] [i_0 + 1]))), (((arr_4 [1] [i_0]) - (arr_11 [i_0] [15] [i_0] [i_1] [i_0] [i_6]))))), (arr_12 [i_0] [i_0])));
                            var_23 = ((+(((min((arr_5 [13] [10] [i_0]), (arr_2 [i_1] [i_6]))) & (((arr_14 [i_7] [2] [2]) & (arr_5 [i_0] [16] [16])))))));
                        }
                    }
                }
                var_24 = ((!(arr_17 [i_0 + 1] [i_0])));
                var_25 = ((-(arr_0 [i_0 - 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_26 &= (arr_16 [18] [18] [i_10] [12]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_27 = ((~(arr_31 [i_8] [i_8] [i_8] [0])));
                                var_28 = (((max((((~(arr_28 [i_8] [i_10] [i_12])))), (min((arr_10 [i_9] [4] [i_9] [6]), (arr_15 [6] [6] [i_12]))))) & ((((!(((-(arr_16 [i_8] [1] [16] [i_9]))))))))));
                            }
                        }
                    }
                    var_29 = (arr_30 [i_10] [i_9] [i_8]);
                    var_30 = (arr_36 [i_8] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
