/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_4 ? var_6 : var_5))) ? var_8 : var_0))) ? 2251172661 : ((min(var_12, ((var_12 ? var_12 : var_0)))))));
    var_18 = ((var_9 ? ((((var_8 + 2147483647) << (((var_0 + 1194837869) - 16))))) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [9] [9] [i_2] = var_4;
                    var_19 = (max(var_19, ((max((arr_0 [i_0] [i_1 - 1]), (((((max(var_0, var_2)) + 2147483647)) >> ((((var_5 ? (arr_7 [i_0] [2] [i_2]) : (arr_5 [i_0] [i_1 + 2] [i_2]))) - 3125865795)))))))));
                }
            }
        }
    }
    #pragma endscop
}
