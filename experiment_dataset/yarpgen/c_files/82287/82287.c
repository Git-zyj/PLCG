/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 >> (((!(((0 ? 10 : 10)))))));
    var_15 = (~var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((~246) * ((996258345 ? 996258355 : 64797)))))));
                            var_17 = 64809;
                            arr_11 [8] [i_1 + 1] [i_2] [i_3] [i_4] &= ((+(((arr_0 [i_1 + 1] [12]) ? (arr_0 [12] [i_0]) : (arr_10 [i_4] [i_1] [i_4] [i_3] [i_3])))));
                            var_18 = (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) ? ((((arr_8 [i_0] [i_2] [i_3] [17]) && (arr_2 [i_2] [i_2])))) : (((arr_3 [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [i_0] [i_2] [i_4] [i_4]) : (arr_0 [i_4] [i_4 + 1])))));
                        }
                    }
                }
                var_19 = -1;

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_20 -= 3298708940;
                    var_21 = (arr_12 [i_0] [i_1] [i_2] [i_0]);
                    var_22 = ((((((arr_12 [i_0] [10] [i_0] [i_0]) != 8533))) >> (((arr_13 [15] [15] [i_2] [i_5]) ? 1 : (arr_13 [i_0] [i_0] [i_2] [i_5])))));
                    var_23 = 0;
                }
            }
            arr_14 [2] [i_0] [i_1] = ((!(((-(71 || 185))))));
        }
        var_24 = 10;
    }
    #pragma endscop
}
