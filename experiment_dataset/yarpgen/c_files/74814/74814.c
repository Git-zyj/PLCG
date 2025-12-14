/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((-(((!var_10) ^ var_4)))))));
    var_15 ^= var_4;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0 + 2]);
                                var_16 = (!1);
                                arr_17 [i_0] [i_3] [i_2] [3] [i_4 + 1] [i_2 - 1] [i_2] = ((((((-2147483647 - 1) ? (arr_4 [i_0] [i_0] [i_0]) : var_3))) ? var_2 : (2147483647 + var_3)));
                            }
                        }
                    }
                    var_17 = (min(var_17, var_6));
                    var_18 = (-2147483647 - 1);
                }
            }
        }
        var_19 &= ((((-(arr_14 [i_0 - 1] [4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    arr_25 [i_5] = (((((2147483647 == (arr_8 [i_6] [i_5]))))));
                    arr_26 [i_6] [i_5] [i_0] = 28;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_20 = (arr_32 [i_8 + 1] [i_7] [i_6] [i_5] [i_0]);
                                var_21 = (arr_6 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_11));
    #pragma endscop
}
