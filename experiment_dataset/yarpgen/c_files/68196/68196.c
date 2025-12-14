/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 65468;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= (((arr_1 [i_0]) >= (arr_2 [i_0] [i_0])));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_1 [i_1]);
        var_18 = ((!(arr_1 [i_1])));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 += (arr_7 [i_3]);
                    arr_14 [i_2] [i_2 + 2] [i_2] [i_2] = (((-(arr_13 [i_4] [i_4] [i_4]))));
                }
            }
        }
        var_20 *= (((((arr_13 [i_2] [i_2 - 1] [i_2 - 1]) && (arr_10 [i_2] [i_2 + 1]))) || (((((arr_7 [0]) || (arr_9 [4])))))));
        var_21 += 0;
        var_22 = var_13;
    }
    #pragma endscop
}
