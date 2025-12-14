/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? (!229) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (max(0, -7999639989140682567));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [15] [i_1] [i_0] [15] = var_11;
                            arr_11 [i_0] [i_0] [i_2 - 1] [0] = (min((min(74, 181)), (arr_2 [i_0] [i_1] [i_1])));
                        }
                    }
                }
                arr_12 [i_0] = ((((var_0 > ((var_14 ? var_3 : var_17))))) + (arr_4 [15]));
                arr_13 [i_0] = (((1846291455348105267 / 64) & var_16));
            }
        }
    }
    #pragma endscop
}
