/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_0 - 1] = (!27976);
                            arr_13 [10] [10] &= var_15;
                            arr_14 [i_0] [i_3] [i_1] [i_2 - 2] [i_3] = 0;
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = (~var_17);
            }
        }
    }
    var_20 *= ((!((min(var_2, var_17)))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_6] [i_6] [i_6] = (((arr_8 [i_4] [i_4] [i_5] [i_6]) ? (((arr_20 [i_4 + 1] [i_4] [i_6]) ? (16783671157259485420 ^ var_16) : var_11)) : var_14));
                    var_21 = ((1 ? 17912 : 2494941127792200107));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (min(var_22, 1));
                                var_23 = (max(var_23, (((var_8 ? 1 : 1)))));
                                arr_27 [i_4] [i_4 - 1] [i_4] [i_6] [i_6] [i_8] [i_8 - 1] = (((arr_24 [i_4] [i_6]) - ((~(arr_1 [i_4 + 2])))));
                            }
                        }
                    }
                    var_24 = ((((max(1, (arr_3 [i_5])))) ? 425 : (114688 == 34728)));
                }
            }
        }
    }
    var_25 = (min(var_25, var_8));
    #pragma endscop
}
