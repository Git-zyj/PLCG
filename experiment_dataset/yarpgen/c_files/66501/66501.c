/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((((max(var_6, var_2))) ? var_7 : (var_3 % var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((((((max((arr_1 [13]), var_2))) ? var_2 : (~3280869533763354955)))) ? ((((arr_0 [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_1])))) : ((+(((arr_1 [i_1]) ? (arr_3 [i_0] [8]) : (arr_4 [i_0] [12] [i_0]))))))))));
                    var_12 = (min(var_12, ((((((arr_3 [i_2] [i_2]) ? (arr_3 [i_2] [i_1]) : (arr_3 [i_1] [i_2]))) << (((((arr_3 [1] [i_1]) | (arr_3 [i_2] [i_0]))) - 3473611777)))))));
                    var_13 = (max((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [11] [i_1]))), (arr_3 [i_2] [i_1])));
                    var_14 = ((~(((arr_6 [i_1] [i_0]) ? (arr_6 [i_1] [4]) : (arr_6 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
