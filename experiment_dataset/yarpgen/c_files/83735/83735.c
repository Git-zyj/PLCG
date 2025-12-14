/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_11 = (max(var_11, ((max(32768, 255)))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_12 = (min(((max(((max((arr_3 [i_2]), (arr_6 [i_0] [5] [i_2] [i_3])))), (max((arr_5 [i_0] [i_0] [i_2] [i_3]), var_4))))), (((var_6 & 4624) ? (((var_3 ? (arr_3 [i_1 + 1]) : (arr_0 [i_2])))) : (((arr_2 [4] [1]) ? var_5 : var_1))))));
                    arr_10 [i_0] [i_1] [7] [i_3] = (((-4625 || 99) >> (((min(var_3, ((var_1 ? (arr_5 [10] [i_2] [i_1] [i_0]) : var_7)))) - 2246218552))));
                }
                var_13 = var_7;
                var_14 = max(var_1, (((var_8 ? var_7 : (!var_6)))));
                arr_11 [i_0] [i_1] [i_2] [i_2] = (((156 - 255) ? ((-(arr_4 [i_1 + 1] [i_1] [i_1 - 1]))) : 19879));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_15 = (min(var_15, ((max(((-(((arr_6 [i_0] [6] [8] [4]) ? var_2 : (arr_5 [i_0] [3] [8] [i_0]))))), (arr_8 [i_0]))))));
                var_16 = (arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_17 = ((((max(var_7, ((((arr_1 [i_0]) % 1)))))) ? 4632 : var_1));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_18 = ((-((~((~(arr_15 [5] [i_1] [i_4] [i_5])))))));
                    arr_16 [i_5] = (arr_7 [i_1 + 1] [i_1 - 1]);
                    arr_17 [i_0] [i_1] [i_5] [i_0] = (((((174 ? 0 : 4294967289))) ? ((min(0, ((25 ? 32767 : -32749))))) : (min((-7969275192255280624 || var_7), (max((arr_8 [i_0]), 8931535532447054432))))));
                    var_19 = (max(var_19, ((min(((((arr_0 [i_1 + 1]) & (arr_0 [i_1 - 1])))), var_3)))));
                    var_20 = ((((((var_5 ? (arr_13 [i_0]) : var_0)))) ? var_2 : (((var_7 <= ((((arr_7 [i_0] [i_0]) ? (arr_4 [i_5] [1] [1]) : (arr_12 [i_0] [i_0] [i_0])))))))));
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_21 = ((65524 ? (arr_14 [7] [i_1] [i_4] [i_6] [i_6] [i_6 - 2]) : 4095));
                    arr_20 [i_0] [i_1] [i_4] = max((((((((arr_6 [i_0] [i_0] [1] [i_0]) ? var_5 : (arr_7 [i_0] [0])))) ? var_2 : (arr_13 [i_4])))), (((2423180202 - 1673995610013418077) ? (arr_6 [i_0] [i_0] [1] [i_6]) : (arr_7 [i_1 + 1] [i_6 + 1]))));
                    var_22 += (!((((var_8 | var_2) * 1596934053))));
                }
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                var_23 = (65535 ? (arr_15 [i_0] [i_0] [i_1] [i_0]) : ((max(((var_4 ? var_5 : (arr_5 [i_0] [i_1] [i_7 - 1] [i_1]))), var_7))));
                var_24 = var_6;
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                var_25 = (((((!(arr_3 [i_1])))) * (((var_7 != (arr_9 [10] [i_1 - 1]))))));
                var_26 = (min(var_26, 0));
                var_27 = var_3;
            }
            var_28 = (((((min(20, (arr_1 [i_0])))) >> (var_2 - 86))));
            arr_27 [i_0] [i_1] = (((((!(((123 % (arr_0 [i_0]))))))) | (arr_2 [i_0] [i_1 + 1])));
            var_29 = 0;
            var_30 -= (arr_26 [i_0] [i_0] [i_0]);
        }
        var_31 = ((2305843009213693952 ? 4294967295 : 1));
        var_32 -= 0;
        var_33 = ((-((-(arr_26 [i_0] [i_0] [i_0])))));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_34 = (max(var_34, (((11682 < (-32767 - 1))))));
        var_35 = (min(var_35, (((!((min(var_3, (((arr_29 [i_9]) ? (arr_29 [i_9]) : var_0))))))))));
        arr_30 [i_9] [i_9] = ((((((arr_28 [i_9 + 1] [i_9 - 1]) & 32767))) && (arr_29 [i_9])));
        var_36 = (var_4 ? var_1 : var_6);
        var_37 = (min((var_3 > var_6), ((((var_8 ? 0 : 27041)) + var_5))));
    }
    #pragma endscop
}
