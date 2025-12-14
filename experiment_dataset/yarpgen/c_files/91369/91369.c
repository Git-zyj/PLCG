/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((~(~var_9))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [4] [i_1] [2] = (!-var_9);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [4] [i_3] [i_2] [i_3] [4] = (((((((var_10 ? 8969046020091809315 : var_2))) ? var_7 : ((var_8 ? 1 : 2309459586400434088)))) + (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        var_14 = (((((arr_11 [i_0] [i_3] [i_1] [i_1 + 3]) / var_5)) * ((var_8 >> (((arr_7 [i_0 - 1] [i_1 - 2] [i_1 - 2]) + 6513))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [16] [i_0] [0] = (arr_3 [i_0 + 1] [i_1 - 1]);
                        arr_16 [1] [i_1] [i_1] [i_1] = (arr_4 [i_0] [7] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 = (min(var_15, -var_0));
                        var_16 = (((arr_5 [i_0 - 1] [12] [i_0 - 1]) >> (((((arr_2 [i_2]) ? (arr_2 [i_0 - 1]) : (arr_7 [12] [i_0] [i_0]))) - 29813))));
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((var_6 ? (var_0 | var_9) : var_7))));
    #pragma endscop
}
