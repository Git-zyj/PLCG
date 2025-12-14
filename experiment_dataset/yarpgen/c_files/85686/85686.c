/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((((-var_3 ? ((var_2 ? var_9 : var_4)) : ((max(29229, 2674)))))) ? (var_3 | var_3) : var_1));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_6;
        var_14 = (((((var_9 ? var_12 : -3727224419803790175))) ^ (arr_2 [i_0])));
        arr_4 [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = var_11;
                    arr_10 [i_0] [i_1 - 1] [i_2] = (((min(240, (arr_0 [i_0])))) % ((~(arr_0 [i_0]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = (var_6 > var_4);

            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                var_15 |= (!13140302791490488469);
                var_16 = (max(var_16, var_2));
                arr_20 [i_3] [i_3] [8] [i_5] |= ((((63 == (arr_0 [12])))));
                arr_21 [i_4] [i_4] [i_4] = ((42 ? (((arr_6 [i_4]) >> (-4955 + 4962))) : ((4954 ? 0 : -63))));
                var_17 -= ((var_2 ? (arr_19 [i_3] [i_4 + 1] [i_5 + 1]) : (arr_19 [i_3] [i_4 - 1] [i_5])));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_18 = (arr_5 [i_4 + 1] [i_4 - 1] [i_4 + 1]);
                arr_24 [i_3] [i_4] [i_4] [i_3] = var_5;
            }
            var_19 *= (((arr_19 [i_3] [2] [i_4 + 1]) * (!63)));
            var_20 = ((var_11 ? (arr_5 [i_3] [i_3] [8]) : ((var_7 ? var_3 : -64))));
            arr_25 [i_3] [10] [8] &= ((arr_18 [3] [3] [3]) >= (arr_1 [14]));
        }
        arr_26 [i_3] = var_10;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [3] [i_7] = 4954;
                        arr_39 [i_7] [i_7] [i_8] [i_7] [i_10] [9] = (((arr_28 [i_8]) ? (arr_12 [i_7] [i_7]) : var_12));
                    }
                }
            }
            var_21 = (arr_8 [i_8] [i_8] [i_8] [i_7]);
            var_22 = (max(var_22, (((~(arr_8 [i_7] [i_8] [i_7] [i_8]))))));
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_23 *= ((((((arr_43 [i_7] [i_11]) ? 0 : (arr_43 [i_7] [i_11])))) ? (((var_2 + 2147483647) >> (((arr_14 [i_11] [i_11]) - 164)))) : -63));
            var_24 = (((arr_6 [i_11]) ? 7407890418557461898 : (arr_28 [i_11 + 3])));
        }
        var_25 = (min(var_25, 552135148));
        arr_44 [i_7] [16] = 255;
        arr_45 [i_7] [i_7] = ((((arr_6 [i_7]) ? var_11 : -3413024512755641986)));
        arr_46 [i_7] = ((((((3742832147 ? 4954 : var_5))) ? 530942927522164928 : 11038853655152089718)));
    }
    #pragma endscop
}
