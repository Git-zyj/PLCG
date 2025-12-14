/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 3] [i_1] = (min((((-166511988 && (arr_4 [i_0 - 2])))), (((arr_4 [i_0 - 3]) - (arr_4 [i_0 - 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (arr_12 [i_0] [i_1 + 1] [i_2 - 1] [i_3]);
                                var_16 = (~3184566859);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_17 = 3184566859;
        arr_18 [i_5] [i_5] = (max((((-7633522662174053668 ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : 127))), ((3184566854 ? (arr_3 [i_5] [i_5]) : 12))));
        arr_19 [i_5] [i_5] = ((((((((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_4 : 4294967295)) * (~6137)))) ? var_13 : ((((arr_2 [i_5]) ^ 3184566854)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_18 = ((-(arr_3 [i_6] [i_6])));
        var_19 = (!var_3);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_20 = ((!(4294967295 % 287877353)));
        var_21 = (1048576 / var_12);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_30 [i_7] = (((arr_27 [i_7] [i_8] [i_9]) <= (arr_13 [i_9 + 1])));
                    var_22 = (arr_27 [i_7] [i_8] [i_9 + 1]);
                    arr_31 [i_9] = (arr_25 [i_8]);
                    var_23 = ((1110400442 ? 1432580782 : 127));
                }
            }
        }
        var_24 = -6138;
    }
    #pragma endscop
}
