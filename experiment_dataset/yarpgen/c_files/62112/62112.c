/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [7]);
        var_17 = (max(var_17, (arr_1 [i_0] [i_0])));
        var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))));
        var_19 = (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : var_4));
        arr_5 [i_1] = (((arr_3 [i_1] [i_1]) ? (((arr_2 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) : var_13));
        arr_6 [i_1] [i_1] |= (arr_2 [i_1] [i_1]);
    }
    var_20 &= var_5;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2 - 3] [i_3] [i_4] = (arr_1 [i_3] [i_3]);
                    var_21 = ((((min(-2004026819, 2921157109687840731))) ? (arr_8 [i_2 + 1]) : (((arr_2 [i_2] [i_2]) ? ((min((arr_1 [i_2 - 3] [1]), (arr_11 [i_4] [i_2] [i_2])))) : (arr_9 [i_2])))));
                }
            }
        }
    }
    var_22 = (min(((((min(var_7, var_14))) ? var_1 : ((var_9 ? var_12 : var_4)))), var_6));
    var_23 = (max(var_23, var_8));
    #pragma endscop
}
