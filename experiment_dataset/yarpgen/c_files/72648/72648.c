/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(-1694407719, 78)) | 33));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 += (max((max((((arr_2 [i_0] [i_0]) ? var_4 : (arr_6 [1] [1] [i_2] [i_2]))), ((10863 ? -2138467081 : -10)))), var_1));
                                var_12 = (max((max((arr_8 [i_0] [i_1] [i_0]), ((((-17 + 2147483647) << (((arr_2 [i_3] [i_4 - 1]) - 13014))))))), var_7));
                            }
                        }
                    }
                    var_13 = (((((10 ? -var_7 : (min((arr_0 [i_0]), 251857553))))) ? ((((var_4 ? (arr_9 [4] [4] [4] [4]) : 24524)) + ((max(var_8, -42))))) : (arr_6 [i_0] [i_1] [i_2] [i_0])));
                    var_14 = ((((max(((-2138467107 ? 2138467107 : 2133048825)), (((arr_7 [i_0] [i_1] [i_0] [i_0]) ^ (arr_4 [i_0])))))) ? ((~(arr_11 [i_0] [i_2] [7] [i_0] [i_0] [i_0]))) : (arr_9 [9] [0] [2] [16])));
                }
            }
        }
    }
    #pragma endscop
}
