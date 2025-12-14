/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_3;
    var_12 = ((65526 ? var_5 : (((((var_1 != var_8) >= var_10))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [1] |= (((var_0 ? 9223372036854775804 : ((((!(arr_2 [i_0]))))))));
        var_13 = 9;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_14 = (((!(arr_1 [i_0]))));
            arr_7 [0] [i_1] [i_1] = 3052383537838308919;
            arr_8 [4] [i_0] [i_1] |= ((((min(8090403841794156846, -9223372036854775805))) ^ ((max((arr_2 [i_0]), 381446050)))));
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((-11989937216726582915 % (((arr_3 [i_2]) ? 9 : (arr_5 [5] [i_2] [i_2]))))))));
        arr_12 [i_2] = (arr_3 [i_2]);

        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_16 = ((~(((arr_9 [i_3]) << 1))));
            var_17 = (arr_3 [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_18 [i_2] [i_2] = ((var_0 ? var_9 : (arr_14 [i_2])));
            var_18 = (((-(arr_0 [i_2] [i_2]))));
            var_19 = ((-8 <= (arr_2 [i_2])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_20 |= ((!(((((arr_10 [i_2] [i_5]) & 61213)) < ((min(0, (arr_9 [i_2]))))))));
            arr_23 [i_2] [i_2] [i_2] &= (!0);
        }
        var_21 ^= (((arr_21 [i_2]) >> (((min((arr_21 [i_2]), (arr_21 [i_2]))) - 3172869738633684127))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_28 [3] [i_6] = (~-8);
        var_22 = (arr_25 [i_6] [i_6]);
        var_23 = (arr_24 [i_6]);

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_32 [i_6] [i_7] |= 65508;
            var_24 ^= (arr_24 [i_6]);
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            arr_35 [i_6] [i_6] = (((1 >> (max(13, 8)))));
            var_25 = (min((((((arr_26 [15]) ? var_5 : (arr_27 [i_6] [i_8]))))), (((min(var_4, (arr_34 [i_6] [i_8 - 1]))) << (((~5136319271531645217) - 13310424802177906339))))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_26 = (((((((arr_30 [i_6]) ? var_3 : var_9)))) / ((+(((arr_25 [i_6] [i_6]) * (arr_31 [i_6] [i_6] [i_6])))))));
            arr_39 [i_9] = ((min(var_6, 34)));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {

            /* vectorizable */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_46 [i_6] [i_6] [i_11] [i_11] = (arr_26 [i_6]);
                arr_47 [i_11] [i_11] [i_11] [9] = 65513;
                var_27 = (max(var_27, (arr_29 [i_6] [i_10] [i_11])));
            }
            var_28 = (min(var_28, var_5));
            arr_48 [i_6] [1] [i_6] = -21230;
        }
        var_29 = max((!var_10), (max(19917, var_7)));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_30 ^= (((((2227859178 ? 9223372036854775805 : 16) / ((min(var_2, (arr_49 [i_12]))))))));
        arr_51 [i_12] = (!20);
    }
    var_31 = 18427301455259576059;
    #pragma endscop
}
