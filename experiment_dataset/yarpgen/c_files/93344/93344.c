/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((var_8 ? var_9 : var_7)) * ((var_1 ? 15 : var_10)))), (var_7 >= var_12)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max((((max((arr_2 [i_0]), (arr_2 [i_0]))) ? (((max((arr_1 [i_0]), (arr_1 [i_0]))))) : ((245 ? 1428006626 : (arr_0 [i_0]))))), 4116));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (!((max(var_0, (((arr_2 [i_1]) ? 268435455 : (arr_7 [i_0])))))));
                        var_16 = ((((((arr_10 [i_0] [i_2 - 1] [i_2 - 1]) ? (arr_10 [i_1] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_0] [i_2 - 1] [i_2 - 1])))) ? (arr_10 [6] [i_2 - 1] [i_2 - 1]) : (((arr_10 [8] [i_2 - 1] [i_2 - 1]) ? (arr_10 [0] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_1] [i_2 - 1] [i_2 - 1])))));
                        var_17 = (((min((arr_0 [i_0]), (arr_0 [i_0]))) | ((~(arr_0 [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
