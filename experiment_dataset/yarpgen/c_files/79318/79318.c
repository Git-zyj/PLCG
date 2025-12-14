/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((18446744073709551595 > 37) ^ var_11))) && (~var_11));
                arr_8 [i_1] = 4990;
                var_12 = (max(26, 60545));
                var_13 = ((-((var_11 ? var_5 : var_11))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_0] [i_4] = ((83 * (122 >= -27563)));
                                var_14 = (max(((var_4 ? var_0 : var_8)), var_7));
                                var_15 = -var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (-11673 % 60560);
    #pragma endscop
}
