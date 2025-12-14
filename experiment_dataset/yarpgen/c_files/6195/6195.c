/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_2] = (var_10 | 55647);
                    arr_7 [i_2] [i_2 - 1] = (((arr_5 [i_0] [i_0] [14] [i_0]) >> ((((17538675443427721897 ? 18446744073709551615 : 1)) - 18446744073709551595))));
                }
            }
        }
        arr_8 [i_0] = (~var_3);
        var_14 += (((arr_0 [3] [3]) ? 6 : (arr_0 [i_0] [i_0])));
        arr_9 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = min(((65533 ? (arr_11 [i_3] [i_3]) : (arr_12 [i_3 - 1] [i_3 - 2]))), (((~(max((arr_11 [i_3] [i_3]), 1102584606111408248))))));
        var_15 += (min((min(17538675443427721883, 58607)), (arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2] [6])));
        var_16 = (max(var_16, (~1)));
        var_17 = (min(((min((arr_11 [i_3 - 1] [i_3]), (!var_9)))), (((((~(arr_11 [i_3] [i_3])))) ? 1 : ((max(14598, (arr_2 [i_3] [i_3]))))))));
        var_18 += ((-(((~794950121) ? (arr_10 [i_3]) : (((arr_1 [i_3 - 2]) ? (arr_1 [i_3 - 1]) : 7))))));
    }
    #pragma endscop
}
