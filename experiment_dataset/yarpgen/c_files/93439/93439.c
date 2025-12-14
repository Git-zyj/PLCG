/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_12, ((((min(var_11, var_7)) > ((15364687571654593630 ? var_11 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 + 3] [i_2 - 3] [i_3 + 2] [i_1] = (arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 3]);
                                var_20 *= (((max((max(var_4, var_1)), (arr_13 [i_3 - 2] [i_3 - 2] [i_1 + 2] [i_3]))) >> (((~157) + 216))));
                                arr_17 [i_0] [i_1 - 2] [i_2] [i_1] [i_4] = max((((-(((arr_8 [i_1] [i_3 + 1] [8] [i_1]) ? var_16 : (arr_2 [i_0])))))), (min(((~(arr_7 [i_0] [i_1] [i_2]))), (arr_0 [i_3]))));
                                var_21 += (arr_15 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 3]);
                            }
                        }
                    }
                }
                arr_18 [i_1] [16] [i_1] = -95;
                var_22 = (max((((arr_9 [i_0] [i_1]) < (arr_9 [i_0] [i_1 + 2]))), ((-64 != (arr_9 [i_0] [i_0])))));
                var_23 = (((arr_12 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3]) > (40 > 0)));
            }
        }
    }
    var_24 = var_0;
    var_25 = (((max(((-95 ? 0 : -95)), (var_6 + 10))) << ((((var_17 ? -var_2 : (min(var_11, var_0)))) - 11430199149352386873))));
    #pragma endscop
}
