/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 880080738876823069;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [9] [i_3] [i_4] [0] [i_4] [0] [i_0] = 7702205852876844805;
                                var_16 = (!3846378452723547700);
                            }
                        }
                    }
                    var_17 = 4398046510848;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] = (-(max(10744538220832706814, 5656890464496795743)));
                                var_18 = (-var_9 + ((((min(6272863712560138132, 3846378452723547716))) ? var_11 : (min((arr_15 [i_0] [i_0] [i_0]), var_4)))));
                                arr_20 [6] [i_1] [i_1] [i_1] = min((min(-8294229553614157413, (arr_12 [i_0] [i_1] [i_1] [i_5 - 2] [i_6]))), var_1);
                            }
                        }
                    }
                    var_19 = min(((((min(16715568210638784922, var_2))) ? ((var_2 ? 12552833409251986081 : 8958910665394281657)) : (arr_5 [i_0] [i_1] [4]))), (max(((14371249668243932551 ? var_5 : var_8)), (min((arr_6 [i_1] [i_0]), 1487805820454048911)))));
                }
            }
        }
    }
    var_20 = -12688233476261591360;
    #pragma endscop
}
