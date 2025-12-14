/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 1092909264;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_2] [i_0 - 2] [i_0 - 2] [i_0] = ((((max(((11705565218254007949 ? (arr_3 [i_0]) : -1)), var_13))) ? (!6207451861636737614) : 1));
                            var_18 = ((20 < ((max(31744, 31730)))));
                            var_19 = (min(var_19, (~15)));
                            var_20 = max(9, (min(218833147146141570, var_7)));
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = (arr_12 [1]);
            }
        }
    }
    var_21 = 931584735;
    #pragma endscop
}
