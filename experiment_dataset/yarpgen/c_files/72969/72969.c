/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [4] = var_8;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 6;i_3 += 1)
                {
                    {
                        var_13 = (arr_1 [i_2]);
                        arr_11 [i_0] [i_0] [i_1 - 2] [i_2] [6] [i_0] = -1;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_16 [i_4] = ((((((arr_12 [i_4 + 1] [i_4 + 2]) ? (((arr_14 [i_4]) ^ 1)) : (((var_5 ? -2 : var_10)))))) ? ((((((var_8 ? var_12 : 1351347208))) && var_4))) : ((-(arr_12 [i_4 - 1] [i_4 + 2])))));
        var_14 = (max((((arr_15 [i_4]) ? (~11205635320304943248) : 1)), ((((arr_13 [i_4 - 1]) ? (arr_13 [i_4 + 2]) : (arr_13 [i_4 - 1]))))));
        var_15 = ((((!(arr_15 [i_4]))) ? ((((min((arr_15 [i_4]), var_6))) ? (((arr_14 [i_4 + 2]) | var_6)) : var_4)) : ((((arr_15 [i_4 + 1]) ? (arr_13 [i_4 + 1]) : (arr_15 [i_4 - 1]))))));
    }
    var_16 = var_1;
    var_17 |= var_6;
    #pragma endscop
}
