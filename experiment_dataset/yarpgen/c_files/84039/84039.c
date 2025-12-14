/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!((((min(var_5, var_4))) <= (min(var_15, 9223372036854775807)))));
    var_17 = (max(var_17, ((min(var_7, (((!(!var_13)))))))));
    var_18 = (max(var_18, var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, -3324496651828736625));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = 18446744073709551615;
                    var_21 = (max(var_21, ((((!var_8) && var_6)))));
                }
            }
        }
        var_22 = (min(var_22, (((-(arr_1 [i_0 - 1]))))));
    }
    #pragma endscop
}
