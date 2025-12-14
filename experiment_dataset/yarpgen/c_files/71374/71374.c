/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 -= var_10;
    var_13 = (max(var_13, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 13894202792599711501;
                var_14 += ((((((var_2 ? 99 : (arr_0 [i_0])))) + (((arr_2 [i_0] [i_1 - 1]) ? var_7 : var_3)))) + var_3);
                var_15 = (12 & 10761023758677231842);
                arr_5 [2] [15] = ((((-((~(arr_0 [11])))))) ? ((min(((var_8 - (arr_2 [i_0] [i_1 + 2]))), 8))) : (min((min((arr_0 [i_1 - 2]), (arr_3 [i_0] [i_1]))), (max(var_3, var_7)))));
                var_16 = (max((((arr_3 [i_1 - 3] [i_1 - 2]) ? (arr_2 [i_1 - 3] [i_1 - 4]) : 15530652569426315964)), (((arr_2 [i_1 + 2] [i_1 - 4]) ^ (arr_3 [i_1 + 1] [i_1 - 3])))));
            }
        }
    }
    #pragma endscop
}
