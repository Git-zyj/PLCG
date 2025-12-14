/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 247;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((~(24 >= 234)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (arr_9 [i_0] [i_1] [i_2] [i_3])));
                        arr_10 [i_3] [i_1] [7] [i_3] = var_12;
                    }
                    var_17 = (min(var_17, (((arr_5 [i_2] [i_2] [i_1] [i_0]) ? ((~(arr_8 [18] [i_2] [i_1] [i_0]))) : (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2])))));
                    var_18 = ((!(((arr_8 [i_0] [i_1] [i_1] [i_2]) || (((arr_7 [i_0] [i_1] [i_1] [i_2] [i_2]) && (arr_3 [i_2] [i_0] [i_0])))))));
                    arr_11 [i_2] [i_2] [i_1] [15] = ((225 * (((arr_7 [i_0] [i_1] [i_1] [i_2] [i_0]) ? 9513890526734597932 : 1))));
                }
            }
        }
    }
    #pragma endscop
}
