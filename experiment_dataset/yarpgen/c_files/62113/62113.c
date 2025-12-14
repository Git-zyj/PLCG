/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_15, var_14));
                arr_6 [i_0] [i_1] [i_1] = (((((1 + ((var_2 ? var_17 : 234))))) ? ((((arr_3 [i_1 - 1]) / var_9))) : ((-((-1 ? 8388607 : 1590117319))))));
                var_19 = -19704;
                arr_7 [i_1] = (((((var_15 + ((24590 ? var_3 : -20918))))) ? (((22 <= 8804) ? -1152912708513824768 : var_16)) : (((((~(arr_0 [i_1])))) ? (~18446744073709551615) : (((-9693 ? 240 : (arr_3 [19]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((((((arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1]) >> (((arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]) - 203))))) <= ((((((arr_5 [i_0] [4]) ? -1424 : var_10))) ? ((var_0 / (arr_2 [i_0]))) : (22 / 1))))))));
                            var_21 = (min(var_21, ((max((!1), 2257262686)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_14;
    #pragma endscop
}
