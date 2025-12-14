/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 27536));
    var_20 |= (min(var_14, -27537));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 = ((!(((-361 ? (arr_0 [i_0] [i_0]) : -90)))));
        var_22 ^= 61240;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_23 = (min(var_23, (((((~(arr_7 [i_0] [i_1 - 1] [4]))) << 5)))));
                        var_24 = (max(var_24, 62));
                    }
                }
            }
        }
        arr_10 [i_0] = -78;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_25 = (min(var_25, (((22409 != (((arr_12 [i_4] [i_4]) + (arr_12 [i_4] [i_4]))))))));
        var_26 = (max(var_26, (max((arr_11 [i_4]), (min(((-1715619461 ? (arr_12 [i_4] [i_4]) : 8787503087616)), 7))))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_27 = (min(var_27, (((+(min((arr_7 [i_5] [i_5 + 1] [i_5]), (max(2147483647, 62671)))))))));
        var_28 = min((arr_12 [i_5 - 1] [i_5]), (arr_12 [i_5 + 1] [i_5]));
    }
    #pragma endscop
}
