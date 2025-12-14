/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_1] [7] [i_4 - 1] = (min(((((arr_13 [i_2]) & var_2))), ((min(var_0, (!528817565266654762))))));
                                arr_18 [i_1] [i_3] [i_2] [i_1] = (!var_3);
                                var_13 = (17917926508442896866 & -6996849947079324176);
                            }
                        }
                    }
                }
                var_14 = (max((((65535 < (arr_4 [i_1 + 1] [i_1] [i_1 - 1])))), (arr_4 [i_1 + 1] [i_1] [i_1 - 1])));
                var_15 = ((65514 - (max(65535, ((13041613892409582018 ? (arr_9 [i_1] [i_1] [i_1] [i_0]) : 247))))));
                arr_19 [i_1] = (~-622539616);
                var_16 -= var_5;
            }
        }
    }
    #pragma endscop
}
