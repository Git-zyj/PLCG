/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [2] &= (-1 ? (1443057420354357368 != 39636) : (arr_0 [4] [i_0 + 2]));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_17 = -62520;
            var_18 = (((arr_3 [21] [i_1 + 1]) | -1));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_0] = -2003213471;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_0] [i_2] [i_0] [i_0] = ((((((arr_0 [i_0] [i_3]) / (arr_5 [i_4 + 2] [i_4 + 2] [i_4 + 2])))) || (1691031610 + 3899493366732358712)));
                            var_19 = (max(var_19, (((var_3 - (((93 / 1347006720) / (((arr_11 [i_0] [22] [1] [i_4] [i_5]) ? var_15 : var_7)))))))));
                        }
                    }
                }
            }
            var_20 &= (arr_0 [22] [22]);
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_21 = (min(var_21, ((12571520062126013893 * (arr_5 [i_6 - 1] [i_0 - 2] [i_0 - 1])))));
            var_22 = ((min((((8191 ? var_1 : 112)), 21253))));
        }
        var_23 *= 0;
        var_24 |= ((~(!1)));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_25 -= (arr_4 [i_7] [i_7] [i_7]);
        arr_20 [1] = max((((1163941785 - -55) ? ((1 ? (arr_16 [i_7] [19]) : var_7)) : (60155 != 3459931884473248458))), (var_16 % -805641298));
    }
    var_26 *= var_1;
    var_27 *= ((((var_9 ? var_9 : -1))));
    #pragma endscop
}
