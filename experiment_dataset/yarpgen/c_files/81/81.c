/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = (max((min(0, (arr_7 [i_0] [i_2 - 1] [i_2 - 1]))), (19868 + var_5)));
                    arr_11 [i_0] [i_0] [i_0] = (arr_4 [i_2 + 2] [i_2 - 1] [5]);
                    arr_12 [i_0] [i_0] [i_2 - 1] [i_1] = (max(((var_5 ? -1564013803 : (arr_2 [i_2 - 1] [i_1]))), (((arr_2 [i_1] [i_0]) ? (arr_2 [0] [i_1]) : -207727406))));
                }
            }
        }
    }
    var_18 = var_7;
    var_19 &= (((var_5 == (min(var_12, -1)))) ? (min(var_9, 18014398509481983)) : ((min((~var_4), var_4))));
    #pragma endscop
}
