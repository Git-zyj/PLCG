/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = max(((((((arr_1 [i_0]) == var_6)) || (((var_4 ? (arr_1 [8]) : (arr_1 [i_0]))))))), (arr_1 [i_0]));
        var_17 = ((((min(-1, 3400660043))) ? ((var_9 ? (arr_0 [i_0]) : var_8)) : (((3679242996 == (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 = (((((34 ? (arr_13 [i_2] [i_4]) : (arr_13 [i_2] [i_2])))) ? (((arr_13 [i_2] [i_2]) ? (arr_13 [i_2] [i_3]) : (arr_13 [i_2] [i_2]))) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                        var_19 = (((((((arr_7 [i_2]) ? var_4 : var_0)))) + ((((-11 % 7981188410497697767) >= -1)))));
                        var_20 = (min(((-(((var_6 > (arr_10 [i_2] [i_2] [12] [i_2])))))), ((min((arr_7 [i_2]), var_6)))));
                        var_21 = (arr_9 [i_2] [i_3] [i_2]);
                    }
                }
            }
        }
        var_22 = var_6;
    }
    var_23 = var_4;
    #pragma endscop
}
