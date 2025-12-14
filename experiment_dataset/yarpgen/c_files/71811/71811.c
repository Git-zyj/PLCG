/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((!var_1) << ((((!var_10) < (806439973 ^ 806439973))))));
                arr_6 [i_1] = ((((~((((arr_1 [i_0] [i_1]) && (arr_1 [i_0] [i_1])))))) >= (max(((max(var_5, var_7))), ((806439982 << (var_5 - 46814)))))));
                var_12 = (max((arr_1 [i_0] [i_1]), (min((arr_4 [9] [9] [i_1]), (((var_5 != (arr_1 [i_0] [i_1]))))))));
                arr_7 [i_1] = (((((((arr_0 [i_0] [i_0]) || (arr_2 [i_0] [i_1]))))) - (arr_4 [i_1] [i_1] [i_1])));
            }
        }
    }
    var_13 = -var_4;
    #pragma endscop
}
