/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_1 && (((~(474126629 < 474126629))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((min((arr_3 [i_0 - 3] [i_1] [i_0 - 3]), -var_15)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 ^= 4407656271507277340;
                            var_20 = (~474126629);
                        }
                    }
                }
                var_21 = var_9;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_22 = (((arr_9 [i_5] [i_5] [i_1] [i_5] [i_0]) % 137241793551329558));
                            var_23 = (((474126629 || (((474126609 ? 474126634 : 0))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_22 [i_1] = 1747563227;
                            arr_23 [i_7] [i_7] [i_1] = 65528;
                            arr_24 [i_0] [i_1] [i_1] [i_7] = (((474126609 / (min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_17 [i_1]))))));
                            arr_25 [i_0] [i_6] [i_6] [i_0] [i_0] [i_7] |= (!474126629);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
