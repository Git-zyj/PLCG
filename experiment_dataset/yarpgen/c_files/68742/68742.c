/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_2;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [7] [i_1 - 1] [i_0] = (max(((~(min((arr_2 [i_0]), 29)))), ((-((9223372036854775807 ? var_2 : (arr_4 [i_0] [i_1 - 3] [i_1 - 3])))))));
                    arr_9 [15] [i_1] [i_2 + 2] = ((((var_4 ? var_9 : 0))));
                    arr_10 [i_0] [11] = ((32256 ? (min(1142007599, 6)) : (max(((126 ? (arr_3 [i_0] [14]) : 1142007599)), (22 == var_0)))));
                    arr_11 [i_0] [2] [i_2] = ((+(((52378 | var_1) ? (-9223372036854775807 - 1) : ((13157 ? (-9223372036854775807 - 1) : 250))))));
                }
            }
        }
        arr_12 [3] [i_0] = ((30446 ? (arr_5 [1] [i_0 - 1]) : (min(18446744073709551606, -31703))));
        arr_13 [i_0] = 1;

        /* vectorizable */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            arr_16 [i_0] [i_0] [i_0] = 5885666576971203351;
            arr_17 [i_0 - 1] = (((arr_1 [i_0] [i_3]) ? ((((arr_15 [i_0] [i_0] [i_3 + 1]) ? 250 : var_10))) : 365867005650329854));
            arr_18 [2] = (arr_4 [i_0] [i_3 + 1] [6]);
            arr_19 [i_0] = ((-(~-5238910092625889835)));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            arr_23 [i_4] = ((!(arr_21 [i_0 - 1])));
            arr_24 [20] = (-1142007599 ? 5329709292880875041 : (959846731 * 2589));
        }
    }
    #pragma endscop
}
