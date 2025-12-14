/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_11 = (max(var_11, (((((max(((((arr_1 [i_0]) ? (arr_0 [2]) : (arr_4 [11])))), 18446744073709551615))) ? ((((min((arr_4 [1]), (arr_3 [i_0 - 2] [10] [i_0 - 2])))))) : (((min(907447808, 255)) / -var_1)))))));
            var_12 = ((((min(var_0, (10 / var_5)))) - (((arr_1 [11]) ? (((-(arr_1 [i_0 + 1])))) : (3387519487 / 3710022531306900989)))));
            arr_5 [i_0] = ((!((!((min((arr_1 [1]), (arr_1 [i_0]))))))));
            var_13 += ((!((min(var_7, (!var_9))))));
            arr_6 [i_0] [i_0 - 2] = (max(((((arr_3 [i_1 + 1] [i_0] [i_1]) / (arr_3 [i_0] [i_0] [i_0])))), (min((max((arr_3 [i_0 - 2] [i_0] [i_0 - 2]), var_4)), (((3387519459 ? var_10 : 0)))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_14 += (((((arr_3 [i_0 + 1] [i_2] [i_0 + 1]) ? (arr_3 [i_2] [i_2] [i_0 - 1]) : (arr_3 [i_0 - 2] [i_2] [i_0 - 1]))) + (((arr_3 [i_0 - 1] [i_2] [i_0 - 2]) ? (arr_3 [4] [i_2] [i_0 + 1]) : (arr_3 [10] [i_2] [i_0 + 1])))));
            arr_10 [i_0] [i_0] = (((3387519488 ^ -103) || (((((arr_2 [i_0 - 2]) ? -3314794451106326988 : var_3))))));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_15 = (arr_4 [i_0 + 1]);
                var_16 ^= (((arr_4 [i_0 + 1]) ? (((-((min((arr_3 [i_3] [i_3] [i_3]), (arr_4 [i_2]))))))) : (min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_3] [i_3])))));
                arr_14 [i_0] [i_3] = 907447808;
                var_17 |= (arr_0 [i_3]);
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_0] = (((178 * (arr_3 [i_5] [i_0] [i_0 - 2]))));
                    var_18 ^= (var_2 < 1030089796686115274);

                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        var_19 &= (arr_21 [i_0] [i_2] [i_4] [i_5] [6] [i_2]);
                        var_20 *= ((var_5 || (arr_4 [i_2])));
                        var_21 &= ((-((((arr_23 [3] [i_2] [i_2] [i_2] [i_2]) != (arr_0 [i_2]))))));
                        arr_25 [i_0 + 1] [i_2] [i_2] [i_0] [i_2] = -1793589951;
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_22 = (((arr_21 [i_7 - 1] [i_0] [i_7 + 2] [i_7 - 1] [i_0] [i_0 + 1]) / (arr_3 [i_0] [i_0] [i_0 - 1])));
                        arr_28 [i_0] [i_0] [i_4] [5] [i_4] [i_0 - 2] = ((!(arr_9 [i_0])));
                    }
                    var_23 ^= (arr_19 [2] [i_2] [2] [i_5] [2]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_24 = (((var_5 < (arr_11 [i_0] [i_0] [i_4] [i_0]))));
                    arr_33 [i_0 - 2] [i_8] |= ((-(arr_23 [i_0] [i_0] [i_8] [i_8] [i_0 + 1])));
                    var_25 = (arr_3 [i_8] [i_0] [i_4]);
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_26 = 23;
                    arr_36 [i_0] [i_2] [i_0] = ((-1 > (((((arr_12 [2] [2] [i_0]) ? var_6 : (arr_7 [i_2] [i_0] [i_0]))) + (((4323455642275676160 / (arr_1 [i_4]))))))));
                    arr_37 [2] [8] [i_4] [i_0] [i_2] [i_0 + 1] = (arr_32 [i_0] [i_0] [i_2] [i_2] [i_0]);
                }
                var_27 ^= ((((!(arr_23 [i_0] [i_4] [i_4] [i_4] [i_0 + 1])))));
            }

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_41 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_10] |= ((!((((arr_39 [i_10] [i_10] [i_10]) ? (arr_18 [i_0 - 2] [11] [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (arr_34 [i_10] [i_10] [i_2] [i_0] [i_10]))))));
                var_28 += ((!(arr_8 [i_10] [i_10] [i_10])));
            }
        }
        var_29 = (min(var_29, (arr_32 [4] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (((arr_17 [i_11 - 2] [i_11 - 2]) ? (arr_17 [i_11 - 1] [i_11 - 2]) : (arr_17 [i_11 - 2] [i_11 + 1])))));
        arr_46 [i_11] = (((!(arr_39 [i_11] [2] [i_11]))) ? (((var_3 > (arr_2 [i_11])))) : (!907447808));
        var_31 = (max(var_31, (((-32753 / ((var_10 & (arr_45 [4] [4]))))))));
    }
    var_32 += (((((var_2 ? 9822357137864875350 : var_1))) >= (min(var_6, ((max(1030089796686115283, var_2)))))));
    #pragma endscop
}
