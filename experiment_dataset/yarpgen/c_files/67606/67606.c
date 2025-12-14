/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(1, (var_10 + -2899507469482726420)))) ? var_3 : (((~((32758 ? var_9 : 1)))))));
    var_13 = (~(!var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 1] = (max((arr_5 [i_0] [i_1 + 1] [0]), (arr_1 [i_4 - 2])));
                                arr_14 [i_0] [i_3] = (!2232078817);
                            }
                        }
                    }
                    var_14 &= (arr_1 [i_1 - 1]);
                    var_15 = (((!var_8) ? (((arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) ? (arr_7 [i_0] [7] [i_0] [i_1 - 1]) : (arr_7 [i_0] [12] [i_2] [i_1 - 1]))) : ((((!(arr_7 [i_2] [i_2] [i_2] [i_1 + 1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_21 [6] = ((!((((arr_2 [i_5] [i_6]) ? (arr_2 [i_5] [i_5]) : (arr_2 [0] [i_6]))))));

                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_16 = ((!(~19465)));
                                var_17 = (-1 != (arr_28 [i_5] [i_9] [i_7 - 2] [7]));
                                arr_30 [i_5] [i_6] [1] [9] [i_9] = 24175;
                                var_18 = (max(var_18, -3));
                                var_19 |= (((~(arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                            }
                        }
                    }
                    var_20 += ((((max(((~(arr_22 [i_6]))), ((((arr_16 [i_5]) ? (arr_3 [i_7 - 3] [3] [i_5]) : (arr_28 [i_5] [i_6] [7] [i_5]))))))) ? (arr_23 [i_5] [4] [i_5]) : ((min(-104, 25152)))));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_38 [5] [i_6] [i_10] [i_11] [i_12] = ((var_7 ? ((min((!13825), (arr_0 [i_5])))) : (arr_28 [i_5] [i_5] [i_11] [i_12])));
                                var_21 = (arr_1 [i_11]);
                                var_22 -= 32768;
                                var_23 += ((-2899507469482726420 ? 1 : -25153));
                                var_24 += (arr_7 [i_11] [i_6] [i_10] [0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
