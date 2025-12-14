/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? var_15 : (max(((min(-1362815936, 1362815933))), (var_5 % 1)))));
    var_20 = var_13;
    var_21 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = arr_1 [i_0];
                    var_22 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [1] [i_4] [1] = (min((((var_10 + var_5) / ((((1362815917 || (arr_3 [i_2]))))))), (arr_4 [i_4] [i_3])));
                                var_23 = (((arr_11 [3] [i_3] [i_1] [i_0]) <= ((-((18446744073709551615 ? 1362815956 : 270215977642229760))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = 14544775099501698733;
                                var_24 *= var_4;
                                arr_17 [i_4] [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
