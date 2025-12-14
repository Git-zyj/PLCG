/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 ^= (min(((((arr_2 [i_0 - 2] [1]) ? var_18 : ((1 ? var_2 : var_2))))), (min(-var_0, 26340))));
        arr_4 [i_0] [i_0] = (((((53 + var_5) | (((180 ? 1 : 1))))) - ((((1 * var_15) ? ((3595 ? var_7 : -3595)) : 1)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_4] = (max(((((((arr_15 [i_1] [i_4] [i_1] [i_1] [i_1]) - 46))) ? (var_1 == var_10) : 1)), ((var_1 + (3 * 0)))));
                                var_21 = (min(var_21, ((max(((var_3 ? var_1 : var_15)), (1 == -1624))))));
                            }
                        }
                    }
                    arr_17 [i_3] [i_2] [i_1] = (arr_12 [15] [i_3 - 2] [i_3]);
                    arr_18 [i_1] [i_1] [i_1] [i_1] = (arr_11 [i_3 - 1] [i_3 - 1]);
                }
            }
        }
        var_22 |= var_11;
        var_23 = (min(var_23, ((((!-9175) && ((max(((var_19 ? (arr_1 [i_1] [i_1]) : 104)), ((((arr_1 [i_1] [7]) && 33634)))))))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] [i_6] |= 2145440581;
        var_24 = (!-34);
    }
    var_25 = ((~((var_15 ? (var_5 - var_9) : var_11))));
    var_26 |= var_8;
    #pragma endscop
}
