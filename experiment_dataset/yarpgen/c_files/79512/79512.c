/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_3 - 1] [i_0 - 3]);
                        arr_12 [i_1] = 64;
                    }
                    arr_13 [i_0] [5] [i_2] [i_2] = var_11;
                    arr_14 [1] [3] [i_0] = var_8;
                }
            }
        }
    }
    var_20 = var_4;
    var_21 &= (var_18 ? var_0 : (((~((var_5 ? 61440 : var_9))))));
    #pragma endscop
}
