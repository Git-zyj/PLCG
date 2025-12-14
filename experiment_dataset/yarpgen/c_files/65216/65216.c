/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = -40;
                    arr_10 [9] [i_1] [i_1] [i_2] = (~var_1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (~28672);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] = (min((arr_14 [i_2 + 2] [i_4 - 2]), (!-961132330)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!(var_7 + var_7)));
    var_20 = ((((((var_5 ? var_6 : var_3))) * -var_15)));
    #pragma endscop
}
