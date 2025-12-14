/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    var_11 = (min(var_11, var_0));
    var_12 = (min(((max(var_4, (var_5 | var_4)))), (((var_4 || var_9) ? (max(var_9, var_2)) : (((var_7 ? var_7 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [4] = ((((((4358417168267321673 | -466256413) > (arr_1 [i_1 + 1])))) | ((~(arr_3 [i_1 - 1] [i_1 - 3])))));
                arr_5 [i_1] [i_0] = (((min(((var_4 << (((arr_2 [i_0] [i_0] [i_0]) - 55153)))), ((min((arr_0 [i_1]), (arr_3 [i_0] [i_0]))))))) != (((var_7 & var_7) ? (((var_2 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_1 [i_1])))) : ((var_9 ? 614342284295876839 : var_6)))));
            }
        }
    }
    #pragma endscop
}
