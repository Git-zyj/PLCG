/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_0 ? var_14 : var_5))) ? (min((max(var_14, var_3)), 7)) : ((min(((-7017154317248636089 ? var_3 : 14)), (var_6 * var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((var_1 ? (((-(arr_6 [i_2])))) : (min(1, var_13))));
                    var_18 = ((((((((max(var_4, (arr_5 [7] [i_1] [5])))) || ((max(var_14, var_3))))))) <= (arr_0 [i_1])));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
