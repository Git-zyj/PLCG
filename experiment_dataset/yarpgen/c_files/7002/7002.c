/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 ^= (max((max((arr_0 [i_0 + 2]), var_14)), (arr_0 [i_0 + 2])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 = ((var_12 ? (arr_2 [i_0 + 3] [i_0 + 1]) : (var_11 || var_11)));
            var_22 ^= var_12;
            var_23 = ((-(arr_0 [i_0 + 3])));
            var_24 = (arr_4 [i_0] [i_0 + 3] [i_1 - 1]);
        }
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_25 &= ((-(var_10 >= var_0)));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] = (min(((((var_4 ? (arr_12 [i_3] [i_3] [i_2] [i_2]) : 27681)))), (min((((arr_0 [i_2]) ? var_4 : (arr_19 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2]))), ((max((arr_2 [7] [12]), var_11)))))));
                                var_26 = (((!27688) ? (((min(var_10, var_2)))) : (!1)));
                            }
                        }
                    }
                    arr_21 [i_2] [i_3] [i_2] [i_2] = (((((37838 ? 27688 : -4996)) & (!37854))));
                    var_27 = (max(var_27, (arr_5 [i_4])));
                }
            }
        }
        var_28 = (-9223372036854775789 < 20);
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        arr_24 [i_7] = (arr_4 [i_7] [i_7] [i_7]);
        arr_25 [i_7] = (((!3657309911366502938) * var_18));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = -22177;
        var_29 = (((~27693) ? (arr_22 [i_8] [9]) : var_5));

        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            arr_34 [i_9] = (((12777933133260735821 ? var_10 : 32)));
            var_30 = -120;
            var_31 = (arr_19 [i_8] [i_8] [i_9 + 1] [i_9] [3] [i_8]);
            var_32 = (min(var_32, (((var_0 ? -5507 : var_1)))));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    {
                        var_33 -= (arr_23 [i_10] [i_10]);
                        var_34 = (8762847999249372450 ? (arr_38 [i_12 - 1] [i_10] [i_10] [i_12 - 2]) : 5507);
                        var_35 &= (((arr_19 [i_12 - 3] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2]) << (((arr_19 [i_12 + 1] [7] [i_12] [i_12] [i_12] [i_11 - 1]) - 3631576288922124609))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_51 [i_14] = (((arr_28 [1]) ? var_9 : var_2));
                            var_36 = ((((((var_18 ? var_1 : (arr_12 [i_8] [i_10] [i_10] [i_8]))) + 9223372036854775807)) << (((((~18) + 40)) - 21))));
                            arr_52 [i_8] [i_8] [0] [i_14] [i_8] [i_8] = (!var_4);
                        }
                    }
                }
            }
        }
        var_37 = (min(var_37, (27706 % -8762847999249372450)));
    }
    var_38 &= 39;
    var_39 ^= (~var_5);
    #pragma endscop
}
