/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((var_6 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3 - 1] [i_4 + 1] [i_4] = (arr_9 [i_2] [i_2] [i_1] [i_2]);
                                var_11 = (((arr_3 [i_0] [i_1 + 2] [0]) ? ((((arr_6 [i_1] [i_2] [i_3 - 1] [i_1]) == (arr_6 [i_4] [i_3] [i_2] [i_1 + 1])))) : (arr_10 [i_4] [19] [i_2] [i_0] [i_0])));
                                var_12 = (((~((~(arr_10 [i_4] [i_3 - 2] [i_2] [i_1] [i_0]))))));
                                arr_13 [i_0] [i_1] [i_1] [12] [i_4 - 3] [i_2] = ((var_4 - (15325098753001698987 * 1744614197)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_13 ^= var_5;
        var_14 ^= (((((2601772801 & (arr_10 [i_5] [i_5] [0] [i_5] [1])))) ? ((~((~(arr_14 [i_5]))))) : 1));
    }
    var_15 = (max(3121645320707852629, (15325098753001698987 <= var_7)));
    #pragma endscop
}
