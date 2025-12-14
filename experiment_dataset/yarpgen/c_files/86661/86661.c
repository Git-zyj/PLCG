/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((-541150275948478564 ? var_4 : ((-((min(-17766, 17765)))))));
    var_12 ^= (((min(((max(39, 19560))), var_1)) / (max(((var_1 ? var_1 : -17766)), var_10))));
    var_13 = ((-1771508562 ? 82 : 8446552860285051867));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (arr_0 [i_2 + 3]);

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_4] = (arr_6 [i_2 + 3] [i_1] [i_2] [i_3]);
                            var_15 = (((((arr_3 [i_1] [i_2 + 1]) + 2147483647)) >> (((arr_11 [i_4] [i_4] [i_3] [i_2 + 2]) + 533596304))));
                            var_16 = var_7;
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (((~(arr_11 [i_0] [i_0] [i_0] [i_0]))));
        var_17 = (max(var_17, (((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_3))) ? (arr_7 [i_0 + 1] [6] [i_0] [i_0]) : (arr_4 [12] [i_0] [i_0 + 2]))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_18 ^= (max((((-180149961 ? 213 : (!939001812)))), ((((max((arr_9 [2] [i_5] [i_5] [i_5] [2]), (arr_10 [i_5] [14] [i_5] [14] [i_5])))) ? (1077 ^ 1481545542026248045) : ((1 ? 8122405049320556671 : 0))))));
        var_19 ^= (max(((1 ? 64458 : 0)), (((arr_16 [i_5]) / (arr_16 [i_5])))));
        arr_17 [i_5] [i_5] = ((34521 ? 1 : -43));
        arr_18 [i_5] [i_5] = (min((min((arr_0 [i_5]), (arr_4 [8] [i_5] [i_5]))), ((max(48, 1)))));
    }
    #pragma endscop
}
