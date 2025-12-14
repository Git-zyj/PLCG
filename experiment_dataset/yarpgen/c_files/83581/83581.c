/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 |= ((((((((-3 ? 0 : 8831624727055456919))) ? ((min(15, var_2))) : ((var_6 ? var_8 : (arr_1 [i_0])))))) ? (((min(4294967295, var_10)))) : (arr_1 [i_0])));
        arr_2 [8] [8] = var_8;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_13 ^= ((((287359437 <= (arr_13 [1] [1] [i_3]))) ? (((var_9 && (((var_7 ? var_7 : 1413122311)))))) : 24882));
                        var_14 = var_7;
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_15 = (((arr_3 [i_8]) ^ 287359437));
                            var_16 = (min(var_16, var_11));
                        }
                    }
                }
                var_17 *= ((0 ^ (arr_5 [i_5])));
            }
            arr_26 [i_5] [i_5] [i_1] = ((40676 & (arr_11 [i_1] [i_5] [i_5] [i_5] [i_5])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_37 [17] = ((((((arr_12 [i_1] [i_11] [i_10] [i_10]) % var_2))) ? ((3908557808 ? 23320 : var_3)) : ((9615119346654094696 ? var_5 : var_3))));
                    var_18 = (max(var_18, var_3));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_19 *= (arr_12 [i_1] [i_1] [4] [10]);
                    var_20 = (arr_31 [i_1] [i_1] [1] [i_12]);
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_21 = (!var_10);
                    var_22 -= ((40636 ? (arr_11 [i_1] [i_1] [i_10] [i_13] [i_10]) : (8810351086980256284 > 3829409656)));
                    var_23 |= arr_13 [11] [i_9] [i_1];
                    arr_44 [i_1] [i_1] [i_1] [6] = (arr_17 [i_9] [i_10]);
                }
                var_24 = (max(var_24, 134217728));
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_25 = var_4;

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_49 [i_1] [i_14] [i_14] = var_8;
                    var_26 = 8831624727055456947;
                }
            }
            var_27 = (min(var_27, 18446744073709551601));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            arr_54 [i_1] [i_1] [i_16] = (arr_30 [i_1] [i_1] [i_16]);
            var_28 |= (((((var_1 ? (arr_11 [i_1] [i_16] [i_1] [i_16] [6]) : (arr_38 [i_1] [i_16] [i_16] [i_1]))) & (((3829409656 ? 4294967295 : (arr_34 [i_1] [i_1] [i_1] [i_1] [i_16])))))) * (arr_46 [i_1] [i_1] [3]));
        }
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            var_29 = ((+((51844 ? (arr_29 [i_1] [i_1] [i_17]) : 8831624727055456919))));
            var_30 = ((var_9 | (max(40653, var_1))));
        }
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        var_31 -= (((arr_4 [i_18]) ? (((((((arr_19 [i_18] [i_18] [i_18] [i_18]) ? var_3 : (arr_29 [i_18] [i_18] [i_18]))) != (((var_6 ? var_4 : 4294967295))))))) : (max(((((arr_58 [i_18] [14]) ? 0 : (arr_7 [i_18])))), var_9))));
        arr_59 [i_18] = ((((((arr_56 [i_18] [i_18] [i_18]) * var_4))) ? (((arr_56 [i_18] [i_18] [i_18]) ? var_8 : 18446744073709551606)) : (((9223372036854775807 ? (arr_56 [i_18] [i_18] [i_18]) : (arr_56 [i_18] [i_18] [i_18]))))));
        arr_60 [i_18] = (max(var_2, ((var_2 ? (arr_13 [i_18] [i_18] [i_18]) : -465557639))));
    }
    var_32 = (max(var_32, -var_8));
    #pragma endscop
}
