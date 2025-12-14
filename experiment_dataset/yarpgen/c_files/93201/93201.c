/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((arr_1 [i_0]) ? 41 : ((61 ? 56576 : (arr_2 [i_0] [i_0]))));
        var_18 += (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_19 &= (((!1) ? ((((arr_0 [i_0] [i_0]) >= var_4))) : (~1)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] &= 207;
        arr_8 [i_1] = (min(((206 ? 58 : 3618357496)), ((min(((1442197212 ? 1 : 58215)), 214)))));
        arr_9 [i_1] = (max(var_12, (arr_5 [i_1] [i_1])));
        arr_10 [i_1] = (((arr_0 [i_1] [21]) | ((max((((!(arr_5 [i_1] [i_1])))), 43)))));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                arr_15 [i_1] [i_2] [i_1] = (((((arr_0 [i_2 + 1] [i_3 - 2]) ? (arr_12 [i_2 + 1] [i_3 + 1]) : (arr_0 [i_2 + 2] [i_3 - 2]))) ^ (2772966892 <= 1)));
                var_20 &= min((((1 ? 209 : 1))), (((arr_4 [i_2 + 3] [i_2 + 3]) | (arr_13 [i_2 + 1] [i_2 + 3] [i_3 - 2]))));
                var_21 = ((37 ? (((arr_1 [i_1]) ? ((max(var_6, (arr_12 [i_1] [i_2 - 1])))) : -45)) : (min((((48 && (arr_1 [i_1])))), (arr_0 [i_1] [i_2])))));
            }
            var_22 = (arr_2 [i_1] [1]);
        }
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4 - 1] = ((+(((!(((arr_13 [i_4 - 3] [i_4] [i_4]) < (arr_6 [i_4]))))))));
        arr_19 [i_4 + 1] = ((((!((((arr_13 [i_4] [i_4] [i_4]) ? (arr_0 [i_4] [i_4]) : (arr_2 [i_4] [i_4])))))) ? ((var_0 & (arr_16 [i_4 + 3]))) : ((var_1 - ((max(var_8, var_5)))))));
    }
    var_23 = (((((420074897 && (((var_14 ? var_13 : var_14)))))) >> (((((((3450574359 ? 1 : 1))) ? (max(4230240738, 1)) : 820961474)) - 4230240721))));

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = ((((((-1442197218 - 9276) != (91 > 65535)))) >> ((((var_12 - (arr_22 [i_5]))) / ((var_12 ? -420074897 : (arr_2 [i_5] [i_5])))))));
        var_25 = ((((((var_8 ? 1 : var_10))) ? (arr_21 [i_5]) : ((var_16 ? 44 : var_10)))) == (((!(max(var_16, var_7))))));
    }
    #pragma endscop
}
