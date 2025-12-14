/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = 18381819678089992171;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_9 [14] [i_1] [i_1] &= (var_11 || 16382);
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (arr_2 [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] = (((((((17500 ? var_9 : (arr_0 [i_0])))) || (((var_2 ? -8388608 : var_7))))) ? (((arr_8 [i_0] [i_1] [i_1 + 4] [i_0]) ? (arr_8 [i_3] [i_1 - 2] [i_1 + 4] [i_0]) : (arr_8 [3] [3] [i_1 + 4] [i_0]))) : (arr_8 [i_0] [i_1] [i_3] [i_0])));
                    var_16 = (((((arr_11 [i_0] [i_0] [7] [i_3]) ? ((max(var_4, var_8))) : var_1)) ^ var_11));
                    var_17 = (min(var_17, var_11));
                    arr_14 [17] [i_0] [i_3] = ((~var_4) ? var_0 : ((var_4 ? var_13 : var_5)));
                }
                arr_15 [i_0] [i_0] [i_0] = 17500;
            }
        }
    }
    #pragma endscop
}
