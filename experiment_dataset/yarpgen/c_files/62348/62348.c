/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 9287195070976816612;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = var_2;

                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            var_16 = (arr_3 [i_1]);
                            var_17 |= 5590;
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = ((+(((arr_13 [i_0] [i_0] [i_2]) ? 8672842812309389139 : -934747986938560534))));
                        var_19 = var_3;
                        arr_15 [i_5] [i_2] [10] [i_5] = (var_14 * (arr_7 [3] [i_2 - 1] [i_2 + 1] [0] [i_2 + 1] [i_2 + 1]));
                        arr_16 [i_0] [i_5] [i_0] = var_2;
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 8;i_7 += 1) /* same iter space */
                        {
                            var_20 = var_12;
                            var_21 = (((~7) ? 81 : (~1616093751)));
                        }
                        for (int i_8 = 4; i_8 < 8;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_8 - 2] [5] [i_2] [i_2] [5] [i_0] [i_0] = ((~(arr_19 [i_0] [i_2 - 2] [8] [i_6] [i_8] [i_8 - 3])));
                            var_22 ^= (((arr_18 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1]) ? var_1 : var_6));
                            var_23 = ((var_7 ? ((1 ? 536870784 : 9223372036854775807)) : var_11));
                        }
                        var_24 = ((var_12 == (arr_1 [i_0])));
                        var_25 = ((-(11 & 0)));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_26 = 3066574207;
                        arr_30 [i_2] [i_2] [1] [i_2] [i_0] = ((var_6 ? ((((!(arr_18 [3] [i_1] [i_1] [3] [i_0]))))) : (arr_4 [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_34 [11] [i_1] = (!0);
                        var_27 = ((!(arr_29 [i_1] [i_0] [i_2 - 1] [11] [i_2 - 1])));
                        var_28 = (~31612);
                        var_29 = (min(var_29, (arr_28 [i_1] [i_2 - 1] [7] [0])));
                        var_30 = (!199);
                    }
                }
            }
        }
        var_31 = 3;
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        arr_38 [8] |= (--0);
        var_32 = max((((-2147483647 - 1) ? 36 : 286297409)), var_12);
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    var_33 = (min((arr_44 [i_12] [i_12] [i_12] [i_12]), -145964587));
                    var_34 = (~-548986982);
                }
            }
        }
        var_35 = (min(var_35, (((((-((min(64, (arr_42 [i_12] [i_12] [i_12])))))) * (arr_39 [1]))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_36 = ((8728 ? 10835 : (((-32767 - 1) ? 256557312811249391 : (arr_45 [1])))));
        var_37 = (((arr_40 [i_15]) | var_3));
        var_38 = ((~((var_12 ? (arr_39 [i_15]) : 0))));
    }
    var_39 = var_0;
    var_40 = (max(var_40, (((((((!111) ? var_12 : var_3))) ? var_3 : (min((~var_14), var_3)))))));
    #pragma endscop
}
