/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(131071, 32764)))));
    var_12 = var_4;
    var_13 = (max(40, ((var_3 ^ ((var_2 >> (var_8 - 90)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (arr_4 [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 &= (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_1 + 2]) : (arr_1 [i_1 + 3])));
                        var_16 = (~227467760);
                    }
                    var_17 |= (((!(((16852373390491178475 ? 9951 : var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
