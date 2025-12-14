/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((1 ? 1592107012 : 82)), (var_6 < var_1)));
    var_15 = var_10;
    var_16 = (min(var_16, var_4));
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (((((arr_2 [i_0 - 1] [i_0 - 1]) - (arr_4 [i_1])))));
                    var_19 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? var_10 : (arr_3 [i_1])));
                    arr_7 [6] [i_1] = ((((var_4 ? (arr_2 [i_0 + 1] [i_1]) : ((((var_3 < (arr_1 [i_2])))))))) ? (((arr_0 [i_0]) - (arr_2 [i_0 + 1] [i_0 - 1]))) : ((((max((arr_6 [i_0] [i_0] [i_0]), var_9))))));
                }
            }
        }
        var_20 = ((((((arr_1 [i_0 - 1]) & (arr_1 [i_0 + 1])))) ? ((~(arr_0 [i_0 - 1]))) : (((-(arr_6 [16] [16] [i_0 + 1]))))));
        arr_8 [i_0] = (arr_0 [i_0 + 1]);
        var_21 = ((((((arr_4 [1]) ? (((arr_0 [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : 5)) : var_0))) ? ((min((arr_0 [i_0]), (arr_4 [8])))) : ((max(1592107022, (arr_5 [i_0]))))));
    }
    #pragma endscop
}
