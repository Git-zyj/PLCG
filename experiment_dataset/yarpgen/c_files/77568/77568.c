/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9;
    var_17 -= ((((((~253) ? (~1) : 131))) ? ((15 ? 1 : var_9)) : 7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_0] |= ((((min(17062, 246))) ? 0 : ((min((min(-1, -17073)), 9)))));
                            var_18 = (min(var_18, ((((arr_6 [i_1] [i_2]) != 26)))));
                            var_19 = 1;
                            var_20 ^= ((((((arr_1 [i_3]) ? (arr_6 [i_0] [i_0]) : var_3)) < 28129)));
                            var_21 -= (max((arr_7 [i_0] [i_1] [i_1]), 8));
                        }
                    }
                }
                var_22 = (max(64, 250));
                arr_11 [i_0] = 220;
                var_23 -= ((-((((1609369098 != 1) >= ((min((arr_2 [i_1] [i_1]), 1))))))));
            }
        }
    }
    var_24 = var_14;
    var_25 = var_14;
    #pragma endscop
}
