/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0 + 2] [i_1] [16] = (((((-(max(6, 2981906714))))) ? ((((max(38, 2267102601684960204))) ? (max(var_5, var_12)) : ((min(var_9, 2829803582))))) : (((var_16 / (max(68, (-2147483647 - 1))))))));
                arr_9 [i_0] = ((((((arr_2 [i_0 - 1] [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 2] [i_0 - 1])))) ? (arr_2 [i_0 + 2] [i_0 - 1]) : ((((arr_2 [i_0 - 2] [i_0 + 2]) != (arr_2 [i_0 - 1] [i_0 + 2]))))));
                arr_10 [14] [i_1] [14] = (((((1465163713 ? (arr_1 [i_0 - 1] [i_1 + 2]) : (arr_2 [1] [i_1]))) * (1055308383 <= var_3))) + -1465163713);
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
