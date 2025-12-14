/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] = (~var_7);
                var_13 = max(var_10, (arr_4 [0] [i_0] [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] = var_4;
                            arr_20 [i_2] [i_3] [i_4] [i_5] = (18446744073709551591 % (((((((-(arr_8 [17])))) && var_12)))));
                            arr_21 [i_3] = var_9;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_30 [i_8 - 3] = ((max((((24419 ^ (arr_6 [i_8])))), 281474976710655)));
                                var_14 = (min(var_14, var_6));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_38 [i_2] [i_3] [i_10] [i_11] = min((41117 & var_4), ((((var_9 && var_1) >> (((((arr_27 [i_2] [i_2] [16] [6] [i_10 + 1] [i_2] [i_11]) ^ 4891461026936177932)) - 13555283046773390126))))));
                                var_15 -= (((min(((var_9 ? var_12 : 13973156996693651404)), (arr_29 [i_2] [i_3] [i_9] [i_10] [i_11])))) ? (4 & var_6) : ((((max((arr_32 [i_11] [i_3] [i_3] [i_2]), (arr_33 [i_2] [i_2] [i_2])))) ? 4100845281506032554 : (arr_9 [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    var_17 -= var_12;
    #pragma endscop
}
