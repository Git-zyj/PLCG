/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((~(((!(arr_4 [i_1 - 1]))))));
                arr_6 [i_0] [3] [18] = (max((min(42, 3934061751)), (arr_2 [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (max(((max((((arr_4 [i_1]) ? var_1 : var_0)), var_1))), ((min(var_7, (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    var_14 = (min((max((arr_8 [i_1 - 1]), (arr_8 [i_1]))), (~3934061760)));
                    arr_10 [i_1 - 1] [i_1 - 1] [i_2] [i_0] = 57;
                    arr_11 [i_0] [i_1] [10] [10] = ((((max((~var_2), var_10))) ? (max((max(var_0, (arr_5 [i_2] [i_2]))), (var_2 * var_8))) : (arr_4 [i_2])));
                    arr_12 [20] [i_0] [i_0] = (max((max(var_6, (var_2 / var_2))), ((min((arr_1 [i_1 - 1] [i_1 - 1]), var_10)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = ((~(max((arr_4 [i_1 - 1]), var_5))));
                    arr_15 [i_0] [i_1] [i_3] = ((((min(-1, 64))) == (((arr_1 [i_1 - 1] [i_1 - 1]) + (arr_0 [i_1 - 1])))));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = 192;
    #pragma endscop
}
