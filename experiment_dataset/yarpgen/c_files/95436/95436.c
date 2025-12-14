/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-var_1 % var_10);
    var_13 = ((15872 ? (~-15872) : ((-15872 ? var_10 : 15872))));
    var_14 = var_9;
    var_15 = (~(min(1537858876, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = var_7;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_17 = (((arr_4 [i_2 - 1] [i_1] [i_2]) ? (arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1]) : (arr_4 [i_2 - 1] [17] [i_2 - 1])));
                    arr_7 [i_1] = (!var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = 176;
                                arr_12 [i_3] = 138;
                                arr_13 [i_2] [i_4] |= arr_0 [i_4];
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_1] [i_1] = 132;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] = ((((var_0 ? 4126966952 : 4126966977)) + (arr_0 [i_2 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
