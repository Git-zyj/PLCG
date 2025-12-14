/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(!60659)));
                arr_7 [i_1] = (-(min((arr_2 [i_1] [i_1] [i_1]), (min(2, (arr_5 [i_1] [i_1]))))));
                var_14 = (((((!(arr_1 [i_0])))) >> (((!(~652696533))))));
                arr_8 [i_1] [i_1] [i_0] = (((((-(max((arr_5 [i_1] [6]), 3659110685))))) ? 635856601 : (arr_4 [i_0])));
                arr_9 [i_0] [i_1] [5] = (arr_5 [i_1] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 = (((arr_4 [i_2]) ? (((arr_2 [i_2] [i_2] [i_2]) ? (min((arr_4 [i_2]), (arr_4 [9]))) : var_5)) : var_3));
        arr_13 [14] &= (arr_2 [4] [i_2] [i_2]);
        var_16 = (min(var_16, (((!(!-652696551))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_18 [i_3] = ((!(arr_14 [i_3])));
        arr_19 [i_3] = ((32740 | (arr_14 [i_3])));
        arr_20 [i_3] = (~(arr_14 [i_3]));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_17 = (((arr_0 [i_4 + 1]) ? ((-(arr_0 [0]))) : (((((-(arr_14 [i_4]))) != (arr_0 [i_4 + 3]))))));
        arr_23 [i_4] [2] = -28931;
        var_18 = -4159555129;
        var_19 = (arr_1 [i_4 + 3]);
    }
    #pragma endscop
}
