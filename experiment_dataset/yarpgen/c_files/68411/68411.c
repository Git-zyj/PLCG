/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] &= (min(((((!3) || (((arr_0 [1]) && 65513))))), 26));
        var_10 = (min(var_10, (36 - 26)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_11 = var_0;
        var_12 += (((~7417588454768334376) ? (!-1) : ((77 ? (-9223372036854775807 - 1) : 11899919698356078353))));
        arr_6 [12] [i_1] = ((((min((arr_4 [i_1]), var_6))) && (((147846094 ? (((var_4 ? var_8 : (arr_5 [i_1] [i_1])))) : (arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [16] = ((((min((((8 / (arr_8 [i_2])))), ((-8090551999171112358 ? 320834361 : 14))))) ? 18446744073709551606 : ((((((8 ? (arr_9 [i_2]) : var_9)) < (arr_5 [i_2] [i_2])))))));
        var_13 &= (((((~(32768 | 0)))) ? ((((~var_5) != 110))) : (27 > var_1)));
        var_14 = (arr_7 [i_2] [i_2]);
    }
    var_15 = var_1;
    var_16 = var_5;
    var_17 = (min(var_6, (((-(var_7 / var_9))))));

    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_18 = ((-112 ? -16 : 15871));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_3] = (((var_0 % -1224867297) || (((var_2 % (arr_16 [i_3]))))));
            arr_18 [i_3] [i_4] = var_5;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_19 += ((15 ^ (arr_12 [i_5])));
            var_20 = (max(var_20, (((1 ? 1224867299 : 238)))));
            var_21 = 255;
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_22 |= ((!(((((arr_22 [10]) ? var_9 : 26)) == (((-13963 + 2147483647) << (((((arr_15 [i_3] [i_3] [16]) + 21132)) - 12))))))));
                    var_23 += min(-var_6, (-695721781 < 133));
                    var_24 &= var_6;
                }
            }
        }
        var_25 = (arr_24 [i_3] [9] [i_3]);
        var_26 *= (arr_11 [2]);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_27 = (min(var_27, var_2));
        var_28 = ((var_1 || (((((min(54556, 131070))) ? (-1244489238 & 54556) : var_2)))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_29 -= (((((-7947391269095044070 - (var_8 + 85)))) ? (((((arr_26 [i_9] [i_9]) >= var_1)))) : ((1224867297 ? ((-13 ? -1224867299 : 14081782321646644437)) : (min(17781637958209800149, (arr_21 [i_9] [0] [i_9])))))));
        var_30 -= -1;
        arr_31 [i_9] = ((((~(min(var_2, -3755330722426867256)))) & (((var_4 ^ ((~(arr_23 [11] [i_9] [5]))))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_31 -= (((arr_13 [22]) ? 26 : (min(1224867307, (arr_15 [i_10] [i_10] [i_10])))));
        var_32 = (((890 << 1) | (((arr_15 [i_10] [i_10] [i_10]) ^ (((arr_34 [i_10] [i_10]) >> var_2))))));
        arr_36 [i_10] |= (min((((-(arr_19 [i_10] [i_10])))), ((((((arr_33 [i_10]) ? 18446744073709551603 : -13963))) ? (((-1 ? 1224867313 : (arr_25 [i_10])))) : (var_6 - 56)))));
        var_33 = ((1 ? (~var_2) : ((min(1, (-127 - 1))))));
    }
    #pragma endscop
}
