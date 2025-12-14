/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 *= ((((max(var_11, (~7492462213749200533)))) ? (((!-1459740079) ^ var_4)) : -115));
    var_18 += 6163422846566687310;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = var_8;
                            var_20 *= (-(max((((arr_8 [i_0]) * var_9)), 7900)));
                            arr_11 [i_0] [i_1] = 7164158147942258165;
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((!(((59757 ? 0 : (max(2, 86)))))));
            }
        }
    }
    #pragma endscop
}
