/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_7;
    var_12 = var_0;
    var_13 = ((min(9007199254740991, -7572895703747325380)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 = -10482076876567304742;
        var_15 &= (arr_2 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = var_9;
                    arr_14 [i_1] [1] [1] |= (arr_2 [i_1]);
                }
            }
        }
        arr_15 [i_1] [i_1] = ((((arr_12 [i_1] [i_1] [i_1]) ? 8986282547721618899 : var_1)));
        var_16 = -3486089042425584068;
        arr_16 [i_1] = (((arr_11 [3] [i_1] [i_1]) ^ (arr_10 [i_1] [i_1] [i_1] [i_1])));
        var_17 = arr_5 [i_1] [5];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_18 = (min(var_18, (((~(arr_4 [i_4]))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (max(var_19, (~var_10)));
            arr_22 [i_4] = (((arr_18 [i_5]) ? var_7 : (arr_18 [i_5])));
        }
        arr_23 [i_4] = (((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_2 [i_4]) : var_10));

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_20 = (arr_11 [i_4] [i_6] [i_4]);
            arr_27 [i_4] [i_6] [i_6] = var_5;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                arr_32 [i_4] [11] [i_4] [i_4] = var_6;
                arr_33 [i_4] [i_4] [i_4] [i_4] = (((!var_1) ? var_9 : ((-(arr_24 [i_4] [i_4])))));
                var_21 = (((arr_6 [i_7]) ? (arr_8 [i_8 - 2] [i_7] [i_7]) : (((arr_5 [i_4] [12]) ? (arr_28 [i_4] [i_4] [i_4]) : (arr_24 [i_4] [i_4])))));
            }

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_22 = var_0;
                var_23 -= (((arr_6 [13]) ? -var_7 : 9464613900829864965));
                var_24 = (min(var_24, (((-((-(arr_11 [i_4] [1] [1]))))))));
            }
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                arr_39 [i_4] [1] = (arr_37 [8] [i_4] [8]);
                var_25 = (58061 | (arr_34 [i_4] [i_4] [i_10 - 2]));
                arr_40 [i_4] [i_4] [i_4] = (((~var_1) ? var_5 : (arr_26 [i_4])));
                arr_41 [i_4] [i_4] [i_10 - 2] = ((1 << (2014477183 - 2014477180)));
            }
            var_26 ^= ((1 & (arr_10 [i_4] [i_7] [i_4] [i_7])));
            var_27 = var_9;
        }
        arr_42 [i_4] [i_4] = var_3;
    }
    #pragma endscop
}
