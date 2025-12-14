/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((min(0, -7240253678035016346)));
                    arr_9 [18] [i_0] [i_2] [18] = var_17;
                    arr_10 [i_0] [i_1] [i_1] [i_2 + 2] = ((-((~(arr_2 [i_2 + 4] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 -= (((max(((min(1, 39909))), (arr_11 [0] [i_0 - 1] [i_4 - 1] [i_0 - 1]))) << (~-1)));
                                arr_15 [i_4 + 1] [i_0] [i_2] [i_0] [1] = (((((~(((arr_6 [i_0] [i_0]) ? (arr_4 [12] [12] [i_2] [i_2]) : (arr_14 [i_0] [i_0] [i_0] [20] [i_4])))))) ? (min(var_3, var_9)) : (max(var_16, ((517363731 ? var_16 : var_10))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_24 [i_0] = 6297372110693408127;
                        arr_25 [9] [i_0] [i_7] [i_7] [i_7] [i_7] = var_1;
                        var_21 *= (arr_13 [i_7] [i_7 - 1] [i_7] [20] [i_7 + 3] [i_7]);
                    }
                }
            }
        }
        arr_26 [i_0] = (max((((1323305722025433553 < (((var_11 ? (arr_11 [0] [i_0] [i_0] [i_0]) : 7240253678035016363)))))), ((-((-7 ? 17 : var_17))))));
        var_22 *= (((((var_4 ? var_14 : (arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) ? (((arr_16 [i_0 + 1]) ? (arr_19 [i_0 + 1] [1] [i_0 - 1]) : (arr_19 [i_0 + 1] [i_0] [i_0 + 1]))) : (((var_15 != (arr_19 [i_0 + 1] [i_0] [i_0]))))));
        var_23 = (((min(var_8, ((var_8 ? (arr_16 [i_0 + 1]) : var_7)))) != (~-46711)));
    }
    var_24 = var_1;
    var_25 -= var_18;
    var_26 = ((-((var_4 ? 369461596 : var_17))));
    #pragma endscop
}
