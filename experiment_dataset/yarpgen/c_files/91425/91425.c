/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = (((((var_1 ? (max(var_1, var_2)) : (((100 ? var_8 : var_2)))))) ? ((((max((arr_1 [i_0] [i_0]), 201))) ? 3741814901014362902 : (((min(0, var_2)))))) : (max(2772667699, (-7522153230266130356 / var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((-(((var_5 + 9223372036854775807) << (((arr_1 [i_1] [i_0 + 2]) - 1517217627))))));
                    arr_6 [i_2] [i_2] = 7522153230266130355;
                    var_13 = (((((~(((-2147483647 - 1) & (arr_4 [i_0] [i_1] [i_2])))))) ? (~1522299597) : (arr_0 [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
