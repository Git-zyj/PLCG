/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((((((arr_1 [i_1 - 1]) | (arr_2 [i_1 - 1] [i_1 + 1])))) + (((((~(arr_1 [i_1 - 1])))) ? ((((arr_4 [i_1]) ? (arr_3 [2] [i_0]) : (arr_0 [i_0])))) : (arr_1 [3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [14] [i_1] [i_0] = (~3174363421771115608);
                            arr_11 [i_0] [20] [20] [10] [3] [i_0] = ((~(((arr_9 [i_3] [i_2] [i_1 - 1] [i_0] [5]) ? (arr_9 [i_1 - 1] [i_2] [i_1 - 1] [i_0] [19]) : (arr_5 [11] [1] [11] [6])))));
                            var_12 = (max(var_12, (((((!(arr_3 [i_1] [i_3]))) ? ((((((arr_5 [i_2] [i_2] [i_2] [15]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_5 [1] [12] [i_2] [i_3])))) ? (((arr_4 [i_0]) + (arr_3 [i_0] [i_0]))) : (arr_0 [1]))) : (((((~(arr_3 [i_0] [16])))) ? (arr_4 [i_3]) : ((~(arr_6 [i_2] [13] [i_2] [15]))))))))));
                        }
                    }
                }
                var_13 = (arr_6 [8] [i_1 - 1] [i_0] [8]);
            }
        }
    }
    var_14 = ((1 ? 112 : 114));
    #pragma endscop
}
