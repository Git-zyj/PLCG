/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, 49656));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [i_0]) ? -22781 : (arr_1 [i_0])));
        var_18 = 6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = (((((arr_0 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 18446744073709551612)) == (arr_0 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = ((arr_3 [i_1]) / (((var_2 ? -950770880 : (arr_4 [i_1] [i_1])))));
        var_20 ^= (arr_5 [i_1]);
        arr_7 [i_1] = ((var_1 ? (arr_3 [i_1]) : (arr_3 [i_1])));
    }
    var_21 = (((((var_2 ? var_6 : (((1048575 ? var_3 : var_12)))))) ? var_14 : var_4));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 = ((-30284 ? (arr_8 [i_2]) : ((((((arr_10 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]))) >= 1297109815)))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_23 = (((arr_11 [i_3 - 1] [i_3 - 1]) ^ (((-22781 ? (arr_9 [i_2]) : 2157673103024026935)))));
            arr_13 [i_2] = (((((arr_10 [i_2]) ? (arr_11 [i_2] [i_3]) : (arr_11 [i_2] [i_2])))) ? var_9 : (arr_12 [i_2]));
        }
        var_24 ^= ((((((arr_8 [6]) ? (arr_8 [16]) : (arr_8 [0])))) ? (((((arr_8 [10]) ? (arr_12 [20]) : (arr_9 [i_2]))) + (arr_12 [16]))) : (((((arr_10 [20]) <= (arr_11 [i_2] [i_2])))))));

        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_25 &= max((((((65 ? 15879 : 255))) ? (min((arr_15 [i_2] [i_2] [5]), (arr_12 [8]))) : (-1703373064 && 0))), ((((arr_15 [i_2] [i_2] [i_2]) || 1149287517))));
            var_26 = (arr_10 [i_2]);
            arr_16 [i_2] = ((((min(14910651107802654370, (arr_11 [i_4 + 1] [i_4 - 1])))) ? (arr_11 [i_4 + 1] [i_4 - 1]) : (((2 % (arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_27 = (arr_8 [i_2]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_28 = (((min((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))) != 255));
                            var_29 = arr_18 [i_2] [i_4 + 1];
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_30 -= (max((var_1 < var_5), (((arr_12 [12]) ? 125829120 : (arr_19 [20])))));
            arr_30 [i_2] [i_2] [i_2] = ((((((arr_24 [i_2] [i_8] [i_8] [i_8 - 1] [12] [i_8]) ? (arr_24 [i_2] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8]) : (arr_24 [i_2] [i_2] [i_8 - 1] [i_8 + 1] [i_2] [i_8 - 1])))) ? (254 >= 268435456) : (((!(((var_7 ? -103 : var_11))))))));
        }
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            var_31 = (arr_12 [i_2]);
            var_32 = (((-103 >= (arr_19 [i_2]))));
            arr_33 [i_2] [i_2] = ((((arr_22 [i_2] [i_9] [i_9] [i_2] [i_9 - 1] [i_9] [i_2]) || (arr_22 [i_2] [i_2] [i_2] [i_2] [i_9 + 1] [i_2] [i_9 + 1]))));
        }
        arr_34 [i_2] = ((((min((min((arr_26 [i_2] [i_2]), 41142)), ((15879 ? (arr_8 [i_2]) : (arr_10 [i_2])))))) ? (((((arr_10 [i_2]) > 1065473386)))) : ((((max(0, (arr_27 [i_2])))) ? (arr_28 [i_2] [i_2] [i_2]) : (arr_19 [i_2])))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_33 ^= (-2115565945958231565 != 53595);
        var_34 = (arr_27 [2]);
        var_35 = (max(var_35, ((((arr_22 [4] [i_10] [i_10] [4] [i_10] [1] [i_10]) & (arr_22 [20] [i_10] [i_10] [20] [20] [i_10] [i_10]))))));
        var_36 = (arr_22 [8] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            {
                var_37 -= ((((min((arr_41 [i_11] [i_12]), (arr_41 [i_11] [i_12])))) ? (((arr_41 [i_11] [i_11]) ? (arr_41 [i_11] [i_12]) : (arr_41 [i_12] [i_12]))) : (~1)));
                arr_42 [i_11] [i_12] [i_12] = ((-(min(2, (min(var_0, (arr_4 [i_12] [i_12])))))));
            }
        }
    }
    #pragma endscop
}
