/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((~((var_2 ? var_12 : var_9))))), ((((min(var_4, var_4))) ? ((22837 ? var_0 : var_8)) : var_2))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (min((min((var_6 + var_2), (max(var_11, 1)))), ((max(((var_7 ? (arr_8 [i_0] [i_0] [i_0]) : var_1)), var_3)))));
                            var_17 = ((((((max(var_2, var_9))) ? (254 < var_13) : var_13)) + (~var_6)));
                            var_18 = ((~(min(((1 ? var_9 : var_6)), -21818))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1 - 1] [i_4] [i_5] [i_0] [i_5] = ((max((min(var_10, var_11), var_5))));
                                var_19 = (min(var_19, (((((-(((arr_15 [i_6] [i_5] [i_4] [i_5] [i_4] [i_1] [i_0]) ? -10163 : 28)))) + -1)))));
                                var_20 += (max((arr_13 [9] [i_1 - 1] [9] [1] [i_1]), var_2));
                                arr_17 [7] [i_0] [i_0] [i_5] [i_5] [i_5] [i_6] = ((!((min((((0 ? -6851723774515925798 : 1))), (~var_13))))));
                                var_21 = ((+((var_1 ? (arr_3 [i_1] [i_1 - 1] [i_1 - 1]) : -1308823444))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_7] [i_7] [i_8] = (max((min(((-79 ? var_12 : var_6)), ((var_9 ? var_9 : var_6)))), (max(((min(var_7, var_8))), var_4))));
                            var_22 = ((~((~(~var_8)))));
                        }
                    }
                }
                arr_23 [i_0] [i_0] = var_13;
            }
        }
    }
    #pragma endscop
}
