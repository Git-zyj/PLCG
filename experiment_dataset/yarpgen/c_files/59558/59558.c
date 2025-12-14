/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [14] [i_1] = ((-((-(((arr_3 [i_0] [i_1] [i_2]) + var_9))))));
                        arr_13 [i_1] [12] [i_0 - 1] [i_3] [i_0] = ((+(((arr_8 [i_1] [i_1] [i_1] [i_1]) ^ 14))));
                        arr_14 [i_0] [i_1] [2] [i_3] = (arr_4 [i_0] [i_1] [i_1]);
                        arr_15 [i_1] [i_1] [i_2 - 2] [i_1] [i_3] [1] = ((((max((min((arr_11 [i_2]), 22272)), -16022))) || (((var_0 || var_8) || (((var_16 ? (arr_11 [i_0 - 2]) : 204)))))));
                    }
                }
            }
        }
        arr_16 [i_0] = (max((106 <= -804612945), (max((arr_4 [i_0] [i_0 - 1] [11]), (min(0, var_14))))));
        arr_17 [i_0 + 1] &= max((var_14 % var_10), (max((arr_11 [i_0]), (!var_11))));
    }
    var_17 = -4764517082863849177;
    var_18 -= ((((!(var_12 - -804612964))) ? -55 : var_7));
    var_19 = 15189;
    #pragma endscop
}
