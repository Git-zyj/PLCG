/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (min(var_5, var_3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 *= ((((arr_0 [i_0] [1]) != (arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(((((arr_3 [0]) ^ -1))), (((((~(arr_7 [4] [i_1] [15])))) ? (arr_3 [6]) : (~var_10))))))));
                    arr_8 [i_0] [i_0] [i_2] = 4032;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = var_10;
                                var_16 = (min(((-(arr_0 [i_3] [i_0]))), (!var_8)));
                                arr_14 [i_3] [i_3] [i_0] [i_0] [1] [i_0] = (((((var_10 ? (arr_9 [i_4] [i_3] [i_1] [i_0]) : (arr_1 [i_0] [i_2])))) ? ((((arr_1 [i_1] [i_1]) ? (arr_9 [i_0] [i_2] [6] [i_4]) : var_9))) : (arr_6 [i_0] [10] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5] = ((((((5357 ? 4467570830351532032 : 107)))) ? 21 : ((2147483648 ? var_4 : ((var_8 ? (arr_15 [i_5]) : 3399275536))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_17 -= ((((min((arr_24 [i_7]), 3406))) ? ((min(15, 8356597335489987003))) : (((max((!1018675848), (min(var_4, var_4))))))));
                        arr_26 [i_8] [i_7] [i_6] [i_8] = ((-(arr_0 [i_8] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_18 = var_5;
                        arr_29 [7] [15] [9] [i_7] [i_9] [i_9] = -var_8;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_10] [i_7] [i_6] [i_5] = 13;
                        var_19 = ((2147483646 ? 4294967282 : 2147483657));
                        var_20 = ((+((31059953 ? (arr_13 [i_5] [i_7] [i_7] [i_6] [i_5]) : var_2))));
                        arr_35 [i_10] [i_7] [i_5] [i_5] = (((+-2147483648) ? -8356597335489986999 : var_3));
                    }
                    var_21 = (((((var_2 ? ((var_3 ? (arr_11 [11] [i_5] [i_6] [i_6] [i_6] [i_6] [i_7]) : 2147483660)) : (arr_32 [i_5] [i_6] [i_5] [i_7])))) ? (~-4035225266123964416) : (arr_16 [i_5] [i_6])));
                    arr_36 [i_7] [i_5] [i_5] = var_1;
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 4; i_14 < 16;i_14 += 1)
                    {

                        for (int i_15 = 4; i_15 < 16;i_15 += 1)
                        {
                            var_22 = (min(var_22, (((~((6553237212469356041 ? 2147483613 : 60445)))))));
                            var_23 = ((-(arr_1 [i_14 + 2] [i_11 + 1])));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_24 = (((arr_39 [i_11 + 1]) ? var_3 : (arr_39 [i_11 - 1])));
                            var_25 = ((-(arr_2 [i_11] [i_11])));
                            var_26 = (max(var_26, (((var_9 ? (arr_1 [i_12] [i_11 + 1]) : var_9)))));
                            var_27 = (arr_46 [i_11 + 1] [i_12] [8] [i_14 - 3]);
                        }
                        arr_52 [i_11 - 1] [i_12] [i_13] [i_12] [i_13] [i_11] = -2147483651;
                        arr_53 [i_11] [i_11] = (arr_39 [i_11 + 1]);
                    }
                    var_28 = (min(var_28, ((((min(-116, var_1)) + (((((min(var_10, (arr_5 [i_11] [24])))) ? ((var_6 ? 7927 : var_2)) : ((min(46846, var_0)))))))))));
                    arr_54 [i_11] [i_12] [i_11] = (min((~-36), var_3));
                }
            }
        }
        arr_55 [i_11] = ((1 ? 60441 : 1));
        var_29 *= var_10;
        var_30 = (min(((-(min((arr_28 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]), var_1)))), (arr_31 [i_11 + 1] [i_11] [i_11 + 1] [i_11])));
    }
    var_31 = var_4;
    #pragma endscop
}
