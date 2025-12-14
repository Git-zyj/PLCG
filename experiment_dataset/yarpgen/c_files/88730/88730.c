/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 |= var_10;
                                var_18 = ((((((var_2 + (arr_10 [i_0] [i_0] [i_2] [i_4]))) << (((arr_9 [i_0] [i_0 - 4] [i_0] [i_0 + 2] [i_0]) + 117)))) * (((arr_1 [i_0 + 2]) & (arr_2 [i_3 + 2])))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = (((max(0, (arr_10 [i_0] [i_0] [i_0 - 3] [i_0 - 4])))) || (arr_8 [i_2] [i_2] [i_2] [i_2]));
                }
            }
        }
    }
    var_19 |= var_11;
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6 + 3] [i_7] [i_8] |= ((13260377519229351696 ? ((min(var_4, ((min((arr_0 [i_6] [i_8]), var_10)))))) : (((((var_3 ? (arr_20 [i_5] [i_5] [i_7] [i_8]) : (arr_7 [i_7] [i_6 + 1] [4])))) ? ((5186366554480199911 ? 5186366554480199922 : 13260377519229351691)) : (var_5 * var_9)))));
                            var_21 = (((min((((var_16 ? (arr_6 [16] [i_7] [i_7] [i_7]) : var_5))), 5186366554480199920)) == 5186366554480199914));
                        }
                    }
                }
                var_22 = (min(var_22, (5186366554480199921 - 5186366554480199921)));
                arr_27 [i_5] [1] [i_5] = ((((((((arr_8 [i_5] [i_5] [i_5] [i_5]) <= (arr_15 [i_5])))) << ((((5186366554480199952 ? 13260377519229351691 : (arr_17 [i_5] [i_5]))) - 13260377519229351670)))) % (((arr_21 [i_6 - 1] [13] [i_6]) ? var_12 : var_6))));
                arr_28 [i_5] [i_5] [i_6] |= (max(((((arr_11 [i_6 + 1] [15] [i_6 + 2] [i_6] [i_6] [15]) ? (arr_3 [i_5] [i_6 + 4] [i_5]) : (arr_12 [i_6] [16] [i_6 + 4] [i_6] [i_6 + 2])))), (max(5186366554480199941, 5186366554480199924))));
                arr_29 [i_5] |= min(var_9, ((13260377519229351672 ? (((((arr_18 [2] [i_6 + 3]) >= (arr_22 [i_5] [i_6 + 3] [15]))))) : 5186366554480199906)));
            }
        }
    }
    #pragma endscop
}
