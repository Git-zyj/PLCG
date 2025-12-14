/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_15 = 641730757;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [9] [i_0] = var_2;
                        arr_12 [i_0] = ((42976 - 2) != (arr_5 [i_1 + 2]));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_17 [i_0] [6] [i_0] [i_3] [3] [i_4] = (!2120479744);
                            arr_18 [i_1] [i_1 - 2] [i_2] [i_3] [8] [i_1] [i_2] |= ((var_13 ? -var_11 : (var_11 % 18446744073709551615)));
                            arr_19 [i_2] [i_0] [i_2] = (~var_4);
                        }
                    }
                }
            }
            arr_20 [i_0] [i_1] = ((~(arr_4 [i_0] [i_1 - 1])));
            arr_21 [i_0] [i_0] = ((620365973 ? (arr_13 [i_0] [i_1 - 1] [i_0]) : (((arr_3 [i_0] [i_1 + 2]) | -563921082))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_16 = (min(var_16, ((~(22560 || var_13)))));
            var_17 &= (~var_11);
            var_18 = 22560;
        }
        var_19 = (min(var_19, 620365973));
        arr_26 [0] |= ((var_7 | -11747) ? 9 : (~var_9));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_30 [11] [i_6] = 244;
        var_20 = ((9223372036854775807 ? var_5 : ((268435448 ? 14825 : 65532))));
        arr_31 [i_6] = var_3;
        arr_32 [i_6] [i_6] = (-4605491989425865307 / 62266);
    }
    var_21 = var_5;
    var_22 += (max(var_9, ((-2147483624 - (-9223372036854775807 - 1)))));
    #pragma endscop
}
