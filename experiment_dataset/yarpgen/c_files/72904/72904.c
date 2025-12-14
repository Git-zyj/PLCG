/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = var_2;
                    var_11 = (max((max((arr_10 [i_0 + 2]), (arr_10 [i_0 + 2]))), (arr_0 [i_1 - 1])));
                    var_12 *= ((((max(0, (arr_10 [i_0 + 1])))) ? (((min((arr_4 [0]), (arr_6 [i_0 + 2] [i_2]))))) : (var_9 <= 0)));
                }
            }
        }
    }
    var_13 = (((var_4 <= var_9) ? ((var_0 ? var_0 : var_0)) : (((((var_8 ? var_4 : var_0))) ? var_9 : (max(1068421433, var_4))))));
    #pragma endscop
}
