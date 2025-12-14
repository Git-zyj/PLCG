/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((var_2 < (max(var_19, var_12))));
    var_22 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] = (min((((arr_15 [i_0] [i_0] [i_0] [i_2] [i_0]) > (arr_15 [i_0] [i_0] [i_0] [i_2] [18]))), (!18)));
                                var_23 = (arr_0 [i_1]);
                                var_24 = (arr_8 [i_0]);
                            }
                        }
                    }
                    var_25 = (~101);
                    var_26 = 83;
                }
            }
        }
    }
    #pragma endscop
}
