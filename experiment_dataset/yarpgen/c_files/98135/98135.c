/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (((((-(arr_1 [i_0] [i_0])))) ? (((((var_11 ? var_10 : 10547))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) / -1096447933441431179)))) : ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] = (max((((-32767 - 1) ? (((max(-20872, var_6)))) : 0)), ((-20850 ? (((min(-20872, (arr_0 [i_1] [i_0]))))) : (arr_1 [i_1] [i_0])))));
            var_15 = ((((max((arr_3 [i_1] [i_0] [i_0]), (var_10 != var_0)))) ? var_5 : (arr_0 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_16 = (min(((-(arr_2 [i_2]))), (((((1 + (arr_4 [i_2]))) & (arr_6 [i_2] [i_0]))))));
            var_17 = (((((arr_7 [i_0] [i_0] [i_2]) < -20872)) ? (((arr_6 [i_2] [i_0]) + (arr_7 [i_0] [i_2] [i_2]))) : (((((arr_7 [i_2] [i_2] [i_0]) < (arr_2 [i_0])))))));
            arr_8 [i_2] [i_0] [i_0] = (min(((min((arr_1 [i_2] [i_0]), (arr_1 [i_2] [i_0])))), (((1 + 1) ? ((((arr_4 [i_2]) ? var_2 : -4989))) : (max(var_8, var_3))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_0] [i_0] [i_3] = (((-(((arr_9 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_3] [i_3]) : 57)))));
            var_18 = ((((-(arr_10 [i_3] [i_0]))) >> ((((arr_10 [i_3] [i_0]) == 405711768)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_19 = (~var_3);
                        var_20 = (min((((-(var_1 - 587264570)))), var_3));
                        var_21 = (((((~(arr_0 [i_0] [i_0])))) ? (arr_0 [i_4] [i_5]) : ((~(arr_12 [i_0] [i_3] [i_4])))));
                        arr_18 [i_0] [i_3] [i_4] [i_5] = ((~(((arr_12 [i_5] [i_3] [i_0]) ? 74 : ((var_2 ? var_5 : var_7))))));
                    }
                }
            }
        }
        var_22 -= (min(var_4, 1));
        arr_19 [i_0] = ((-(((((182 > (arr_10 [i_0] [i_0])))) & 0))));
    }
    var_23 ^= (((var_6 + ((var_9 ? 2095104 : -1144365956)))));

    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_24 = arr_22 [i_6] [i_6 + 2];
        arr_23 [i_6 - 1] = (((9223372036854775807 ? (arr_22 [i_6 + 2] [i_6 + 1]) : (arr_22 [i_6 - 3] [i_6 + 2]))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_26 [i_7] = -1;
        var_25 = (max(var_25, (((var_9 ? (((13486 & -587264571) + (arr_9 [i_7] [i_7] [i_7]))) : (arr_9 [i_7] [i_7] [i_7]))))));
        var_26 = -var_10;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    arr_34 [i_9 - 1] [i_8] [i_7] [i_7] = min(((((arr_33 [i_7] [i_8] [i_9 + 3] [i_7]) ? -2095105 : var_12))), 2580009698132739581);
                    arr_35 [i_9] [i_9 - 2] [i_8] [i_7] = ((+(((!((((arr_29 [i_9] [i_8] [i_7]) ? (arr_13 [i_9] [i_8]) : -68749596))))))));
                }
            }
        }
        var_27 = (min(var_27, ((max(((((((arr_3 [i_7] [i_7] [i_7]) ? (arr_1 [i_7] [i_7]) : 2147483629))) - (((arr_12 [i_7] [i_7] [i_7]) ? var_7 : var_10)))), ((~(min((arr_29 [i_7] [i_7] [i_7]), var_3)))))))));
    }
    #pragma endscop
}
