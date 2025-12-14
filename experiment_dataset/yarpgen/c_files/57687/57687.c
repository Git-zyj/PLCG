/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((arr_1 [1]) ? (arr_2 [i_0] [i_0]) : ((~(((arr_1 [i_0]) ? var_7 : 118)))));
                var_17 = (max(var_17, (((((((((arr_2 [i_0] [i_0]) && (arr_1 [i_0])))) <= (((2514762950004164208 >= (arr_4 [i_0])))))) ? (arr_2 [i_0] [i_0]) : (((arr_3 [i_0] [i_0] [i_1]) ? (~42006) : (!2514762950004164208))))))));
                var_18 = (((arr_0 [i_0]) ? (arr_0 [i_1]) : var_10));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 += (-1622712351 || var_5);
                                var_20 = ((var_15 ? ((-(((arr_2 [i_2] [i_2]) ? (arr_12 [i_2] [9] [i_4 - 1] [8]) : (arr_5 [i_2] [i_2]))))) : (((((arr_0 [1]) ? 5065675776356653390 : var_10)) - (((max((arr_7 [i_4] [i_3]), (arr_15 [i_4] [i_4] [10] [i_4] [i_6])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_22 [i_8] [i_8] [i_8] = ((min(((var_13 ? var_13 : (arr_13 [i_2] [i_2] [i_2] [i_2]))), var_10)));
                                var_21 = arr_8 [i_2] [i_2] [i_2];
                                arr_23 [i_8] [i_8] [i_4] [i_7] [i_8] [i_3] [i_8] = (arr_5 [i_2] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
