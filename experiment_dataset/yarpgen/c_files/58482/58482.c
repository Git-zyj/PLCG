/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-24321 - ((max(-3831, 41214)))));
    var_21 = (((var_5 + 2147483647) << ((((max(var_8, var_15))) - 1))));
    var_22 = (!(((var_10 ? ((var_4 ? 1798240122 : var_3)) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((max(((max(21705, 41214))), (((arr_11 [i_0] [i_1 - 1]) ? (arr_11 [i_0] [i_0]) : -79))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [22] [i_4] = (+-29118);
                                var_24 = ((min(((max(29117, var_14))), ((-1 ? var_18 : var_1)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_2] = ((-(arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
