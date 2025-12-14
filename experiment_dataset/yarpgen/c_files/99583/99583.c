/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 *= ((max(-44, var_15)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] = (((((arr_2 [i_1] [i_2 - 3] [i_3 - 1]) && (arr_2 [i_0 + 1] [i_0] [i_0])))) * ((~(arr_2 [i_2] [i_1 + 2] [i_3 + 1]))));
                            var_21 = ((!(5547 < 40061)));
                            arr_10 [i_0] [i_1 - 2] [i_3] &= ((((!((max(-44, 1))))) ? var_5 : (((var_17 || var_7) | -3881393648))));
                        }
                    }
                }
            }
        }
    }
    var_22 *= var_4;
    var_23 = (max(-1352661144777233911, 9223372036854775807));
    #pragma endscop
}
