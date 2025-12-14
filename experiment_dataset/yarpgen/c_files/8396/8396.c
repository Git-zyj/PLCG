/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 -= var_7;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 = var_10;
                    var_13 = ((var_4 ? ((-16 ? -7 : -32767)) : (min((((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : -49)), (((arr_2 [i_0]) << (((var_8 + 8664) - 1))))))));
                    arr_6 [i_0] [i_1] [i_2] |= (max((arr_4 [i_1]), ((var_5 ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                }
            }
        }
    }
    var_14 = var_7;
    var_15 = (min(((((max(var_8, var_7))) - var_1)), var_9));
    #pragma endscop
}
