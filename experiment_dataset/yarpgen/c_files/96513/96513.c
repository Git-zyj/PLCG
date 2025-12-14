/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 ^= (arr_1 [i_0 + 4]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = (max(var_14, (arr_5 [i_0 + 1] [i_1 - 2] [i_0 + 1])));
                        var_15 = ((-((-7 / (arr_0 [i_2])))));
                        arr_12 [i_1] = (!-7);
                    }
                    var_16 = ((min((max(6, var_2)), (((var_10 + (arr_8 [i_0 + 2] [18] [i_0])))))) * ((((!((min((arr_7 [i_1] [i_0]), var_11))))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_17 = ((-281492759 ? 18446744073709551615 : 6182));
        var_18 = (((min((arr_1 [i_4]), (arr_1 [i_4]))) ? (!16888498602639360) : var_11));
        var_19 = ((((((arr_13 [i_4] [i_4]) >> (arr_13 [i_4] [i_4])))) / (max((arr_13 [i_4] [i_4]), var_4))));
        var_20 = (min(var_20, (((((((((~var_3) + 2147483647)) >> (((1 ^ -1197569267) + 1197569282))))) ? ((((!((((arr_9 [16] [i_4] [i_4]) ? (arr_7 [1] [1]) : (arr_7 [i_4] [i_4])))))))) : (((((var_1 ? (arr_9 [8] [8] [8]) : (arr_4 [1] [1])))) ? (((6 ? (arr_9 [4] [i_4] [i_4]) : (arr_13 [i_4] [i_4])))) : 11743833630836552025)))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((min((arr_2 [i_5]), -1197569267)))));
        var_22 = ((3687374957 ? -1197569261 : -154));
        var_23 = 11;
        var_24 = (min(14735316412061136492, 0));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_21 [1] = ((~((var_2 ? (((arr_5 [i_6] [i_6] [i_6]) ? 607592336 : var_8)) : (-202028795 / var_0)))));
        var_25 = ((1197569267 / (((~141) ? 101 : var_10))));
        arr_22 [i_6] [i_6] = max((((arr_13 [i_6] [i_6]) ? -1662761375 : (arr_10 [i_6]))), 63);
    }
    var_26 = (max(var_26, var_10));

    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_7] = var_8;
            var_27 = (!8188735335663204651);
            var_28 = (max(14, (((arr_8 [i_8 - 1] [i_8] [i_7 + 1]) ? (arr_8 [i_8 + 1] [i_8 + 1] [i_7 + 2]) : (arr_8 [i_8 + 1] [16] [i_7 - 1])))));
        }

        /* vectorizable */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_29 = var_4;
            arr_31 [i_7] [i_7] [i_7] = ((((~(arr_0 [i_9]))) + (arr_11 [i_7] [i_7 - 1] [i_7])));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_30 = (((((max(28246, 8440)))) - ((max(var_6, var_3)))));
            var_31 = var_2;
            var_32 = (((arr_15 [i_7]) ? (arr_29 [i_7] [i_7] [i_10]) : (((arr_8 [i_7] [i_7 + 2] [i_7 + 2]) ? (arr_8 [i_7] [i_10] [i_7 + 1]) : var_0))));
        }
        arr_36 [i_7] = ((1662761375 ? 30535 : 15408765505265583694));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_33 = var_10;
        var_34 = (max(var_34, ((((arr_37 [i_11]) || ((((arr_6 [i_11]) % var_12))))))));
    }
    var_35 = (max(var_9, var_11));
    var_36 *= (min(((~((var_1 << (var_12 - 2978))))), -var_6));
    #pragma endscop
}
