/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((var_12 ? 36486 : 51));
    var_15 ^= ((~((~(576460752303423487 | var_10)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, (((((-52 / (arr_1 [14])))) ? (((((252 ? var_11 : (arr_1 [22])))) ? (max(4095, 18266)) : var_3)) : var_13))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_17 = var_0;
            var_18 |= (((((max((arr_0 [20] [20]), -63)))) | (((max(var_2, var_7)) & (~2783953208)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_6 [i_0] = ((var_1 % (arr_1 [i_0])));
            arr_7 [i_0] [i_0] = (((!var_2) >= (~var_11)));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_0] [i_0] [i_0] = -0;
                            var_19 ^= max(249, var_13);
                            var_20 ^= ((((((arr_14 [i_0] [i_4] [i_5] [i_6]) ? -52 : (arr_14 [i_0] [i_3] [i_5] [i_6])))) % (max((-57 || 0), var_8))));
                        }
                    }
                }
            }
            arr_20 [i_0] = ((~(max((max((arr_14 [i_3] [i_3] [i_0] [i_0]), var_13)), var_2))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_25 [10] |= (((((0 - ((var_9 ? var_12 : var_10))))) ? 7 : (((((max(var_13, var_5))) | var_6)))));
            arr_26 [i_0] [i_7] = ((-(max(244, (~var_11)))));
        }
    }
    var_21 = ((var_3 ? -9986 : (63 % 7)));
    #pragma endscop
}
