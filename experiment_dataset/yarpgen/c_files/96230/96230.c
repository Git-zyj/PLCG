/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? (max(-var_4, (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_11 = ((~(~var_6)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (arr_0 [i_0]);
            var_13 = var_1;

            /* vectorizable */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_14 = -1;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_15 ^= ((~(arr_7 [i_4] [3] [i_2] [i_1] [i_0])));
                            var_16 &= (((arr_0 [i_2 + 1]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 1])));
                        }
                    }
                }
                var_17 = (arr_7 [i_0] [2] [1] [i_0] [i_2 - 2]);
                var_18 = (arr_3 [i_2 + 2] [8] [i_0]);
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_19 = (+(min((arr_13 [i_1]), (arr_5 [i_0] [i_0] [i_1] [i_5]))));
                var_20 = ((((((arr_1 [i_5]) ? (arr_1 [i_0]) : 0))) || (arr_9 [7] [i_1] [i_5] [i_0])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_21 = (((32505856 ? (arr_1 [i_6]) : (arr_15 [i_0] [i_0]))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_22 *= (((arr_17 [i_7 + 1] [1] [0] [i_7 + 1]) + (arr_17 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])));
                    var_23 &= 2241687782;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_24 = ((1 ? 18016509847017332899 : 0));
                    var_25 = min((((arr_6 [i_0] [1]) - (arr_11 [3] [i_6] [i_1] [i_0] [i_0]))), var_9);
                    var_26 = arr_18 [i_6];
                    var_27 = ((-(arr_1 [i_8])));
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_28 = ((~(max((arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1] [1] [i_9 - 1]), var_9))));
                    var_29 = max(var_3, var_8);
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_30 = var_0;
                    var_31 = ((((min((arr_25 [i_0] [8] [i_6] [i_10] [i_10] [1]), (arr_7 [i_10] [i_10] [i_10] [i_10 - 1] [i_10])))) ? ((112 ? ((max(var_0, var_8))) : ((-112 ? var_2 : 430234226692218716)))) : var_3));
                    var_32 = (var_9 <= var_9);
                }
                var_33 = (min(var_33, (((((arr_0 [i_0]) ? (arr_16 [i_0] [i_1] [i_6] [i_1]) : var_6))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_34 = (arr_28 [i_0] [i_0] [9] [9]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_35 = ((-(arr_3 [i_12] [i_1] [1])));
                            var_36 = (((arr_7 [i_0] [i_1] [i_11] [i_12] [i_13]) ? (~18016509847017332899) : (arr_23 [i_13] [i_12] [9] [i_0])));
                        }
                    }
                }
                var_37 = (((arr_5 [8] [i_1] [i_11] [i_11]) ^ (arr_5 [i_0] [i_0] [1] [1])));
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_36 [7] = 0;
            var_38 = var_9;
            var_39 -= ((((((arr_1 [i_14]) ? (arr_11 [i_14] [i_14] [i_14] [i_0] [i_0]) : (arr_1 [i_0])))) ? (((((arr_1 [i_14]) && (arr_1 [i_14]))))) : ((~(arr_1 [i_0])))));
            var_40 = ((((~(arr_35 [i_14]))) >> (((~var_0) - 2191012924662169827))));
            arr_37 [i_0] [2] = (((((((min(2053279513, (arr_18 [i_14])))) ? var_0 : (((((arr_33 [i_14] [i_0] [i_0] [i_0] [i_0]) <= var_4))))))) ? (max((arr_1 [i_14]), (((~(arr_14 [i_0])))))) : (arr_13 [0])));
        }
        var_41 &= ((var_6 || ((min((((2241687782 ? var_4 : var_5))), var_1)))));
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_42 *= ((((((arr_38 [i_15]) - (((((arr_38 [i_15]) || 2043780205))))))) ? (~var_8) : 136));
        var_43 = (((((+(max((arr_40 [i_15]), -1))))) ? ((max((arr_39 [i_15]), ((((arr_40 [i_15]) || (arr_39 [i_15]))))))) : ((~(((arr_39 [14]) * var_7))))));
        var_44 = ((~(arr_40 [i_15])));
        var_45 = (arr_38 [i_15]);
        var_46 = (arr_40 [i_15]);
    }
    var_47 = ((((-112 ? var_7 : 1957475223))));
    #pragma endscop
}
