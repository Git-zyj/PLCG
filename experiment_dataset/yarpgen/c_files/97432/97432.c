/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] |= (max(-688, 13767));
                    arr_8 [i_1] [i_0] [i_2] = -1;
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((var_3 & ((min(var_4, (arr_5 [i_2 - 2]))))));
                    arr_10 [1] [1] [i_0] = -17699;
                    arr_11 [i_0] [i_0] = ((((var_7 * var_5) ? ((var_13 >> (((arr_4 [i_0] [i_1] [i_2]) - 7817)))) : (min((arr_6 [i_0] [i_1] [i_2] [i_2]), 1982)))));
                }
            }
        }
    }
    var_17 = ((((((var_13 - var_16) > -var_2))) | var_0));
    var_18 = -var_9;
    var_19 = (var_3 + var_8);
    #pragma endscop
}
