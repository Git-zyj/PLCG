/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, ((min(((((112 ? -4682852358406848447 : -4682852358406848466)))), var_13)))));
        var_18 = var_6;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 ^= ((((((arr_14 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 2]) ? var_16 : (arr_14 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1])))) ? var_1 : (min(var_6, (min(var_8, (arr_11 [i_0] [10] [1] [i_3] [i_4])))))));
                                arr_15 [i_1 - 1] [i_3] [i_0] [i_4] = -4682852358406848464;
                            }
                        }
                    }
                    var_21 = (min(var_21, (!var_11)));
                }
            }
        }
        arr_16 [0] |= ((-(arr_8 [i_0] [i_0] [i_0] [2])));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6] = (min(((((arr_11 [i_5] [i_5] [i_6] [i_6] [i_6]) ? var_2 : (arr_8 [i_6 + 3] [i_6] [16] [16])))), (min((((arr_19 [9]) ? var_1 : (arr_5 [i_6] [i_5] [i_5]))), var_9))));
                arr_23 [i_6] = (arr_21 [i_6]);
                var_22 = (((((var_13 ? (arr_14 [i_6 - 1] [i_6 + 2] [i_6 + 4] [i_6 - 1] [i_6 - 1]) : (((arr_3 [15]) ? (arr_0 [18]) : var_5))))) ? var_4 : (arr_5 [i_6 - 2] [i_6 - 2] [i_6 + 4])));
                arr_24 [i_5] |= var_16;
            }
        }
    }
    var_23 = var_0;
    var_24 = (max(var_24, ((min(var_13, var_7)))));
    #pragma endscop
}
