/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= max(var_9, (min(((var_3 ? var_9 : var_7)), (min(var_13, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((((max(var_15, var_13))) ? (arr_3 [i_0]) : var_10));
                    var_18 += (min(227, (min(var_10, ((var_12 ^ (arr_4 [i_0] [i_0] [i_0])))))));
                    arr_6 [i_0] [i_1] [i_1] = (((((max(var_5, (arr_2 [10]))))) ? ((((min(var_8, var_2))) ? ((var_11 + (arr_1 [i_2]))) : var_6)) : ((((!(((2 ? -196236150 : 2)))))))));
                }
            }
        }
    }
    #pragma endscop
}
