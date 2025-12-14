/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((18100179561642814120 ? var_12 : 346564512066737495))) > ((max(((18100179561642814120 ? var_3 : var_3)), 12604))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (arr_3 [i_1] [i_3]);
                            var_20 = (((arr_2 [i_0] [i_0]) ? ((((((arr_9 [i_1] [i_1] [16] [i_3]) ? var_7 : -342360989))))) : ((((((arr_2 [i_1] [i_0]) ? (arr_2 [i_0] [i_1]) : var_13))) ? var_13 : var_1))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 += (arr_5 [i_6] [i_5] [i_4] [i_6]);
                                arr_18 [i_6] [i_6 - 2] [i_6] [i_6] [i_6] [i_1] [17] = -719554164;
                            }
                        }
                    }
                }
                arr_19 [i_1] = (((arr_6 [i_0] [i_0] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
