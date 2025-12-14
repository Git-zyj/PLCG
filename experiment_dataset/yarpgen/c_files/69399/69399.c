/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (--98);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_13 = -19939;
                    arr_10 [23] [i_1] = var_2;
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] [i_3] = (arr_3 [i_0]);
                    var_14 = ((-(((arr_7 [i_1] [i_1] [12]) ? -98 : var_1))));
                    var_15 = var_0;
                    var_16 = ((-109 >= (((-(arr_14 [12] [i_3 + 4] [i_3] [i_3]))))));
                    arr_16 [i_1] [i_1] [i_1] = (max(((((arr_4 [i_3 + 3] [i_3 - 3]) % var_0))), -var_3));
                }
                var_17 = (~-119);
            }
        }
    }
    var_18 = (var_10 | -var_12);
    var_19 = var_2;
    var_20 = ((~((-1725854734 / (max(2088960, var_4))))));
    #pragma endscop
}
