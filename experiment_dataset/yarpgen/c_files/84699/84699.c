/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] = ((((((arr_1 [i_0] [i_1]) ? 16848 : (((arr_0 [11]) ? (arr_4 [i_0] [11]) : (arr_2 [i_0])))))) ? ((-115 ? (((arr_2 [6]) ? (arr_4 [i_0] [i_1]) : 934810275)) : (arr_3 [i_1 - 1] [i_1 - 1]))) : 0));
                arr_6 [i_0] [i_0] [i_1] = (arr_0 [i_0]);
                var_11 = ((((max(64, (((arr_3 [3] [i_1 + 1]) ? (arr_1 [i_0] [i_1 - 1]) : -1673304559))))) ? ((((((arr_1 [i_0] [i_1 - 1]) | (arr_1 [3] [3])))) ? (((arr_4 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0]))) : (((arr_0 [i_0]) + 255)))) : (arr_3 [i_0] [i_1])));
                var_12 = (((((arr_3 [i_1 - 1] [i_1 + 1]) - (arr_3 [i_1 + 1] [i_1 + 1]))) >= (arr_1 [11] [i_0])));
                var_13 |= (((1673304556 ? (((arr_2 [i_0]) ? (arr_2 [5]) : (arr_3 [7] [7]))) : (arr_3 [i_0] [i_0]))));
            }
        }
    }
    var_14 = var_7;
    var_15 = ((var_6 ? var_5 : var_7));
    #pragma endscop
}
