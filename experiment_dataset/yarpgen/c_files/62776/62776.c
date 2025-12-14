/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((~(~9223372036854775807))) != (((((4294967294 ? 0 : 65535))) ? (~1417000658) : 3671910800614531634))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (0 || -832743274233389770);
        arr_2 [i_0] = (((((arr_1 [i_0]) ? var_10 : var_11))));
        arr_3 [i_0] = (((var_7 >> 12) >= (arr_1 [i_0])));
        var_16 -= (max(0, 0));
        arr_4 [i_0] |= (((((arr_0 [i_0]) || (var_9 | var_1))) || (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = (((((arr_1 [i_1]) * 0)) >> (((arr_1 [i_1]) - 6787))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_18 &= 3671910800614531634;
                    var_19 = (min(var_19, ((((4294967295 - 0) - var_6)))));
                }
            }
        }
        arr_13 [i_1] = (max((((var_10 / 2505492862) ? (var_11 ^ var_8) : ((0 << (((arr_5 [i_1]) + 2753617982116250716)))))), -3671910800614531637));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_20 = (arr_16 [i_4] [i_4]);
        var_21 = (var_3 % -3671910800614531664);
        arr_17 [i_4] = 0;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 = (min(var_22, 4248389232));
                    arr_23 [i_6] [i_4] [i_4] [i_4] = ((var_1 ? var_1 : 4270957896));
                    arr_24 [i_4] [i_5] = (65535 ? 4294967281 : -2409680002553578293);
                    arr_25 [i_4] [i_4] [i_4] [i_4] = ((((~(arr_22 [i_4] [i_5] [i_4] [i_4]))) | var_3));
                    var_23 = (65529 | var_7);
                }
            }
        }
    }
    #pragma endscop
}
