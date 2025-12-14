/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((+(((arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1]) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1]) : -1109608883492511441))));
                var_12 = (~-3726450370763237020);
                arr_8 [i_1] = -7770072602159761615;
                var_13 ^= (min((((arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]) ? (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1]))), (arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 2])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_18 [i_2] [2] [0] [i_4] = ((((((arr_15 [i_2] [i_2] [i_2]) ? (arr_10 [i_2] [i_3]) : 0))) ? (((var_2 << 0) ? 1152912708513824768 : 13580)) : ((((arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1]) % (arr_17 [i_3 + 1] [i_3 - 3] [i_3 - 1]))))));
                    arr_19 [i_2] [4] = (!-5257257446596167424);
                    arr_20 [12] = (((max((min((arr_5 [i_4] [4] [5]), var_6)), 16122))) ? -5818753328212829368 : (((((((5926372678243361190 < (arr_10 [i_2] [i_3 - 1])))) != (-9223372036854775807 - 1))))));
                }
            }
        }
        var_14 = (((((((3726450370763237006 ? var_8 : -22874))) ? (((-3881074107453045332 == (arr_9 [i_2])))) : -4744)) < (((!((max((arr_4 [i_2] [i_2] [i_2]), -13325))))))));
        var_15 = arr_12 [i_2] [i_2];
        var_16 ^= var_8;
        var_17 = ((((min((arr_1 [i_2]), var_3)) <= ((((arr_17 [i_2] [i_2] [i_2]) | (arr_11 [i_2])))))) ? (((arr_9 [i_2]) | (!1683))) : ((((arr_15 [i_2] [i_2] [i_2]) ? 13 : (arr_11 [i_2])))));
    }
    var_18 *= ((0 + ((-((var_11 ? 5733 : 9223372036854775807))))));
    #pragma endscop
}
