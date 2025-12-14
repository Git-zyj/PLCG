/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((min(var_6, var_3)), var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((((((((arr_1 [i_0]) & var_0))) <= ((110 ? (arr_1 [i_0]) : (-9223372036854775807 - 1)))))), -1958419704334674759);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_11 += var_9;
            var_12 ^= (arr_5 [i_0]);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_13 = ((!(((var_2 ? var_2 : 2305843008676823040)))));
                arr_10 [i_0] [i_1] [i_0] = (((~(arr_0 [i_2]))));

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_14 = (((arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) >= var_8));
                    var_15 = (((arr_8 [i_0] [i_0] [i_3] [i_3]) <= 2305843008676823040));
                    var_16 = -2305843008676823040;
                }
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_17 = (var_3 ^ var_6);
                var_18 = (arr_9 [i_0]);
                arr_17 [i_0] [i_0] [i_0] [i_0] = 2305843008676823039;
                arr_18 [i_0] [i_1] [i_4] [i_1] = (((arr_1 [i_0]) ? -2305843008676823027 : ((((arr_7 [i_0] [i_0] [i_1] [i_4]) % 10)))));
                arr_19 [i_0] [i_1] = ((-(var_6 % 114)));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_19 = ((21953 ? var_7 : var_0));
                var_20 = (!var_2);
            }
        }

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                var_21 = (((!var_3) & (max(2305843008676823040, 2305843008676823040))));
                var_22 = (min(((+((-122 ? (arr_1 [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_7]))))), (((~((var_1 ? 1 : (arr_3 [i_0] [i_6]))))))));
            }
            var_23 = 1;
            arr_26 [i_0] [i_6] [5] = 0;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_24 *= (min((((arr_15 [i_0] [i_0] [2] [i_0]) ? ((var_9 ? var_2 : var_8)) : -2305843008676823040)), ((6600501166179018888 ^ (arr_9 [i_8])))));
            var_25 = ((!(((var_5 % (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            var_26 = (min((!2), (max((arr_27 [i_9 - 1] [8]), (arr_27 [i_9 - 1] [4])))));
            arr_31 [i_0] [i_0] = ((-(max((arr_16 [i_0] [i_0] [i_0]), -2305843008676823044))));
            var_27 *= (max((arr_4 [i_9] [i_9 - 3]), -4133530081703571342));
            var_28 &= (115 ^ 65);
        }
        arr_32 [i_0] = var_3;
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = ((var_8 ? ((((23444 <= (max(-2305843008676823040, 20702)))))) : (min(((var_4 ? (arr_34 [i_10]) : (arr_35 [i_10]))), (((arr_34 [i_10]) ^ 8778913153024))))));
        var_29 -= (((((~(arr_33 [i_10])))) ? ((min(1, (arr_34 [i_10])))) : (var_7 & 64101)));
        arr_37 [i_10] = arr_33 [0];
        var_30 = (max(var_30, (arr_34 [i_10])));
        var_31 *= (+((min(((((arr_34 [i_10]) < var_9))), 32767))));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_32 ^= ((178 ? (((max((arr_40 [4]), (arr_40 [14]))))) : ((var_9 & (arr_39 [4])))));
        var_33 += (max(((((arr_38 [i_11] [i_11]) ? (1 % 2436770832) : (arr_38 [i_11] [i_11])))), (min((((2436770832 ? (arr_40 [0]) : var_1))), (((arr_38 [i_11] [i_11]) ? var_0 : 0))))));
        var_34 = (((min((arr_38 [i_11] [i_11]), (arr_39 [i_11]))) > (((arr_39 [i_11]) ^ (arr_38 [i_11] [i_11])))));
    }
    var_35 -= (max(var_3, (var_3 >= var_2)));
    #pragma endscop
}
