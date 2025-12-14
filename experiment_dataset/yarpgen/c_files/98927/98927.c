/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 &= ((194 ? (arr_0 [i_0]) : ((var_10 ? 1 : (arr_1 [i_0])))));
        var_17 = (max(var_17, (((-((255 ? 173 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 *= 171;
        arr_6 [i_1] = var_13;
        arr_7 [i_1] |= 83;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = ((-(((arr_9 [0]) ? 78 : ((((arr_8 [i_2] [20]) == 511)))))));
        var_19 = (min(var_19, (((-(arr_9 [17]))))));

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_22 [i_4] = (arr_18 [14] [14] [i_4] [i_4 + 1] [i_4] [16]);
                        arr_23 [i_4] [i_4] = (min(((((arr_11 [1] [20]) ^ 126))), (min((~var_6), 173))));
                        var_20 = (((((171 ? 171 : 1359315449))) ? (arr_19 [i_2] [i_3] [1] [i_4]) : ((((arr_8 [i_3 - 3] [i_4 - 1]) == (arr_8 [i_3 + 2] [i_4 + 2]))))));
                    }
                }
            }
            var_21 = ((((min(((((arr_12 [i_2]) >= var_12))), var_5))) ? (var_9 == 1) : (arr_21 [9] [3] [3] [i_2] [i_2])));
            arr_24 [i_2] = 194;
            var_22 = (83 || 9223372036854775807);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_23 ^= min(1, ((((arr_8 [3] [i_6]) ? 240 : (arr_8 [i_2] [i_6])))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_36 [15] [i_6] [15] [i_6] [1] [i_9] = (arr_29 [i_2] [i_7] [i_9]);
                            var_24 &= ((~(arr_34 [i_2] [i_9] [i_2] [12] [i_9])));
                        }
                    }
                }
                var_25 = (max(var_25, (!84)));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_26 = (arr_19 [i_2] [21] [i_6] [i_6]);
                var_27 = min(((0 ? var_4 : (((0 ? 172 : (arr_8 [i_2] [i_6])))))), (arr_15 [15] [i_6] [1] [4]));
            }
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                var_28 = (max(var_28, (arr_15 [i_2] [11] [8] [8])));
                var_29 ^= (min((arr_28 [i_11 - 1] [2] [i_11 - 1] [i_11 + 1]), var_5));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_43 [i_2] [i_2] [i_6] = 9223372036854775807;
                var_30 = (((((arr_39 [i_2]) / (arr_39 [i_12])))) ? (-9223372036854775807 & 119) : (min((arr_39 [i_6]), (arr_39 [i_6]))));
                var_31 = (max(var_31, (((!(((1 ? var_2 : (arr_16 [i_2] [15] [i_12])))))))));
                arr_44 [i_6] [i_12] [i_12] [i_12] = ((min(1, (arr_35 [2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
            }
            arr_45 [i_6] = ((((((((arr_27 [i_2] [i_6] [i_6]) > var_11)) ? (!var_2) : var_0))) || ((-19506 >= (arr_12 [i_6])))));
            arr_46 [i_6] [1] = (arr_8 [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            arr_49 [i_13] = 98;
            var_32 = var_13;
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 3; i_14 < 19;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 16;i_16 += 1)
            {
                {
                    var_33 = var_13;
                    arr_59 [i_16] [i_16] [i_15] [i_16] |= 1841378808;
                    var_34 = ((((min(168, 84))) < (240 & 43)));
                    var_35 ^= ((((((((arr_13 [1] [2]) >> (240 - 239)))))) - (min((min(var_12, var_4)), var_15))));
                }
            }
        }
    }
    var_36 = var_15;
    var_37 = var_10;
    #pragma endscop
}
