/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_1;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] [i_0] = ((var_1 & ((((arr_2 [i_0]) != (((((arr_1 [3]) != (arr_2 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (((arr_4 [i_0 + 2] [i_0 - 2]) <= (arr_8 [i_0] [1] [i_0 + 2] [i_2])));
                    var_13 = (arr_9 [i_2 - 1] [i_0 - 3] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (arr_6 [i_1] [i_4]);
                                var_15 -= var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_2 & ((var_2 * (var_7 + var_8)))));
    #pragma endscop
}
