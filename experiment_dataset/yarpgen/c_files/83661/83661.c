/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [7] = ((-((min(var_8, var_2)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (arr_0 [i_0 - 1]);
            arr_6 [i_0 + 1] [i_0 + 1] = (~(arr_0 [i_0 - 1]));
            var_12 = (arr_1 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_13 = (max(var_13, ((max((arr_8 [i_3] [i_2] [i_0]), ((-var_2 ? (((min(var_7, (arr_3 [i_0] [i_2] [6]))))) : (((arr_4 [i_3]) ? (arr_0 [i_2]) : var_2)))))))));
                    var_14 = ((min(0, 3900151525)));
                    var_15 += (arr_4 [i_0]);
                }
            }
        }
        var_16 = ((var_3 ? 31549 : (arr_9 [i_0] [i_0 + 1] [18])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_18 [14] [2] [i_5] = (arr_17 [i_0] [i_0] [i_0]);
                    var_17 = (arr_9 [i_0 + 1] [i_4] [i_5 - 1]);
                }
            }
        }
    }
    var_18 = (min(var_18, (((-((var_4 * (var_2 / var_3))))))));
    #pragma endscop
}
