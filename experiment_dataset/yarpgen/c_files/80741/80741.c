/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (arr_4 [i_0] [i_0] [i_1]);
                var_17 *= (var_14 && 248);
                var_18 = 227;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 &= ((((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 + 2]) | (arr_7 [i_0] [i_0] [i_2 + 1] [i_2 - 1]))));
                            var_20 = 230;
                            var_21 = (max(var_21, (((~(((min(var_11, var_11)))))))));

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] = (arr_4 [i_0] [i_1] [i_2 - 1]);
                                var_22 = var_9;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (max(((~(arr_8 [i_0] [5] [i_1]))), (((((arr_3 [i_0] [i_0] [i_1]) * var_9))))));
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
