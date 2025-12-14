/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 |= 42125;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = var_6;
                            var_15 = (((max((arr_0 [i_2]), (((arr_8 [i_3] [i_2] [i_1] [13]) ? (arr_4 [i_0]) : (arr_6 [i_2] [6] [i_2]))))) >> (((arr_6 [i_1] [i_1] [i_1 + 1]) - 64826))));
                        }
                    }
                }
                arr_11 [i_1] = (((min((arr_5 [i_1 - 1] [i_1] [i_0]), (42126 % 7627704324145926325)))) ? var_0 : 3329920372);
                arr_12 [i_1] [i_1] [i_1] = (min((arr_6 [i_1 + 1] [19] [i_1]), var_1));
            }
        }
    }
    var_16 = ((((((var_11 * var_2) ? ((var_4 ? var_5 : var_11)) : var_0))) ? (((-((var_7 ? var_5 : var_12))))) : 4175182716));
    #pragma endscop
}
