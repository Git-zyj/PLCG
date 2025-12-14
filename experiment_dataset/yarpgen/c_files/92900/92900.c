/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = (arr_0 [i_0]);
                            var_13 = ((((((~var_5) ? ((~(arr_5 [i_0] [i_0] [7]))) : (arr_5 [i_0] [i_0 - 1] [i_0 - 1])))) ? (arr_6 [i_0]) : (arr_2 [i_0 - 1] [i_0 - 1])));
                            arr_11 [i_0] [i_1] [i_1] [i_0] [i_3 - 1] [19] = (arr_4 [i_3] [i_3] [i_3 + 4]);
                            var_14 += (arr_6 [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [12] = (arr_6 [i_0]);
                            var_15 = (((((arr_8 [i_0 - 1] [i_0 - 1] [i_5 - 1] [i_5 - 1]) == (arr_8 [i_0 - 1] [i_0 - 1] [i_5 - 1] [i_5 + 4]))) ? var_2 : (arr_13 [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_16 &= (min((~var_6), ((((var_11 + var_0) > var_1)))));
    #pragma endscop
}
