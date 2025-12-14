/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 230;
        var_17 -= 0;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [i_1 + 1] = ((112 & (!45)));
        var_18 = ((((0 | 25) ? (arr_7 [i_1 - 1]) : (((126 ? var_8 : (arr_5 [i_1 + 1] [1])))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_19 = var_7;
                    arr_16 [i_4] [i_3 + 1] [10] = ((~((var_6 ? var_8 : var_2))));
                    var_20 -= -112;
                }
            }
        }
    }
    var_21 = ((~((((1 ? -108 : 1)) ^ var_11))));
    #pragma endscop
}
