/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((~((min((arr_1 [i_0] [i_1]), (arr_5 [6] [i_2])))))))));
                    var_14 = max((arr_3 [i_0]), ((((((arr_5 [i_0] [i_1]) ? (arr_3 [i_2]) : (arr_4 [i_1])))) ? ((16499476524849946496 ? (arr_3 [i_0]) : var_6)) : -1023)));
                    arr_7 [i_1] = ((((max(((var_10 ? (arr_1 [i_1] [i_2]) : (arr_0 [i_1 - 1] [i_1 - 1]))), ((((arr_4 [i_0]) ? (arr_0 [i_2] [i_2]) : 6061)))))) ? (max(0, 4294967295)) : (((min((arr_3 [i_1 + 1]), 21))))));
                }
            }
        }
    }
    #pragma endscop
}
