/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = max((~var_14), ((((9965713596231483719 << (4139720695467174766 - 4139720695467174709))) | (arr_0 [9] [i_0]))));
        var_21 = (arr_1 [5] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_1] = ((~((128 ? var_11 : (arr_3 [i_1])))));
            arr_10 [5] [i_1] [5] = var_17;
            var_22 = (arr_8 [i_1] [i_1 - 1]);
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_23 = (((-1 ? 22 : 120)));
            var_24 = (max(var_24, (1 - 1)));
            arr_13 [i_1] = var_7;
        }
        var_25 = 14712811298640069276;
        var_26 = (((arr_8 [i_1] [i_1 + 1]) >> (var_0 + 21392)));
        var_27 = ((((((arr_3 [i_1]) ? var_5 : (arr_11 [i_1] [18] [i_1])))) ? 1 : 1));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                {
                    var_28 = (((arr_15 [i_4 + 1]) ? -2451356989596039147 : 3259389150155225394));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_29 &= var_11;
                                var_30 = (-9223372036854775807 - 1);
                                var_31 |= (((arr_4 [i_4] [i_4]) % (arr_8 [i_4] [i_4])));
                                var_32 = (max(var_32, (((~(-9223372036854775807 - 1))))));
                            }
                        }
                    }
                    var_33 = (arr_3 [i_1]);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_34 = ((2 / ((max((arr_26 [i_8]), -28201)))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_35 = (var_15 ^ (max(((((arr_15 [i_9]) || var_8))), (arr_29 [i_8] [i_10 + 3]))));
                        var_36 = ((((((arr_7 [i_10 + 1] [i_10] [i_10 - 1]) ? 3259389150155225394 : (arr_7 [i_10 + 1] [4] [i_10 - 1])))) && ((max((arr_7 [i_10 + 1] [21] [i_10 - 1]), (arr_19 [i_10 + 1] [i_10] [i_10 - 1] [i_10] [i_10 + 1]))))));
                        arr_35 [i_11] [i_10] [1] [i_10] [9] = arr_11 [i_8] [i_10 + 3] [i_10];
                        arr_36 [i_11] [i_10] [0] [i_8] [i_8] |= ((((max(var_11, (min((arr_5 [i_8] [11] [24]), var_11))))) ? (min((-9223372036854775807 - 1), 1)) : (((max(var_6, (min(var_7, (arr_18 [i_11] [i_10] [i_9] [i_9] [1] [i_8])))))))));
                        var_37 = (max(var_37, ((max((max(var_0, var_13)), ((((arr_20 [i_8] [i_9 - 1] [i_9 + 3] [i_9 + 3] [i_10 + 1]) || (arr_17 [5] [i_8] [i_9 + 2] [i_10 + 2])))))))));
                    }
                }
            }
        }
    }
    var_38 += var_14;
    var_39 = (27184 <= var_3);
    var_40 = max(var_10, var_10);
    #pragma endscop
}
