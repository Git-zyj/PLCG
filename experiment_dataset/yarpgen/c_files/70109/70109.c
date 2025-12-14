/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_10 = ((((6459281969917252270 ? ((-6574220096071134190 ? 1324622802060412391 : 1)) : (~1))) >= (arr_2 [i_0])));
            arr_6 [i_0] = ((2147483647 ? 27 : (arr_3 [i_0] [i_1] [i_1])));
        }
        var_11 = 2316223798072868813;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 67108863;

        for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_12 = (arr_3 [i_2] [i_3] [i_3]);
            var_13 &= (1536 ? -1646842179 : (arr_1 [i_2] [i_3 - 2]));
            var_14 = -1608366058;
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_14 [i_2] [12] [i_4] = ((((1608366062 ? 23436 : -1608366057)) - (3617478750 == -67108881)));
            arr_15 [i_4] = ((2558006159 ? 42089 : -1753543399065738303));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_15 = ((var_8 << (((arr_11 [i_2] [i_5 + 1]) - 42))));
            arr_18 [i_5] [i_2] [i_5] = ((arr_16 [i_5] [i_5]) ? var_8 : (arr_16 [i_5] [i_5]));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    {
                        var_16 = (arr_21 [i_8 + 1] [i_7 - 1] [i_2] [i_2]);
                        arr_26 [i_6] [i_6] [1] [i_8] [i_2] = (((((arr_20 [0] [i_6] [i_7]) ? (arr_8 [i_8 - 1]) : (arr_8 [8]))) >= (arr_20 [i_6] [i_6] [i_8])));
                        arr_27 [i_2] [i_2] [i_6] [i_6] [i_6] [i_8] = (((arr_21 [i_2] [i_2] [i_2] [5]) / (67108841 + 1608366077)));
                    }
                }
            }
        }
        arr_28 [0] [0] = ((var_1 ? (((arr_2 [i_2]) / 1269983722)) : (arr_13 [i_2] [8] [i_2])));
    }
    var_17 = var_6;
    var_18 = var_1;
    #pragma endscop
}
