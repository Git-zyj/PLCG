/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (min(((-(arr_4 [i_0 - 1] [i_0 - 1] [i_2 - 1]))), (((59126 ? (arr_0 [i_0 - 1] [i_0]) : ((min((arr_2 [i_0]), 10))))))));
                    var_16 &= (arr_5 [i_1] [i_1] [i_2 + 1]);
                    var_17 = ((min(1, 691735948926518480)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            {
                var_18 = (max((arr_8 [i_3] [i_4 - 1] [i_3]), ((var_8 / (arr_9 [16] [i_4 - 1] [8])))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 &= (max((((arr_10 [i_4] [i_4 - 2] [i_4]) ? (arr_10 [i_4] [i_4 - 2] [i_4 - 1]) : (arr_10 [5] [i_4 - 2] [i_4 + 1]))), ((~(arr_10 [i_4] [i_4 + 1] [i_4])))));
                                var_20 = (max(var_20, ((((min(1, (arr_15 [i_6 - 2] [6] [i_6] [i_6 - 3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
