/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_14 += ((((((~-1) ? (min(249, var_4)) : -380801367))) ? ((((18446744073709551614 ? (arr_11 [i_1] [7] [7]) : 37662)) * var_6)) : (((-1574655060 ? 1 : 1)))));
                            var_15 = -1;
                        }
                    }
                }
                var_16 = (arr_9 [i_0] [i_0] [i_0] [1]);
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_14 [i_0] [9] [i_4]) >> (arr_15 [i_0] [i_0] [i_0] [i_5])));
                            var_18 &= (((((~1) + 2147483647)) >> ((26646 / ((26630 ? (arr_16 [0] [0] [0] [i_4] [0] [0]) : 2312491022))))));
                            arr_19 [i_5] [i_0] [i_4] [3] [i_0] = ((38896 ? 2840407460887061663 : 65532));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_6] [13] = min(((0 * (arr_21 [8]))), ((((-32767 - 1) ? (arr_26 [i_6 - 2] [i_7 - 2]) : 60))));
                    arr_30 [i_6] [i_7] [i_8 - 1] = ((-(arr_22 [10])));
                    arr_31 [i_6 + 1] [i_6 + 1] = ((38889 ? 18446744073709551615 : ((max((arr_21 [i_6 - 1]), ((((arr_28 [8] [8] [8]) & (arr_26 [i_6] [4])))))))));
                    var_19 = (!26646);
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
