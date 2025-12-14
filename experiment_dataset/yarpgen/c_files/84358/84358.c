/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((((var_6 ? var_0 : var_6))) ? ((var_4 ? var_14 : 0)) : (min(var_10, var_9))))) ? var_2 : var_2);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [2] = ((var_4 ? (arr_0 [i_0 - 2] [i_0 + 2]) : (arr_0 [i_0 + 1] [i_0 - 1])));
        arr_3 [1] [1] = (((((var_11 ? (arr_0 [1] [i_0 - 2]) : var_3))) ? (arr_0 [i_0 - 1] [i_0 + 1]) : var_14));
    }
    var_18 = (min(var_18, var_9));
    var_19 = 13180108512589965340;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    var_20 -= ((-(max(var_16, -13699))));
                    var_21 = (min(var_21, 0));
                    arr_15 [i_3 + 1] = ((var_10 ? (((arr_4 [i_3 - 1] [i_3 - 2]) ? (arr_4 [i_3 + 3] [i_3 + 3]) : (arr_4 [i_3 - 2] [i_3 - 1]))) : ((max((arr_4 [i_3 - 2] [i_3 - 1]), (arr_4 [i_3 - 1] [i_3 - 3]))))));
                    var_22 = (max(var_22, (var_4 > 51837)));
                    var_23 = (max(var_23, (((arr_9 [i_2]) - (~-var_16)))));
                }
            }
        }
    }
    #pragma endscop
}
