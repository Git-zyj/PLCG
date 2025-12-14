/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -32764;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (((30344 ? (min(1286643961949215741, (arr_0 [i_0]))) : (arr_1 [i_0]))) | (((var_8 ? ((0 ? var_1 : var_7)) : (((((arr_0 [i_0]) >= (arr_0 [i_0])))))))));
        var_13 = (min(var_13, (((+(min((-2147483647 - 1), (arr_0 [14]))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = var_9;
                    var_14 &= (min(-3934726602021316950, -1286643961949215741));
                }
            }
        }
        var_15 = var_3;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((((((arr_12 [i_4]) || 4096)))) || (((min(var_10, (arr_4 [8]))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_18 [i_5] [i_5] = var_8;
            var_16 = (((arr_11 [i_4]) ? (((4119 ^ (arr_8 [i_4] [i_4] [i_5] [i_5])))) : var_2));
            var_17 = 3934726602021316954;

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_18 = (1939724575 % 36714);
                var_19 = (arr_2 [i_4]);
                var_20 = ((20265 ? ((var_7 ? 249 : (arr_6 [i_6]))) : ((-864121097 ? (arr_8 [i_4] [i_5] [i_5] [i_6]) : 504))));
                var_21 = 1;
                arr_23 [i_5] = 3611277503;
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_32 [i_7] [11] [i_5] [i_4] = 1;
                            arr_33 [i_4] [i_5] [i_7] [i_5] [i_9] = (arr_5 [i_4]);
                        }
                    }
                }
                var_22 = var_5;
            }
        }
        var_23 *= (arr_2 [i_4]);
        arr_34 [i_4] = (0 ? ((((454928335 - 2648742890) ? var_6 : ((0 ? -442942842 : var_4))))) : ((64888 ? (min(var_3, -7018504907434853917)) : (min(25, (arr_2 [i_4]))))));
    }
    #pragma endscop
}
