/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [3] [i_0] [i_0] [3] = (max((min(((min(var_0, (arr_12 [i_1] [i_3] [i_1] [i_1] [i_0])))), -5561458282229192783)), ((max((min(var_12, var_12)), ((var_10 ? var_7 : (arr_7 [1] [1] [1]))))))));
                                var_16 &= ((!((!(!var_4)))));
                                arr_15 [i_1 - 2] [i_1 - 2] = (min((min((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) * (arr_4 [i_4] [i_3]))), var_1)), ((((arr_3 [i_0] [1] [i_2]) <= var_15)))));
                                var_17 = ((max(var_11, 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_18 ^= var_8;
                                var_19 = ((!(((((var_15 ? -1467922660 : 93)) * (((arr_7 [i_1] [i_1] [8]) >> (((arr_20 [i_0] [i_0] [0] [i_0] [i_0] [i_0]) + 464539666)))))))));
                                var_20 ^= ((!(((-(arr_11 [9] [1] [i_2] [i_2] [2] [1]))))));
                                var_21 = (arr_12 [i_0] [i_0] [i_2] [i_5] [i_2]);
                                var_22 = (max(var_22, ((max((min(var_9, (min((arr_20 [i_6] [i_6 + 2] [i_5] [2] [i_1] [i_0 - 1]), -21)))), (!var_12))))));
                            }
                        }
                    }
                    var_23 &= var_11;
                }
            }
        }
    }
    var_24 = ((var_7 ? ((-(((var_3 + 2147483647) >> (var_2 - 8804596609395048468))))) : var_13));
    #pragma endscop
}
