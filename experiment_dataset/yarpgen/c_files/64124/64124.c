/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = (max(6294, -15350));
                            var_15 *= arr_9 [10] [i_1] [i_1 - 1] [i_3] [i_1 - 1];
                        }
                    }
                }
                var_16 = (max(var_16, ((((arr_2 [i_0]) ? 18446744073709551605 : var_11)))));
                arr_12 [i_1] [i_0] = ((202 ? (arr_2 [i_1 - 1]) : 202));
                var_17 = ((196 ? 4279764339 : 53));
            }
        }
    }
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                var_19 = (arr_15 [i_5 + 3]);
                arr_19 [i_4] [i_4] [i_4] = (-14 ? (arr_4 [i_4 + 2] [0]) : (arr_5 [i_4 + 1] [i_4 + 2]));
                var_20 += (((~0) ? ((max((arr_7 [i_4 - 2] [i_5 + 3] [14]), (arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])))) : (arr_8 [i_5] [i_5 + 3] [i_5] [i_5 + 2] [i_5 - 1])));
            }
        }
    }
    var_21 &= var_10;
    #pragma endscop
}
