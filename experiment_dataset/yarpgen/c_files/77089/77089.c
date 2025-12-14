/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [19] [i_2] = (((arr_8 [i_1] [i_2]) ? (((arr_0 [i_0 + 1] [i_0 - 3]) ? -1 : (arr_0 [i_0 + 1] [i_0 + 1]))) : ((((arr_1 [i_0 + 3]) ? var_11 : (arr_1 [i_0 + 3]))))));
                    arr_11 [i_0 - 2] [i_2] [i_0 - 2] = (arr_5 [1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((-(arr_2 [i_3 - 3]))))));
                                var_14 = (max(var_14, (((((((arr_5 [i_0 - 3] [i_0] [i_0]) * (arr_5 [i_0] [i_0 - 4] [i_0])))) ? (((arr_5 [i_0] [i_2 - 1] [i_4]) ? (arr_5 [i_2] [i_2] [i_2 - 1]) : (arr_5 [i_0] [i_0] [i_0]))) : (((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) - (arr_5 [i_4] [i_2] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((~(~var_7)));
    #pragma endscop
}
