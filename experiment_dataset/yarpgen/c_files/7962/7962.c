/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(-1, var_13));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (arr_2 [i_0 + 3] [i_0] [i_0]);
                                var_17 = (max(var_17, (((~((~(arr_6 [i_3]))))))));
                                var_18 = (((min(var_11, 95)) >> (var_6 - 10082546664110634075)));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = 160;
                                var_19 = (arr_11 [i_1] [i_0] [i_1 - 2] [i_1] [7] [i_0] [7]);
                            }
                        }
                    }
                    var_20 = (max(var_20, (-1 + var_12)));
                    var_21 = (((((+(((arr_10 [i_0]) - (arr_0 [1])))))) ? (min((arr_12 [i_0] [i_1] [i_1 - 1] [i_1] [10] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))) : (min(((~(arr_10 [i_0]))), var_9))));
                    var_22 ^= ((~(((arr_11 [i_2] [0] [i_2] [i_2] [i_2] [0] [i_0]) ? (~var_1) : (~159)))));
                }
            }
        }
        arr_14 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_23 = ((!(arr_18 [i_5 + 1] [i_5 + 1])));

        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_24 = (arr_15 [i_5 + 1]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_28 [i_9] [14] [i_7] [i_7] [i_6] [3] = (((arr_21 [i_5] [i_6 + 1] [i_7] [i_9 + 1]) ? 0 : var_1));
                            var_25 = ((425962568 ? var_7 : (((((arr_15 [i_9 + 1]) != (arr_18 [i_7] [i_6])))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_26 &= 6;
            var_27 += (~268435455);
        }
        var_28 = ((var_5 ? 18446744073709551615 : -var_11));
    }
    var_29 = 2428041582;
    #pragma endscop
}
