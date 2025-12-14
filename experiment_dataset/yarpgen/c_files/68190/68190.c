/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (min((arr_0 [i_0]), -0));
        var_18 += ((((max(((((arr_3 [i_0]) ? var_9 : (arr_3 [i_0])))), ((var_7 ? (arr_0 [i_0]) : var_11))))) ? (arr_2 [i_0]) : (max((arr_0 [14]), 557713981))));
        arr_5 [i_0] [i_0] = ((!(arr_2 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_19 = 0;
                    arr_13 [i_1] = ((-(arr_3 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
