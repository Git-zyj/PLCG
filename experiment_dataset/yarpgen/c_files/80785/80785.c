/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (14803797843001232398 ? ((var_7 ? var_7 : 15181246856709813784)) : (((var_6 ? (((max(1, 1)))) : 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_2 - 1] &= (!-0);

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (!(arr_4 [i_1 + 2] [i_3 + 2] [i_2] [i_2 - 2]));
                        arr_10 [i_0] = 14803797843001232402;
                        var_19 |= 1;
                        arr_11 [i_0] [4] = (1 - (11715 % 18446744073709551615));
                        arr_12 [8] [i_1] [8] [i_1] = (((-626134268 ? var_16 : (arr_5 [8] [i_1] [i_0]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
