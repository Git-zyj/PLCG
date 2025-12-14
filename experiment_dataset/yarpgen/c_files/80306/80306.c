/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(60905, 65));
    var_21 = (((((var_5 ? var_6 : ((var_0 ? var_19 : var_16))))) ? (max(var_12, var_2)) : (!var_12)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_22 = ((var_12 ? (arr_4 [i_1] [i_1]) : 64));
                        var_23 -= arr_8 [i_2];
                    }
                    arr_12 [i_0 + 1] [i_1] [i_2] = 2147483647;
                    var_24 = (((((-4180023595360092147 ? (arr_2 [i_1] [i_2]) : (((!(arr_11 [i_0] [6] [11] [i_0 - 1]))))))) ? (arr_8 [i_1]) : (((-2147483647 - 1) ? 43 : -64))));
                }
            }
        }
    }
    #pragma endscop
}
