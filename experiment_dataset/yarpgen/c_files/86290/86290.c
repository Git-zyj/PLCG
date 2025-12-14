/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [19] = (9940852223907816227 >= 9940852223907816227);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 ^= ((((((arr_1 [i_0 - 1]) ? (arr_4 [i_0 - 3] [i_1] [i_2]) : (arr_1 [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (min((arr_4 [i_0 - 2] [i_1] [i_2]), (arr_1 [i_0 + 1])))));
                    var_19 = (min(var_19, (arr_0 [4] [i_0 - 2])));
                    var_20 = var_0;
                    var_21 = (min(var_9, ((((min((arr_1 [i_1]), (arr_6 [i_0] [15] [13]))) < (arr_6 [i_2] [i_0] [i_0 - 3]))))));
                    arr_7 [i_0] [i_0] [i_2] [i_2] = var_15;
                }
            }
        }
        arr_8 [6] = (arr_3 [0] [21]);
    }
    var_22 = (((min(var_9, ((var_17 ? var_6 : var_0)))) / ((min(((var_14 ? var_11 : var_4)), var_8)))));
    #pragma endscop
}
