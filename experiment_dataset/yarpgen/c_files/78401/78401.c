/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((((((148 - 107) ? (((arr_3 [i_0] [19]) ? (arr_3 [i_0] [i_1]) : (arr_1 [i_1]))) : (((((arr_3 [i_1] [21]) + 9223372036854775807)) << (((arr_0 [1]) - 2148522185))))))) ? (((var_14 ? (max(var_2, (arr_5 [i_0] [i_0] [i_2]))) : (var_0 % var_9)))) : (((arr_5 [i_0] [i_0] [i_0]) + (arr_6 [i_1 - 1] [i_1 - 1])))));
                    var_18 ^= ((-((138 ? 226 : -16281))));
                }
            }
        }
        var_19 = (((((arr_3 [i_0] [i_0]) ? ((((arr_6 [11] [20]) << (((arr_5 [i_0] [i_0] [i_0]) - 3599215130))))) : (((arr_2 [0]) ? var_6 : (arr_0 [i_0])))))) ? (((131 ? 3760273150 : 3760273150))) : (arr_0 [0]));
        arr_8 [i_0] = var_7;
        var_20 = (124909346 & 3760273150);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (2080836871 ^ 28346);
        var_21 ^= ((((((arr_9 [i_3] [i_3]) ? ((((arr_2 [i_3]) ? var_0 : (arr_9 [3] [i_3])))) : (arr_3 [i_3] [i_3])))) ? (((arr_1 [i_3]) >> (-28352 + 28353))) : (((arr_10 [i_3] [i_3]) ? (arr_10 [i_3] [i_3]) : (arr_10 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    var_22 = (((arr_0 [i_3]) ? ((((((arr_1 [i_3]) ? var_0 : (arr_6 [i_4] [i_5])))) ? ((1 ? 54681 : 2214130419)) : (arr_9 [i_5] [16]))) : (((-((min((arr_15 [i_3] [i_3] [i_3]), (arr_14 [i_4] [i_5 - 1])))))))));
                    var_23 = (max(((((min((arr_15 [15] [i_5] [i_5]), (arr_0 [i_3])))) ? (arr_6 [i_3] [i_3]) : (arr_14 [i_5 + 1] [i_5 + 1]))), (((arr_15 [8] [8] [8]) | (arr_6 [i_3] [i_4 - 1])))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_24 = ((((((((var_10 ? (arr_14 [17] [0]) : (arr_5 [1] [21] [1]))) > (((var_12 ? var_8 : var_3))))))) == (((arr_5 [12] [12] [2]) ? (~var_17) : (((arr_15 [i_3] [i_7] [i_8]) ? (arr_0 [i_3]) : var_10))))));
                        arr_23 [i_8] [19] [i_7] [0] = (((arr_0 [i_8]) ? (-32767 - 1) : (min((((arr_14 [0] [i_6]) ? var_0 : (arr_5 [i_3] [i_6] [i_8]))), (((arr_10 [i_7] [10]) ? (arr_15 [1] [i_6] [10]) : (arr_18 [i_3])))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_25 *= (((arr_12 [i_9]) ? (1026099499449908236 && 1) : var_12));
                            var_26 = (((arr_0 [i_7]) + (arr_0 [i_8])));
                            var_27 *= (((arr_25 [i_3] [6] [i_7] [i_6] [i_3]) & (arr_4 [i_3] [i_7])));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_28 = var_9;
                            var_29 &= ((~(((((arr_9 [i_3] [i_10]) ? (arr_16 [21] [i_6] [1] [i_10]) : (arr_14 [i_3] [19]))) * (((min(var_16, var_16))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_8] [14] [i_6] [i_8] [i_3] = ((192 << (86 - 67)));
                            arr_32 [i_3] [i_6] [i_7] [i_7] [i_11] [i_8] [i_7] = (((arr_4 [3] [i_8]) ? (arr_4 [i_6] [i_8]) : (arr_4 [i_3] [i_6])));
                            arr_33 [17] [i_6] [i_7] [11] [i_8] [19] = (((arr_5 [i_3] [i_6] [6]) ? (arr_17 [i_3] [i_6] [i_8]) : (arr_1 [i_3])));
                            var_30 *= (arr_6 [16] [i_3]);
                            var_31 = (arr_4 [i_3] [i_6]);
                        }
                        var_32 = ((min((arr_14 [i_3] [i_7]), (arr_14 [i_3] [i_3]))));
                    }
                }
            }
            var_33 = (((arr_29 [i_3] [i_3] [i_3] [i_3] [1]) ? (((arr_12 [i_6]) ? (arr_15 [i_3] [i_3] [1]) : (arr_15 [5] [16] [i_6]))) : (arr_2 [i_3])));
            var_34 = (max((((var_0 - var_7) - (arr_29 [i_6] [i_6] [i_6] [i_3] [i_6]))), ((-var_14 ? (arr_28 [21] [i_3] [1] [i_3] [13]) : (((arr_2 [i_3]) ? (arr_28 [0] [0] [i_3] [i_3] [9]) : var_1))))));
            var_35 = ((((((arr_30 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (((arr_9 [i_3] [i_6]) ? (arr_16 [i_3] [1] [16] [i_6]) : var_9)) : (((max(var_16, (arr_1 [i_3])))))))) && ((max((((arr_22 [i_3] [i_3] [i_3]) ? (arr_2 [9]) : var_11)), (max(var_11, (arr_27 [i_3] [i_6]))))))));
        }
        arr_34 [i_3] = (((((arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]) ? var_4 : (arr_20 [i_3]))) & ((var_15 >> (((arr_25 [16] [i_3] [i_3] [i_3] [i_3]) - 79))))));
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {
        var_36 = (min(-86, 66));
        var_37 = (((((((arr_10 [i_12 - 3] [0]) ? (arr_5 [i_12] [i_12] [4]) : (arr_6 [i_12] [i_12])))) ? (arr_12 [i_12]) : (((arr_1 [i_12 - 3]) ? (arr_2 [1]) : (arr_22 [i_12 - 1] [4] [i_12]))))));
    }
    var_38 = (min((var_4 && var_1), var_4));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                var_39 -= (min(-65, var_17));
                var_40 = ((((((((arr_21 [18] [i_14] [i_14] [i_14] [i_14]) ? (arr_1 [i_13]) : (arr_30 [4] [i_14] [i_14] [7] [i_14])))) ? var_14 : (127 || -3961185956524694190)))) || (((arr_21 [15] [i_13] [i_14] [2] [2]) || var_4)));
                var_41 = (min(var_41, (((min((((arr_3 [i_13] [i_14]) ? var_7 : (arr_15 [i_13] [i_13] [i_14]))), var_16))))));
                var_42 = var_8;

                /* vectorizable */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_43 *= (((arr_17 [i_13] [i_14] [i_14]) ? (arr_37 [i_15]) : (((arr_15 [i_13] [i_14] [i_14]) ? (arr_38 [i_14]) : var_4))));
                    var_44 ^= (arr_42 [i_13]);
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_45 &= var_17;
                    var_46 = (arr_39 [i_16]);
                }
            }
        }
    }
    var_47 = ((((((((1 ? var_3 : 0))) ? (max(var_14, var_7)) : var_6))) ? (var_2 & var_7) : ((((((var_8 ? var_7 : var_1))) ? var_12 : var_16)))));
    #pragma endscop
}
