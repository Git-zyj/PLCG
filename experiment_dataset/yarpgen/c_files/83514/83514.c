/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min(var_0, 9431177452792767457)) + (((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))));
        var_10 = (((((14296235425456714614 < var_1) ? (max(13676821255344726602, 439187329815949691)) : 439187329815949688)) / (((max((4769922818364825022 > var_7), var_7))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [1] = (arr_4 [8] [3]);
        var_11 = ((+((min((min((arr_1 [i_1] [5]), (arr_0 [7]))), (!439187329815949691))))));
        var_12 = (min(var_12, (((((((var_8 ? var_7 : var_7))) / (min(9015566620916784159, -338882746))))))));
        var_13 = (min(167, 4769922818364825014));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_14 = 4282360089302282839;
        var_15 = (max((((arr_9 [i_2]) ? (arr_1 [i_2] [i_2]) : 4662708298473878050)), (((!(arr_1 [i_2] [i_2]))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_3] [i_2] [i_2] = ((var_2 & (arr_1 [i_2] [i_3])));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_16 *= (((arr_18 [i_2]) ? (((arr_7 [i_4 + 1] [i_4 - 1]) ? (arr_8 [i_3]) : var_0)) : var_2));
                    arr_19 [i_2] [i_5] = (arr_16 [i_2]);
                }
                var_17 = (max(var_17, (!13784035775235673566)));
                var_18 = (((arr_2 [i_2] [i_2]) ? (arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]) : (arr_17 [9] [i_2] [9] [i_2] [i_2])));
                var_19 = ((-(-67 && -55)));
                var_20 = ((!(arr_14 [i_2] [i_2] [i_2])));
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_21 = var_1;
                arr_22 [i_2] [i_2] [i_6 - 1] &= (arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]);
                var_22 = (((arr_15 [i_3] [i_3] [i_6 - 1]) < (arr_15 [i_2] [i_2] [i_6 - 1])));
            }

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_23 -= (-4282360089302282840 / 458120356691813687);
                arr_26 [i_7] = ((+(((arr_1 [i_2] [i_3]) ? -67 : var_9))));
                var_24 = ((arr_21 [i_7] [i_3] [i_7]) ? (arr_21 [i_2] [i_3] [i_7]) : var_4);
                arr_27 [i_7] = 63;
            }
            var_25 *= ((((arr_10 [i_2]) ? (arr_13 [i_2] [i_2] [17] [17]) : (arr_1 [i_2] [i_2]))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = ((275550162 & (arr_25 [i_2] [6] [i_8])));
            var_27 = (~var_5);
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_28 -= ((var_5 ? ((((var_5 - 25108) / ((-(arr_29 [i_2] [i_9] [i_9])))))) : var_6));
            var_29 = (min(0, var_8));
            arr_34 [i_2] = ((~(arr_2 [i_9] [i_2])));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 = (-(arr_35 [i_10] [i_9] [i_10]));
                var_31 -= (min((min((~18007556743893601909), var_4)), (((!2566373615048802274) / var_3))));
                var_32 = min(((((var_9 != var_6) >= (arr_15 [i_2] [i_2] [i_10])))), 93);
                var_33 = (((((var_2 ? (arr_23 [i_2] [i_2]) : var_7))) ? (~var_2) : (max((!var_2), (((-9223372036854775807 - 1) ? (arr_8 [1]) : -1151097736960606847))))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_34 -= var_7;
            arr_40 [i_2] [i_2] [i_2] = 89;
            var_35 = (arr_18 [i_2]);
            var_36 = (((arr_14 [i_2] [i_2] [5]) + (arr_13 [i_2] [16] [1] [16])));
        }
    }
    var_37 = 9577;
    var_38 = var_4;
    #pragma endscop
}
