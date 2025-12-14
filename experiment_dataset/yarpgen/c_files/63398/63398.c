/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = ((21073 < (((21073 ? 1069547520 : 83)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 *= (min((arr_0 [i_1 - 1] [i_1 - 1]), ((min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1]))))));
                arr_6 [i_0] [1] [1] = (((!21073) <= ((var_14 ? 281406257233920 : var_5))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((((max(var_14, 281406257233898))) ? (arr_9 [15] [i_2 - 1] [8] [8]) : (((!(arr_10 [i_2] [i_2 - 1] [i_2 - 1] [2])))))))));
                            var_23 *= var_11;
                        }
                    }
                }
                arr_11 [16] [4] [0] |= (((((((arr_10 [9] [7] [13] [9]) ? 44471 : 4294967295)) / var_1)) > 12534));
            }
        }
    }
    #pragma endscop
}
