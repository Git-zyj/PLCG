/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_2, var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_20 *= var_7;
                            var_21 = ((((((arr_2 [i_2]) / (arr_2 [i_2])))) ? var_4 : ((((((0 ? 1425990989 : 1425990989))) ? (arr_7 [i_0 - 2]) : (arr_8 [i_0] [i_0] [i_0 - 1] [10]))))));
                            var_22 -= var_8;
                            arr_10 [i_1] [13] [13] [i_1] [12] [i_1] = ((min(((arr_9 [1] [2] [i_2] [i_3]), (arr_1 [i_1])))));
                            var_23 = var_5;
                        }
                    }
                }
                var_24 = (max(-1425990989, (min(1425990999, (arr_3 [i_0] [i_1])))));
                var_25 ^= var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_26 = (((arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1]) ^ (((-(1425990989 / var_7))))));
                                var_27 *= 1425990999;
                                arr_25 [i_4] [i_6] [i_6] [2] [i_8] = max(2868976307, var_16);
                            }
                        }
                    }
                }
                var_28 = var_0;
            }
        }
    }
    #pragma endscop
}
