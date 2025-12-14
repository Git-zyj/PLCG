/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(min(1922893397, 608790604128571993))));
    var_13 |= ((var_0 ? (((var_1 + 2147483647) >> ((((var_2 ? 1049669688 : var_5)) - 1049669678)))) : var_10));
    var_14 = 369466422;
    var_15 = (((((var_11 + 2147483647) << (var_3 - 1))) >> (var_0 - 32238)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (((((-(arr_9 [i_0])))) ? (arr_8 [i_2] [i_0] [i_0] [4]) : (arr_6 [i_0] [10])));
                    arr_11 [i_0] [2] [i_0] = (arr_4 [i_1] [i_1] [i_2]);
                    var_17 = 1049669698;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 |= 12;
                                var_19 = (max((((-(arr_16 [i_1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_0])))), (max((arr_13 [i_0] [14] [i_0] [i_0]), 702098215399534108))));
                                var_20 |= 0;
                            }
                        }
                    }
                    arr_18 [20] |= (((arr_2 [14]) == ((max(-28955, var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
