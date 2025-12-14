/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [10] [i_0] = (max(((0 ? var_2 : (arr_1 [0]))), ((min((arr_2 [i_0] [i_0]), var_13)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = 42949;
                    var_20 = (((max((arr_4 [i_1 + 1] [8] [i_1]), var_2)) != ((var_4 ? (arr_7 [1] [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                }
            }
        }
        var_21 = (min(var_21, (((!(arr_5 [i_0]))))));
    }
    var_22 = (max((max((var_8 | 677169165), ((var_17 ? var_16 : var_10)))), (var_13 / -var_7)));
    #pragma endscop
}
