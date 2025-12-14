/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((!((max(14782836969086931579, (((!(arr_6 [i_0] [i_0] [i_0])))))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [2] [i_2] = (3663907104622620051 | -2423);
                    arr_11 [i_0] [i_1] [i_2] = (((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? 3663907104622620068 : (arr_1 [9] [9])));
                }
            }
        }
    }
    var_16 = max(var_4, (!-25026));
    #pragma endscop
}
