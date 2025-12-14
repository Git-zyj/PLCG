/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((!((max(var_15, ((var_15 ? var_10 : var_18)))))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((min((6565372949328805111 != 6565372949328805105), (arr_1 [i_0]))));
        var_21 = (((((!(((var_11 * (arr_1 [i_0]))))))) / (((arr_1 [i_0 - 4]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 4])))));
        var_22 = var_0;

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((-(min((arr_0 [i_0 - 4]), (arr_4 [i_0] [i_1 - 3] [i_0 - 3])))));
            var_23 = (max((arr_4 [i_0] [i_1] [i_1]), (((!(arr_4 [i_0] [i_0] [i_1 - 2]))))));
            var_24 = (arr_1 [i_0 + 1]);
            var_25 = ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_0 + 2])))) ? (arr_0 [i_0 + 1]) : ((((arr_0 [i_0 - 1]) < (arr_0 [i_1 + 2]))))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_26 = (max((((((13935965136704901465 ? 17368064925401509991 : 17368064925401509983))) ? ((((arr_6 [i_0] [i_0] [i_0]) % var_4))) : (max((arr_7 [i_0] [i_0] [10]), var_9)))), (((((~(arr_7 [8] [8] [8])))) ? (arr_4 [i_2] [i_2 + 2] [i_0]) : ((((!(arr_4 [i_0] [i_2 - 1] [9])))))))));
            var_27 = (((arr_6 [i_0 + 1] [i_0 - 3] [i_2 + 2]) ? 1078679148308041618 : ((((arr_6 [i_0 + 2] [i_0 + 1] [i_2 + 2]) ? 193 : 32768)))));
        }
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_28 = (((~var_2) < ((((((arr_3 [i_3 - 1]) ? var_5 : (arr_8 [i_3 + 1])))) ? ((var_10 ? (arr_7 [i_3] [i_3 - 3] [i_3 - 3]) : 17368064925401509991)) : (arr_3 [i_3 - 1])))));
        var_29 = (((((var_2 - var_17) * (((arr_9 [i_3]) << (((arr_6 [7] [i_3 + 1] [i_3 + 1]) - 32221)))))) + var_0));

        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            arr_13 [i_3] &= ((((arr_3 [i_3 + 2]) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2]))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_30 = (arr_15 [i_3] [i_3]);
                var_31 = ((!(arr_4 [i_4 - 1] [i_4 - 3] [i_5])));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_18 [i_3] [i_4 - 1] [i_4 - 1] [i_6] = (((((arr_12 [i_3] [i_3]) / (arr_6 [i_3] [8] [i_6]))) < var_4));
                var_32 = ((3289053161 ? 0 : 4294967295));
            }
            arr_19 [i_3 - 2] [i_3 - 2] = (max((((arr_0 [i_4]) ? (min(var_15, (arr_8 [i_4 + 2]))) : (((arr_9 [i_4 - 3]) ? (arr_9 [i_3]) : var_16)))), (min((max((arr_7 [i_3] [i_3] [i_3]), var_7)), (~-13973)))));
        }
        var_33 = ((((var_13 ? (arr_14 [8] [i_3 + 2] [i_3 + 1]) : ((~(arr_9 [9]))))) != -13959));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_34 = (~(~-124));
        var_35 = (((arr_12 [i_7 - 1] [i_7 - 3]) / (arr_12 [i_7 - 2] [i_7])));
    }
    #pragma endscop
}
