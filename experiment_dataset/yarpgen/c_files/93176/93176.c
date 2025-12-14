/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_6 ? ((min(var_3, var_9))) : ((max(var_6, var_0))))) >= (((var_10 || (((var_4 ? var_6 : var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [5] = (((arr_5 [i_2 - 2]) ? (((arr_5 [i_2 - 2]) + var_6)) : (arr_5 [i_2 - 2])));
                    var_12 = (((-((-(arr_5 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
