/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (var_9 / var_5) : (!19060)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((+(min((arr_0 [i_0]), ((1 ? 1 : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 *= (arr_3 [16] [i_2 - 2] [i_3 - 1]);
                                arr_11 [i_0] [i_0] [i_3] [i_3] = (((((var_0 ? var_3 : var_1))) ? var_4 : 46469));
                                var_13 *= 12808633383741230181;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_1] = ((arr_0 [12]) ? ((((arr_6 [i_0] [i_1] [i_1]) ? ((48689 << (19058 - 19057))) : (arr_3 [i_0] [i_0] [i_2 + 1])))) : -5638110689968321451);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, 1048575));
                                var_15 = (min(var_15, (((~(min((arr_2 [7] [i_2 + 1] [i_5 - 3]), var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 -= var_8;
    var_17 &= 1;
    #pragma endscop
}
