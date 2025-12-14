/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 += (max((arr_0 [2] [10]), ((((arr_0 [i_0] [i_0]) && var_9)))));
        var_13 = (((((max(-20673, 124)))) + ((var_1 ? (var_6 & var_10) : ((((var_3 > (arr_2 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 = ((((((arr_1 [i_1 + 3] [i_1 + 2]) - var_2))) ? (arr_1 [1] [i_1 - 2]) : (((arr_0 [i_1 - 2] [4]) ? (arr_1 [i_1] [i_1 + 2]) : (arr_3 [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_3] = ((max(((((arr_9 [i_3] [i_2] [i_1]) ^ var_9))), (arr_2 [i_3]))));
                    arr_11 [i_1] [i_1] [1] [i_1 - 2] = (((max(2096128, 879192752192895142)) * ((((min((arr_8 [i_3] [i_2] [i_2] [i_1]), var_7)))))));
                    arr_12 [4] [4] [4] = ((var_7 >= (((((arr_4 [i_1 + 3]) ? (arr_5 [i_2] [i_3]) : var_6)) >> (((max((arr_4 [8]), var_3)) - 1774403688))))));
                }
            }
        }
        arr_13 [i_1] = (((((((((arr_0 [i_1] [i_1 + 1]) - (arr_6 [8])))) ? var_8 : ((max(var_7, 124)))))) ? (arr_4 [i_1 + 2]) : (879192752192895145 == 114)));
        arr_14 [i_1] = (((var_10 && var_5) ? (max((arr_8 [i_1] [1] [1] [i_1 - 2]), (arr_7 [i_1]))) : var_10));
        var_15 = ((((max(var_4, (arr_5 [i_1 + 2] [i_1 + 2])))) ? ((var_8 ? (arr_5 [i_1 + 3] [i_1]) : (arr_8 [i_1 + 2] [i_1] [i_1] [i_1 - 2]))) : (((((arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2]) <= (arr_5 [i_1 - 2] [1])))))));
    }
    #pragma endscop
}
