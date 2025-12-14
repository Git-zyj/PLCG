/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? var_5 : var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((-(((12118852917851721298 || -2026055705) ? (((arr_4 [i_0] [i_1] [i_1] [i_0]) ? var_7 : 6327891155857830320)) : (~2628422195316011375)))));
                    var_21 = (min(((~(((arr_3 [i_2] [i_0]) ? (arr_1 [i_0] [i_2 + 1]) : (arr_4 [i_0] [i_0] [i_0] [i_0]))))), ((var_13 + (((~(arr_1 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_22 = (var_18 | var_3);
    #pragma endscop
}
