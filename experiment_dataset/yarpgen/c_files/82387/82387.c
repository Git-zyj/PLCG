/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [2] [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0]))) + (arr_1 [i_0])));
        var_16 = (((((arr_1 [3]) & 122))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((((arr_0 [i_1 + 2] [i_0]) ? -var_14 : (arr_6 [i_2 + 3] [i_1 + 2] [i_2 + 3]))) & (arr_3 [i_1 - 1] [i_2 - 3])));
                    var_17 = ((((min(0, 1770514665))) ? 3348089672 : (min(-1349280155, 17112626611447346718))));
                    var_18 = ((!(((4108835333337131615 ? 29 : 17112626611447346718)))));
                }
            }
        }
        var_19 -= 2147483647;
    }
    var_20 = (min((var_3 <= 1534065957728896121), ((~(~var_15)))));
    var_21 = var_3;
    #pragma endscop
}
