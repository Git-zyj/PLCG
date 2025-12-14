/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((((((((arr_4 [8] [4]) / (arr_5 [i_2])))) ? ((7 ? var_4 : (arr_4 [6] [i_1 + 1]))) : ((min((arr_1 [i_0] [i_0]), 0)))))) ? ((-((max(var_1, (arr_0 [i_0] [i_1])))))) : (((((98 ? 1010203729533638035 : (arr_8 [i_0]))) >= ((15399643274519472707 ? (arr_7 [4]) : (arr_8 [i_0]))))))));
                    arr_9 [i_0] [i_1] [i_2] = (max(((((arr_8 [i_1 - 2]) + (arr_8 [i_1 + 1])))), (max((min((arr_7 [11]), var_12)), (arr_3 [6])))));
                    arr_10 [i_0] [i_1] [i_2] = (max((((((var_7 ? (arr_1 [i_1] [1]) : var_10))) ? 1 : 7)), (((arr_2 [i_0] [i_1 + 2]) ? (arr_2 [i_1 + 1] [i_2]) : (arr_2 [i_0] [i_1 - 2])))));
                }
            }
        }
    }
    var_17 = (min(var_17, var_2));
    var_18 = ((var_13 <= (max((max(7, 1)), ((247 ? var_0 : -1194929086))))));
    #pragma endscop
}
