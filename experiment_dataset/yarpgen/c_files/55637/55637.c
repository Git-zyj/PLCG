/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(((5209052056388248804 >> (-1501134106 + 1501134118))), var_1));
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 &= var_7;
                var_17 = ((((min(var_4, (arr_1 [i_0])))) * (arr_2 [i_0])));
                arr_5 [i_0] [i_0] [i_0] = (max(((-(arr_0 [i_0]))), var_8));
            }
        }
    }
    var_18 = (min(((((min(var_1, var_7))) / ((var_12 ? var_7 : var_10)))), (((!(((var_2 ? var_10 : -1501134106))))))));
    #pragma endscop
}
