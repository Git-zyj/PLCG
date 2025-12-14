/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = ((+((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? 123 : (max((arr_0 [i_0]), 1592689686418132663))))));
        var_11 *= (max((max((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_3)), ((((arr_0 [i_0]) + var_1))))), (((((max(var_3, -890305263))) ? -890305242 : ((~(arr_1 [i_0]))))))));
        arr_2 [i_0] = ((((max(163, 1143914305352105984))) ? (max((-890305281 ^ 134152192), (~-1600225020))) : 26853));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = ((!((max(((((arr_5 [i_1]) || -890305263))), var_7)))));
        var_12 = (!896);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_13 = ((890305281 ? 243 : -890305252));
            arr_11 [i_2] [i_3] = (-1592689686418132665 ? 890305252 : 27285);

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_14 *= ((!((9872 <= (arr_9 [i_3])))));
                    arr_16 [i_2] [i_2] [i_3] [i_4] [5] = (((arr_14 [i_5 + 1]) ? (arr_8 [i_2] [i_5 - 2]) : -890305258));
                    var_15 |= -4368378917072493512;
                }
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    var_16 -= ((var_1 ? var_1 : (arr_17 [i_6] [i_6] [i_6 - 3] [i_6] [i_6] [i_6 + 2])));
                    arr_20 [i_2] [0] [i_4] [i_3] |= ((!(arr_10 [i_6 - 2] [i_6 + 2])));
                    var_17 = (((arr_9 [i_2]) ? (arr_15 [8] [i_3] [i_4] [i_6 + 3]) : var_5));
                    arr_21 [i_2] [i_3] [i_2] [i_6] |= (~-var_6);
                    var_18 = (~890305218);
                }
                var_19 -= (((arr_8 [i_3] [i_4]) ? var_6 : (arr_8 [i_3] [i_3])));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_25 [i_2] = (arr_19 [i_2] [10] [i_3] [i_3] [i_2] [i_2]);
                var_20 = (!var_0);
            }
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_21 = (arr_12 [i_2] [i_8 + 2]);
            arr_28 [i_2] [i_2] = ((!(arr_18 [13] [9] [i_8 + 2] [13] [i_8])));
        }
        var_22 -= (~12964906486601722486);
    }

    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_23 = (((((max(135, var_2)))) ? (max((max((arr_30 [i_9 + 4]), var_5)), ((max(-839188417, 0))))) : ((max(1, ((-890305241 ? 180 : 10859)))))));
        var_24 = (max(var_24, ((max(((max(524777684, 917504))), (max(-var_7, (((arr_30 [i_9]) ? var_8 : var_4)))))))));
        arr_31 [i_9 - 2] [i_9 - 2] = ((((max(((max(var_7, -1592689686418132677))), (max((arr_29 [i_9]), var_1))))) ? ((max(((var_3 ? 10850 : var_7)), ((max(var_0, var_0)))))) : (max(var_4, (~2251731094208512)))));
        var_25 = (max((1856580518454973770 + var_2), -82));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_26 = -var_8;
        var_27 = ((!((!(arr_7 [i_10])))));
        var_28 -= (((-600091008 | 59029) ? var_6 : var_3));
        arr_34 [i_10] [i_10] = ((1600225023 ? (~-10859) : (((arr_29 [i_10]) ? var_5 : -10867))));
        var_29 = (((-1498627508785131239 ? 4924631867840492809 : 3)));
    }
    #pragma endscop
}
