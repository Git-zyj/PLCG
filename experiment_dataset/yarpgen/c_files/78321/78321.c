/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_11 = ((((max(1194252913, 8286622448920231724))) ? (((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))) : ((-13432 ? -255246056 : 18446744073709551600))));
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = ((18446744073709551611 ? 18446744073709551613 : (((~(arr_1 [i_0] [i_1]))))));
                    var_12 = (max(var_12, -112877382));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((((!(((arr_0 [i_0]) || (arr_7 [i_0 + 1] [i_1] [i_3 + 1]))))) ? (((18446744073709551613 ? ((max(14, (arr_10 [i_0 - 1] [i_1] [i_3 - 2])))) : (-670130686 && var_7)))) : (((((-(arr_10 [i_0 + 1] [i_0 + 1] [i_4])))) ? -20 : (((1 ? (arr_1 [i_0] [i_0]) : -670130686))))))))));
                            var_14 = (((arr_7 [i_0 - 1] [i_3 - 2] [i_4]) || (((var_10 ? ((var_9 ? (arr_3 [i_0 + 1]) : (arr_5 [i_0] [i_0] [i_0]))) : -1)))));
                            arr_13 [i_0 + 1] [i_0] = (~1);
                        }
                    }
                }
                arr_14 [i_0] = (min((((arr_10 [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_10 [i_0] [i_1 + 1] [i_1 + 1]) : (arr_10 [i_0 - 1] [i_0] [i_1 + 1]))), (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_10 [i_0] [i_1 + 1] [i_1 + 1]) : (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
            }
        }
    }
    var_15 &= -2090046924;
    #pragma endscop
}
