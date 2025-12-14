/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = ((((max(-2066161196, (arr_3 [i_0])))) ^ (min((arr_1 [i_0]), (arr_0 [i_0])))));
        var_11 = -32768;
        var_12 = (max(var_12, 15));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((((((-4 ? (arr_5 [i_1] [i_1]) : var_0))) | (min(var_2, var_8))))) || ((((min(var_5, var_4)) | var_0)))));
        arr_8 [i_1] = ((~((-(!var_4)))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_13 |= (min(((-(arr_12 [i_2]))), (arr_12 [i_4])));
                    arr_16 [i_4] [i_2] [i_4] = ((((min(var_0, var_9))) ? (min((arr_10 [i_3 - 2] [i_3 + 2]), (arr_10 [i_3 - 2] [i_3 + 2]))) : (arr_10 [i_3 - 2] [i_3 + 2])));
                    var_14 = (max(var_14, ((((var_7 ? (arr_5 [i_2] [i_3 - 1]) : (arr_5 [i_2] [i_3 + 1])))))));
                    arr_17 [11] [11] [i_3] [i_2] = ((-(((max(var_2, (arr_11 [i_2] [i_2] [1])))))));
                }
            }
        }
    }
    #pragma endscop
}
