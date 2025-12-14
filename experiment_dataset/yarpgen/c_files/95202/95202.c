/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = ((((((((arr_2 [i_0]) | var_5)) & (((~(arr_2 [i_1]))))))) ? ((var_8 ? (((arr_7 [i_3]) ? var_9 : (arr_10 [i_2] [i_0 - 1] [i_2] [i_2]))) : (var_9 & var_8))) : var_10));
                        var_14 = (arr_1 [i_3] [i_1 + 2]);
                    }
                }
            }
        }
        var_15 = (min(var_15, (((((arr_12 [i_0 - 1] [i_0 + 1] [i_0] [2] [i_0 - 1]) - var_2))))));
        var_16 = (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))) - (((arr_9 [i_0] [i_0 - 1] [i_0] [i_0]) ? ((27513 >> (arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0]))) : (((!(arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
        arr_13 [i_0] = (((((max(-1, (arr_3 [i_0]))))) ? ((31487 ? 0 : (arr_8 [i_0] [i_0 + 1]))) : (-1317202486 + 65535)));
    }
    #pragma endscop
}
