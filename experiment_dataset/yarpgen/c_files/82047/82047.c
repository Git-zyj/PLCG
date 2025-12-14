/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_9, ((((((var_9 ? -39 : var_4))) ? ((var_7 ? var_6 : var_7)) : (0 >= var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 3;
                arr_6 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
                var_14 = ((var_11 ? (arr_4 [i_1] [8]) : var_1));
                arr_7 [i_1] [i_1] [i_1] = var_12;
                arr_8 [i_1] [i_1] = -var_0;
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((var_4 ? (((arr_2 [i_2]) ? (arr_9 [i_2]) : (arr_9 [10]))) : (((arr_9 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_2])))));
        arr_13 [i_2] = ((!((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2]))))));
    }
    var_15 = (((!(1 < var_0))));
    #pragma endscop
}
