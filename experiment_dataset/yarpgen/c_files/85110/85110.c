/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1] [10] [i_0] = -111;
                            var_10 &= ((!(arr_0 [i_0 - 2])));
                            var_11 = var_0;
                        }
                    }
                }
                var_12 = (min(var_12, (((~((~(arr_3 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_13 = (((-(arr_1 [i_4]))));
                            var_14 ^= ((-(((!var_5) ? var_5 : var_6))));
                            arr_15 [i_1] [i_4] [i_4] [i_5] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_15 += (min(var_5, var_1));
    var_16 = ((((var_9 >= (var_9 != var_8))) ? (((((var_8 ? 99 : var_9))) ? var_7 : var_4)) : (((((var_7 ? 1 : var_6))) ? -var_0 : 148))));
    var_17 ^= (((max(((min(var_3, var_3))), (~-4581437785519757641))) ^ (((var_8 + ((max(var_3, 143))))))));
    var_18 = (((~var_7) ? var_9 : 146));
    #pragma endscop
}
