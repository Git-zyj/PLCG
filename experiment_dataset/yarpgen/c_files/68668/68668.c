/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 = ((1 ? (min(((((arr_0 [i_0] [i_1]) ? var_5 : (arr_0 [i_0] [8])))), (min((arr_1 [i_1] [i_0]), var_16)))) : (((((arr_0 [i_0] [6]) && (arr_0 [i_0] [i_1])))))));
            var_20 = ((((max((((arr_3 [i_0] [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))), -1))) ? -1609973751165063048 : 60));
        }
        arr_5 [i_0] = ((~(arr_3 [1] [1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            arr_10 [14] [i_3] = (arr_8 [i_2]);
            var_21 = (min(((((((18446744073709551606 ? 1602028117 : 1254282437))) || (((var_0 ? (arr_7 [i_2] [i_2]) : (arr_9 [i_2] [i_3]))))))), ((min((arr_7 [9] [i_3]), (arr_8 [i_3]))))));
            var_22 = (((-(arr_7 [i_3 + 1] [i_3 - 3]))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_23 = (((-4 - 119) ? -var_0 : 1));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_24 = (((arr_19 [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_4] [i_2]) <= (arr_18 [i_7 - 3] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_6])));
                            arr_25 [i_7] [i_6] [i_5] [i_4] [i_7] = (((arr_22 [i_2] [i_2] [i_5] [19] [i_7 - 3] [i_7 - 3]) && 133));
                        }
                    }
                }
                var_25 = (140317248520590462 + 4294967276);
                arr_26 [i_2] [i_2] [i_2] = (((arr_15 [i_4]) * 0));
            }
            var_26 = (min((((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) / (arr_7 [i_2] [i_2]))))), ((-(((arr_17 [13]) | (arr_20 [i_2] [i_4])))))));
        }
        arr_27 [12] = (min(((((arr_7 [i_2] [i_2]) != (arr_19 [4] [i_2] [i_2] [i_2] [i_2])))), ((-(arr_13 [i_2])))));
        arr_28 [i_2] = (((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) - (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))) + ((((!(arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
        arr_29 [i_2] = (((((~(max((-32767 - 1), (arr_11 [i_2] [7] [i_2])))))) ? (arr_15 [i_2]) : (((arr_8 [i_2]) % ((max(125, -115)))))));
        var_27 = (((arr_18 [2] [13] [i_2] [i_2] [13]) ? (min((((arr_9 [4] [i_2]) | var_4)), 21957)) : ((min(((1 ? 1 : (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))), (arr_15 [i_2]))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_28 = (27980 <= 7580953781024738448);
        var_29 = (((arr_19 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]) ^ (arr_17 [i_8 + 1])));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        var_30 = (arr_21 [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_9] [i_12 + 1]);
                        arr_44 [i_12] [i_12] [i_12] [i_12] [i_12] [i_9] = 144;
                        var_31 = (((arr_15 [i_12 + 1]) <= -27963));
                    }
                }
            }
        }
        var_32 = ((((((arr_8 [i_9]) ? 0 : (arr_8 [6])))) ? (arr_41 [i_9 + 1] [i_9 + 1] [i_9 + 1]) : (arr_13 [i_9])));
    }
    var_33 = (min((((var_13 ? var_8 : var_10))), ((~(var_16 * var_4)))));
    var_34 = var_9;
    var_35 = min(7580953781024738448, 7676324055490929379);
    #pragma endscop
}
