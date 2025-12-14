/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((((max(2047, 2047)) == ((50768 - (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 += (~37119);
                    var_13 &= var_7;
                    arr_7 [i_1] [i_1] [i_2] = (max((arr_3 [i_2]), (arr_1 [i_0])));
                    arr_8 [i_2] [i_0] [i_1] [i_0] = (arr_5 [22] [i_1] [i_2]);
                }
            }
        }
        arr_9 [i_0] = ((((((max(var_10, var_0))))) ? ((max(48, (var_11 <= var_3)))) : ((((((arr_1 [i_0]) & 26074))) ? (arr_3 [12]) : ((min((arr_1 [i_0]), var_10)))))));
        arr_10 [1] = (((((((max((arr_1 [i_0]), 39461))) ? (min((arr_6 [i_0]), (arr_6 [i_0]))) : (arr_3 [i_0])))) + (((((arr_4 [i_0] [i_0] [i_0]) * (arr_5 [i_0] [i_0] [i_0]))) ^ ((((arr_5 [i_0] [1] [12]) ? 39433 : (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_18 [i_3] [i_3] [i_3] |= arr_4 [1] [i_3 + 2] [i_3 + 2];
            var_14 |= (arr_15 [i_3 + 2] [i_4] [i_3]);
            var_15 = (((((62 ? (arr_17 [11] [11]) : (arr_6 [i_4])))) ? var_1 : ((var_0 ? 47388 : 78))));
            arr_19 [i_4] [i_3] = var_4;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_24 [i_3] [i_3] = ((var_3 ? var_7 : 413326083));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_16 = var_4;
                            var_17 *= (arr_14 [i_3 - 2] [i_6 - 1]);
                            arr_32 [i_3 - 3] [i_3] [11] [i_7] [14] = ((var_9 ? (arr_16 [i_5] [4] [i_7]) : (arr_30 [i_7] [i_7] [i_6 - 1])));
                            arr_33 [i_7] [5] = ((var_2 ? (arr_5 [i_7] [i_6 - 1] [i_7]) : ((((arr_29 [i_8] [i_7] [i_3] [i_6 + 1] [6] [i_3] [i_3]) ? var_3 : (arr_12 [i_3]))))));
                        }
                    }
                }
            }
            arr_34 [i_5] [i_3] [i_3] = (!var_8);
            arr_35 [i_3] [i_3] = (arr_16 [i_3 + 2] [i_5] [i_5]);
        }
        for (int i_9 = 4; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_39 [i_3] [i_3] [i_3 + 1] |= (arr_15 [i_9] [i_9 - 1] [i_3 + 2]);
            var_18 = ((((-(arr_0 [i_9]))) >= (arr_21 [i_9] [i_3])));
            var_19 ^= ((!(arr_4 [i_3 + 3] [i_3 + 1] [i_9 - 4])));
        }
        for (int i_10 = 4; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_43 [i_3] [0] = (((arr_30 [i_10] [i_10] [10]) <= (36680 == var_3)));
            var_20 &= ((~(arr_16 [i_10 - 3] [i_3 + 3] [i_3 + 3])));
        }
        arr_44 [7] [i_3] = var_2;
        arr_45 [i_3 - 2] = ((+(((arr_30 [12] [12] [12]) ? (arr_37 [i_3 - 3]) : var_3))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_21 = ((((~(min(var_11, 2672917933693023986))))) ? ((min((arr_46 [i_11]), (arr_3 [i_11])))) : (((var_11 >= (arr_5 [i_11] [i_11] [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 20;i_15 += 1)
                        {
                            {
                                arr_56 [i_12] [i_12] [i_12] [i_13] [i_14] [19] [i_15] = ((+(((arr_6 [i_15 + 1]) ? (arr_6 [i_15 - 1]) : (arr_51 [i_15 - 1] [i_15 - 1])))));
                                var_22 = (((!28855) + ((((max(var_5, (arr_53 [8] [i_11] [8] [i_11] [i_11] [8])))) ? (arr_0 [i_11]) : var_4))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_62 [19] [15] [i_12] [i_16 - 1] [i_17] = ((26089 >= (((max(var_2, (arr_3 [i_16])))))));
                                var_23 -= ((+(max((32497 || var_4), ((var_7 ? var_2 : var_6))))));
                                arr_63 [i_11] [i_12] [1] [i_16] [i_17] = (((var_0 / ((min((arr_46 [i_11]), (arr_61 [i_12] [i_12])))))));
                            }
                        }
                    }
                    var_24 &= var_3;
                    arr_64 [i_11] [i_12] [i_11] [i_13] = (arr_52 [i_12] [i_11] [i_11] [i_11] [i_13]);
                    arr_65 [1] [i_12] [i_12] [i_12] = ((-(((((((arr_53 [i_11] [i_11] [i_12] [i_11] [12] [i_13]) << (arr_52 [i_12] [i_11] [i_12] [i_11] [i_12])))) || (arr_57 [i_11] [i_12] [1] [15]))))));
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
