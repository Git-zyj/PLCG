/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((0 ? var_7 : (~-1552576643)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ^ ((-1552576643 ? (1552576643 / var_12) : (min((arr_2 [i_0]), var_12))))));
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_2 - 2] = (((max((arr_3 [i_0]), var_6)) >= (((max((arr_1 [i_0]), (arr_1 [i_0])))))));
                    var_15 = (min(var_15, var_6));
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
