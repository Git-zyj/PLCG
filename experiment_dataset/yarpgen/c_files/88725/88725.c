/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 |= var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((!(~-6472030419929543606)));
        arr_3 [13] [i_0] = (arr_1 [i_0]);
        var_20 = (((~((11812068882777382915 ? 6472030419929543606 : 18446744073709551615)))));
        var_21 = (max(var_21, ((((min(((var_6 - (arr_1 [i_0]))), var_16)) < ((14760248963768427843 + (((arr_0 [i_0]) ? var_15 : (arr_0 [i_0]))))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (min((arr_1 [i_0]), (((!(arr_0 [i_0]))))));
            arr_6 [i_0] [i_1] = (max((((3730724671 ? 5 : 4294967292))), (((arr_4 [i_0] [i_0] [i_0]) ? var_9 : (arr_1 [i_1])))));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_23 = ((-(((((arr_0 [i_2]) ? 10 : (arr_4 [i_2] [i_2] [i_2]))) | ((((var_7 && (arr_1 [i_2])))))))));
        var_24 = (max(var_24, 0));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [0] [i_5] [i_5] [i_5] [11] [3] [3] = ((((max(((((arr_18 [i_4] [i_4] [i_4] [i_4]) != var_8))), (arr_0 [i_6])))) ? ((((((arr_9 [i_6]) || var_10)) ? var_7 : (~var_17)))) : ((var_15 >> (var_3 - 14886553510325529196)))));
                        var_25 = (min(var_25, 56));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_4] [i_5] [i_5] |= (min(((((min(4294967290, 1))) ? (max(18014398508433408, 1)) : 0)), (((0 ? -109 : 65166)))));
                        var_26 ^= arr_21 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] [i_7];
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_2] [i_2] = (!1);
                        var_27 = (max(var_27, ((-((((min(1, 36374))) ? ((var_8 >> (((arr_0 [i_2]) - 6736678239784514705)))) : ((254 ? var_9 : var_14))))))));
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_28 &= (~1);
                        arr_33 [i_2] [i_2] [i_2] [i_9] [i_2] = (arr_10 [i_2] [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_29 = ((((((((arr_14 [i_2] [i_2]) ? (arr_16 [i_2] [i_3] [i_3] [6] [i_10] [i_10]) : 18133534163769646070))) ? (min(8746268051228461591, var_1)) : ((((arr_21 [i_2] [i_3] [i_4] [i_4] [i_5] [i_10] [i_10]) ? (arr_29 [i_2] [5] [i_2] [i_2] [i_2]) : (arr_13 [i_2] [i_4] [i_5] [i_10])))))) == ((min((arr_24 [i_5]), ((~(arr_16 [i_2] [i_3] [i_4] [i_5] [i_10] [i_10]))))))));
                        var_30 = (max(var_30, (((~(((-1998198270 <= 14042539475016591126) ? (var_9 + var_6) : (arr_10 [i_5] [i_5]))))))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = min((var_6 / 239), (arr_7 [i_2]));
                    }
                }
                var_31 = (min(var_31, var_14));
                var_32 ^= max((((!(arr_21 [i_2] [i_2] [i_2] [i_2] [14] [i_2] [13])))), ((250 ? (arr_27 [i_2] [i_3] [7] [i_4]) : (arr_27 [i_2] [i_3] [i_3] [i_4]))));
                arr_37 [i_2] [i_2] = (((arr_24 [8]) ? -96 : (((arr_11 [i_2] [i_3] [i_4]) ? (arr_11 [i_2] [2] [5]) : var_14))));
            }
            var_33 = (arr_1 [i_2]);
        }
        arr_38 [i_2] [i_2] = (min(((~(arr_8 [i_2] [i_2]))), (((!(arr_8 [i_2] [i_2]))))));
        arr_39 [i_2] = (((((((arr_29 [4] [i_2] [i_2] [i_2] [1]) ? ((min((arr_16 [i_2] [11] [7] [i_2] [i_2] [i_2]), var_2))) : (~1))) + 2147483647)) >> (var_8 - 191645163)));
    }
    var_34 = ((~((var_6 ? var_15 : var_15))));
    #pragma endscop
}
