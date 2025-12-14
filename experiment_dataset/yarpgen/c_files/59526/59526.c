/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 6968;
    var_12 = (var_5 + 2686114896);
    var_13 = -119;
    var_14 = -1614849625;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((((((arr_3 [i_1 + 1] [i_1 - 3]) ? (arr_3 [i_1 + 1] [i_1 - 3]) : (arr_3 [i_1 + 1] [i_1 - 3])))) && ((115 <= (arr_3 [i_1 + 1] [i_1 - 3])))));
                var_16 = ((((max((arr_0 [15]), 1614849625))) ? var_7 : (max(((127 / (arr_3 [i_0] [i_0]))), 2147483630))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (min((((-122 <= ((2048 ? var_5 : 17014036491677339636))))), (min((arr_10 [i_0] [10] [i_2] [i_3 - 1] [i_4 - 3]), ((var_10 ? (arr_8 [i_2] [i_2] [13] [i_2] [i_2] [i_2]) : var_4))))));
                                var_18 = ((((9828921731862301062 && ((((arr_0 [1]) ? 17014036491677339636 : var_0))))) && ((((arr_10 [i_1 + 1] [i_3 - 3] [i_4 - 4] [i_1 + 1] [i_4 + 2]) ? (min(17014036491677339636, 572240230)) : (arr_10 [i_3 - 4] [i_2] [i_0] [i_3 - 2] [i_4 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
