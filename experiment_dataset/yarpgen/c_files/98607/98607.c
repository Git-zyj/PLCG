/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_5, ((var_5 >> (8507740973577388275 - 8507740973577388260)))))) && 88));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [14] [i_2] [i_1 + 1] [i_2] = (i_2 % 2 == 0) ? (((((((max(502492357, var_4))) ? (((49494 | (arr_5 [i_0] [i_2] [i_2])))) : (arr_0 [i_0 - 3]))) >> (((((arr_0 [i_0]) ? (arr_6 [i_0] [i_2] [i_0 + 2]) : (arr_6 [i_0] [i_2] [i_0 + 2]))) - 40173))))) : (((((((max(502492357, var_4))) ? (((49494 | (arr_5 [i_0] [i_2] [i_2])))) : (arr_0 [i_0 - 3]))) >> (((((((arr_0 [i_0]) ? (arr_6 [i_0] [i_2] [i_0 + 2]) : (arr_6 [i_0] [i_2] [i_0 + 2]))) - 40173)) + 26659)))));
                    var_15 = (((max((min(var_3, (arr_0 [0]))), var_10)) + ((max((arr_6 [i_1 - 2] [i_2] [i_1 - 1]), (max((arr_4 [i_0] [i_0] [i_2]), (arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_2] = var_0;
                }
            }
        }
    }
    var_16 = (min(((var_12 ? 44 : 511)), -20776));
    var_17 = var_6;
    #pragma endscop
}
