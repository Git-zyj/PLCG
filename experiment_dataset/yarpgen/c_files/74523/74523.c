/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((((max((arr_0 [i_0] [i_0]), (arr_4 [i_2] [i_1 - 3] [i_0])))) ? (((arr_6 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))) : (max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_2])))));
                    var_13 = min((((!(arr_0 [i_0] [i_0])))), (min(((min(var_3, (arr_10 [i_0] [i_0] [i_0] [i_0])))), (((arr_9 [i_0] [i_0] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0]))))));
                    arr_12 [i_0] [i_1] [i_0] [i_2] = (min((min((min((arr_8 [i_0] [i_1 - 2] [i_2] [i_1 - 2]), (arr_7 [i_0] [i_2]))), (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_7 [i_1] [i_0]))))), (((arr_0 [i_0] [i_0]) ? ((max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_1 - 3] [19])))) : (min(var_10, var_7))))));
                }
            }
        }
    }
    var_14 = ((!((max((!var_1), (min(var_4, var_11)))))));
    #pragma endscop
}
