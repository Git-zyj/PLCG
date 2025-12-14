/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_3]);
                            var_16 = (max(var_16, (arr_1 [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [i_1] [i_5] = ((((((((arr_4 [i_0] [i_1]) && 211)) ? 0 : (arr_0 [i_5])))) ? (((((min((arr_10 [i_0] [9] [i_5]), var_1))) ? var_12 : (arr_7 [i_4 + 1])))) : (min((arr_12 [i_0] [i_4 - 3] [i_1]), 65528))));
                            var_17 = (min(var_9, (arr_10 [i_0] [i_0] [i_0])));
                            arr_18 [13] [i_1] [i_4] [i_5] [i_5] [i_4] = (max((arr_0 [i_4]), (708540635 ^ var_14)));
                            var_18 = ((!(((arr_9 [i_0] [i_1] [i_1]) == var_12))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                arr_24 [i_7] = (((arr_7 [i_6]) ? (min(1967363311, (arr_14 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7]))) : ((((((arr_14 [i_6] [i_7] [15] [i_7] [i_6] [i_7]) << (var_2 - 564474029)))) ? (arr_2 [i_6]) : (min(152, 1967363293))))));
                var_20 &= ((((min(2327604003, (arr_6 [i_6])))) ? ((-(arr_22 [i_6]))) : ((((1967363272 >= (((arr_10 [i_6] [i_6] [i_7]) ? var_4 : (arr_9 [i_6] [i_6] [i_7])))))))));
            }
        }
    }
    #pragma endscop
}
