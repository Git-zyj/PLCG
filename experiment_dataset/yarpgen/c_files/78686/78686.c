/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (1238190526588326173 != 992895526);
    var_21 = (!var_4);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 ^= ((max(1, var_15)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] = ((((136 < 119) >= (arr_11 [i_0 + 1] [i_1 - 1]))));
                                var_23 = (~108);
                                var_24 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 118;
    #pragma endscop
}
