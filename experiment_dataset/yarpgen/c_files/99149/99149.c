/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(var_14, (-4840 / -24600))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1] = var_0;
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= var_2;
                                var_21 = var_11;
                                arr_14 [i_0] [i_1] [i_0] = ((~(arr_1 [i_4])));
                                var_22 &= var_15;
                            }
                        }
                    }
                    var_23 = -1143299700;
                    var_24 &= arr_11 [i_0 + 1] [i_0 + 2];
                }
            }
        }
    }
    var_25 &= (var_7 ? var_3 : (!var_12));
    var_26 &= ((+(((var_19 == var_10) ? (min(var_1, -1143299722)) : var_5))));
    var_27 = (min(var_27, 135));
    #pragma endscop
}
