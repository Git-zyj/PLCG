/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (var_5 & var_5);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_0] = ((-(arr_2 [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] &= 4256;
                        var_20 = (max(var_20, var_2));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_21 = ((-10523 ? var_16 : 11712));
                        var_22 = ((-1 ? (arr_9 [i_4 - 3] [i_2 + 2] [i_1 - 2] [8]) : (arr_4 [i_0])));
                    }
                }
                arr_16 [i_1] [i_1 - 1] [i_1] &= ((((((arr_2 [i_0] [i_0 - 1]) ? 11712 : 4294967281))) ? -11712 : 1550107702));
            }
        }
    }
    #pragma endscop
}
