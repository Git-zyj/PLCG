/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (arr_9 [i_0] [i_2] [i_2]);
                    arr_10 [i_0] [10] [i_2] [i_1] = ((2292855529 ? (max(2002111767, 43090)) : 3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (((min((arr_7 [i_0] [i_1] [5] [i_3]), (((var_1 || (arr_11 [i_0] [i_3] [i_0] [i_1] [i_0]))))))) != (arr_0 [i_0]));
                                arr_17 [i_0] [i_1] [i_4] [i_0] = (((((var_10 ? (arr_8 [i_0] [i_0] [i_2 - 1] [i_3]) : ((var_13 ^ (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_13 [i_0] [i_1] [i_0]) : ((max((arr_8 [i_0] [i_0] [i_2 - 3] [i_3]), (arr_8 [i_0] [i_0] [i_2 + 1] [i_0]))))));
                                var_19 = (max((arr_6 [i_0] [i_0] [i_0]), ((min(var_2, 19)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] = 8160;
                                arr_24 [i_0] [i_1] [i_2] [i_0] [i_1] = var_4;
                                var_20 = (((((-(~-15)))) ? 2292855528 : (min((((~(arr_16 [i_0])))), (((arr_3 [i_2]) ? (arr_2 [i_0]) : var_0))))));
                            }
                        }
                    }
                    var_21 = (((min((min(var_14, 5)), 2002111759))) ? var_5 : ((-8160 ? ((2292855535 ? 737523869 : 15340651392764899515)) : 16878036571386580431)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_29 [i_0] [i_0] [i_0] = arr_22 [i_0] [11] [i_7] [i_7] [i_0] [i_7] [i_7];
                    arr_30 [i_0] = (((((((var_3 ? 528482304 : 58975))) ? ((-1 ? 2002111767 : 65524)) : (arr_1 [i_0] [i_0]))) * (min((arr_6 [i_0] [i_7] [i_8]), ((min(-11, (arr_25 [i_8]))))))));
                    arr_31 [i_7] [i_7] [0] [i_8] &= var_9;
                    var_22 = 2002111767;
                }
            }
        }
        arr_32 [i_0] [i_0] = ((3557443426 ? 65535 : 72057594037927936));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_23 = ((arr_18 [i_0] [i_0]) ? (arr_25 [i_9]) : var_5);
            arr_35 [i_9] [i_0] [i_0] = (((-(arr_13 [i_0] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_24 = (~var_5);
            var_25 = (min(var_25, (((var_7 ? -16384 : var_7)))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_26 = 3131657371;
            arr_40 [i_0] [i_0] [i_0] = (arr_4 [i_0]);
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        var_27 = (max(var_27, var_10));
        var_28 = (max((~8150), (((arr_12 [i_12] [i_12] [11]) ? var_8 : (arr_25 [i_12])))));
    }
    var_29 = var_1;
    var_30 = var_3;
    #pragma endscop
}
