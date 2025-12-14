/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 -= ((var_11 & ((+(((arr_4 [i_3] [i_0]) ? (arr_2 [i_2] [i_3]) : 1605961326))))));
                            var_21 |= ((((((arr_6 [i_3 + 2] [i_3 + 1] [i_2 + 1]) == (arr_6 [i_3] [i_3 - 2] [i_2 - 1])))) > var_11));
                            arr_13 [i_0] [i_2 + 1] [15] [15] [i_0] = (15438001081770781071 ? (min(2147483621, 3759174130)) : var_18);
                            arr_14 [i_3 - 2] [i_1 + 1] [i_2] [i_3] [i_0] = ((((arr_5 [i_0]) != (arr_10 [i_2 - 1] [i_2 + 1] [i_3 + 1] [12]))));
                            arr_15 [i_0] [i_3 + 2] [i_0] [i_1 - 1] = (arr_12 [1]);
                        }
                    }
                }
                var_22 = 0;
                var_23 = ((!(~var_7)));
            }
        }
    }
    var_24 = var_2;
    var_25 = (max(var_25, var_12));
    var_26 |= var_19;
    #pragma endscop
}
