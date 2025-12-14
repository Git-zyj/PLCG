/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_8);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = -8852086996655569172;
        arr_4 [i_0] [14] = ((((((arr_0 [i_0]) & (arr_0 [i_0])))) ? (((arr_0 [3]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((var_12 ^ (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = ((~(arr_5 [i_1])));
        var_16 += (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_17 [i_1] [5] [i_1] = var_3;
                    arr_18 [i_1] [i_1] [i_1] = ((~(min(18446744073709551615, (arr_11 [i_1 + 1] [i_2 - 2])))));
                    arr_19 [i_1 + 2] [i_1 + 2] [i_1] = ((23779 ? var_11 : 0));
                    arr_20 [i_1] [i_1] = (((~1522099684) ? (arr_15 [i_2 - 3] [i_2 + 1]) : (((arr_15 [i_2 + 2] [i_2 - 3]) << (((arr_15 [i_2 + 2] [i_2 + 2]) - 7384183725643559241))))));
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
