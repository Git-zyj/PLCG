/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min(var_18, (max(var_6, -var_1))));
    var_20 ^= (var_4 / var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] = (((arr_0 [7]) > (((((((arr_3 [2]) ? 27767 : (arr_7 [i_1 - 1] [i_1 - 1]))) < var_3))))));
                    arr_11 [i_2] = (max(209, ((4014135187 ? ((-1649957463 ? var_8 : (arr_6 [i_0] [i_0] [i_0]))) : 65273))));
                }
            }
        }
    }
    #pragma endscop
}
