/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 17237882421730399822));
    var_16 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 |= var_12;
                var_18 = (max(var_18, (~0)));
                var_19 |= (max((arr_2 [i_1]), var_14));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((~(!var_12)));
                            var_21 = (arr_0 [i_0]);
                            arr_11 [i_0 - 1] [i_2] [i_3] &= (arr_2 [i_3]);
                            var_22 = var_10;
                            var_23 = (((-(arr_0 [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (!(~var_2));
    #pragma endscop
}
