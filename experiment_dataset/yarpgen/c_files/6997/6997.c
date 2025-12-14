/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] &= ((~(min((max(var_11, var_7)), ((var_5 ? (arr_3 [i_2] [1] [i_0]) : var_14))))));
                        var_18 = max((arr_2 [i_1 - 2] [i_1 - 1]), (arr_2 [i_1 - 2] [i_1 - 2]));
                        arr_14 [i_0] [i_0] [i_1] [15] [i_3] = ((!((min((((var_5 ? 7025 : (arr_7 [17] [i_1 - 2] [i_0])))), (min(1, 11206172214279200713)))))));
                    }
                }
            }
        }
        var_19 |= 1;
        var_20 = ((min((arr_0 [i_0]), (!1))));
        arr_15 [i_0] [i_0] = (!2556225176497237641);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_19 [i_4] = ((+(((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_11 [7] [i_4] [6] [7] [i_4])))));
        var_21 = var_1;
    }
    var_22 = ((~(((var_8 >= ((min(var_2, var_9))))))));
    #pragma endscop
}
