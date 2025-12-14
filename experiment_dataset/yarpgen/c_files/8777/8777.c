/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = ((((!((min(var_9, var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (~var_15);

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_20 = (min(var_1, 1874499498));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (min((max((arr_5 [i_4] [i_3 + 3] [i_3] [i_0 - 4]), (arr_7 [i_0 - 4] [i_0] [i_0] [i_0 - 4]))), var_11));
                                var_22 |= ((var_8 & ((min((arr_5 [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]), (arr_2 [10]))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] = ((2420467797 ? 2420467798 : 7306693300872317228));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((var_15 ? var_11 : var_2))) ? var_14 : var_9));
    #pragma endscop
}
