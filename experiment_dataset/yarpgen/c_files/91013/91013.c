/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((((var_18 & var_3) != 6046)) && (((var_18 + ((var_2 ? var_18 : var_4)))))));
    var_21 *= (~(((var_14 && (~32767)))));
    var_22 = (~(min((var_13 + var_2), (var_14 / var_8))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = ((~(((arr_0 [i_0]) ? (arr_4 [8] [i_0 + 4] [i_1]) : (arr_0 [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_23 = (((((24773 + (arr_3 [i_0] [i_0] [i_0])))) && (arr_8 [i_4])));
                            var_24 = (((~var_11) ? (((-2147483647 - 1) - var_6)) : ((var_19 ? (arr_2 [i_0] [i_0]) : (-2147483647 - 1)))));
                            var_25 = ((var_5 / ((~(arr_10 [i_0] [7])))));
                        }
                    }
                }
            }
            arr_15 [i_0 + 3] = ((((((arr_13 [i_0] [i_0] [i_0] [i_1] [i_0 + 4] [i_1] [i_0]) <= -4125125121997071303))) + (~2147483647)));
            var_26 = ((((var_8 << (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]) - 4884499321816441119)))) <= (~-32767)));
            var_27 = (((~0) && -32542));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] &= ((~((3082 ? 1266871010 : -32764))));
                arr_23 [i_6] = (((32766 ? 32767 : var_11)));
            }
            var_28 = (min(var_28, ((((32767 & -1) - 32744)))));
            arr_24 [4] = (((((var_14 - (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) ? ((var_17 ? (arr_1 [i_0 + 1] [i_0 + 1]) : 32766)) : (1 - var_19)));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_29 [i_0 + 4] [i_0 + 3] = (((~var_1) ? (~9223372036854775807) : ((((arr_28 [i_0] [i_0] [i_0]) + 1926137146)))));
            arr_30 [i_7] = ((~(arr_26 [i_0])));
            var_29 = (((((32766 ? 0 : (arr_26 [i_0])))) > ((32749 ? (arr_27 [i_7]) : -32767))));
            var_30 ^= ((~(((var_16 > (arr_28 [i_0] [i_0] [i_7]))))));
        }
        arr_31 [i_0] = ((~(-32767 - 1)));
        arr_32 [i_0 + 1] = ((~((var_16 + (-9223372036854775807 - 1)))));
        var_31 *= ((arr_2 [i_0] [i_0 + 3]) < ((~(arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 6;i_8 += 1) /* same iter space */
    {
        var_32 = (max(var_32, (((~(~var_14))))));
        arr_35 [i_8] |= (((~(arr_0 [i_8 + 4]))));
    }
    var_33 = 2147483647;
    #pragma endscop
}
