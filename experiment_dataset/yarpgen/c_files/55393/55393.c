/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((var_1 ? var_2 : var_17))) << (var_14 - 22895))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [8] = (~var_4);
                    var_21 = ((max((arr_1 [i_0] [i_1]), (arr_1 [i_2] [i_0]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_22 = (((((var_15 ? (arr_2 [i_3] [i_4] [i_3]) : var_11))) ? (max((arr_2 [i_3] [i_4] [i_3]), (arr_7 [i_3] [i_4]))) : var_14));
                arr_14 [i_3] [i_3] = arr_4 [i_3] [15] [i_4];
            }
        }
    }
    #pragma endscop
}
