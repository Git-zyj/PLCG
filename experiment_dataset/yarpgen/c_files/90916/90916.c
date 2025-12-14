/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_8, var_9)) >> (((max(var_11, var_14)) - 2013358037))))) ? 384 : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 &= ((((((arr_1 [i_0]) || var_6))) << (var_11 - 1670428653)));
        var_18 = (arr_1 [i_0]);

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_19 = var_5;
            arr_5 [i_1] [i_1 + 1] = var_8;
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 = (min((((((min(var_5, var_1))) || 9223372036854775800))), (arr_7 [i_2] [i_2])));
        arr_8 [i_2] = max(var_2, (((var_15 + 9223372036854775807) << ((((var_11 ? var_10 : 1695975920)) - 1742183573048480468)))));

        /* vectorizable */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_21 = (min(var_21, ((((var_9 || (arr_7 [i_2] [i_4])))))));
                var_22 = (min(var_22, (!var_2)));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_23 -= (((((-2865 - 22) + 2147483647)) << (((arr_17 [i_3] [i_3 - 3] [i_3] [i_3 - 1]) - 6190683944965792393))));
                var_24 = (max(var_24, var_11));
                var_25 = ((~(arr_18 [i_3 - 2] [i_3 - 4] [i_3 + 1])));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_22 [i_6] [i_3] [i_2] [i_2] = (arr_20 [i_3] [i_3] [i_3 + 3] [i_3 + 1]);
                var_26 = (((arr_21 [i_3]) ? (arr_7 [i_2] [i_2]) : (arr_9 [i_6])));
                var_27 = (max(var_27, var_2));
                var_28 = (0 != 22);
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_25 [i_3] [i_3] [i_7] = (((arr_7 [i_3] [i_3]) ? ((((var_15 || (arr_14 [i_7] [i_7] [i_7] [i_7]))))) : (arr_14 [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_3 - 1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_30 [i_8] = ((+(((arr_24 [i_2]) + (arr_9 [i_3])))));
                            var_29 = (((arr_27 [i_3 + 3] [i_8] [i_3 + 3] [i_8] [i_3 + 3]) ? var_7 : (arr_27 [i_3 - 1] [i_7] [i_7] [i_8] [i_8])));
                            var_30 += (((arr_21 [i_9 + 4]) > 2147483647));
                            var_31 += (arr_16 [i_2] [i_3] [i_3 + 2]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_32 *= (((arr_29 [i_3 - 1] [i_3 + 1]) % var_7));
                            arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] = (((arr_27 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3]) <= var_7));
                            var_33 = (((arr_18 [i_3 + 2] [i_3 + 3] [i_3 + 1]) ? var_14 : (arr_18 [i_3 - 3] [i_3 - 4] [i_3 + 2])));
                        }
                    }
                }
            }
            var_34 = ((((((((arr_7 [i_2] [i_3]) + 2147483647)) >> (288230376143323136 - 288230376143323132)))) ? (((251 ? -2147483647 : var_7))) : var_13));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_35 -= var_10;
            var_36 ^= (4294967277 != -1695975921);
            var_37 = (arr_20 [i_2] [i_2] [i_13] [i_13 - 1]);
        }
        for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_38 += (((arr_33 [i_14]) << (var_11 - 1670428666)));
            var_39 *= (max((max(((max(0, (arr_23 [i_2])))), ((var_12 << (var_14 - 2013358060))))), (((var_14 ? (((var_7 ? (arr_16 [i_2] [i_14] [i_2]) : (arr_35 [i_2] [i_14 + 2] [i_2] [i_14 - 1] [i_2] [i_2])))) : var_11)))));
            var_40 = var_5;
        }
    }
    var_41 ^= (max((min((var_9 | var_15), var_12)), (max((var_4 > var_5), var_3))));
    #pragma endscop
}
