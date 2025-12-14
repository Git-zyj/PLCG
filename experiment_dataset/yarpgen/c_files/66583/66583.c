/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((min(var_1, var_10)) == (((min(var_0, var_8))))))), ((min(5112929772056356004, 11102)))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = (max((~var_1), (arr_4 [i_0 - 3])));
            var_14 = (min(var_14, ((((~12665) < (((arr_0 [i_0 - 2]) >> (-32 + 46))))))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_15 = (min(((((arr_4 [i_0 + 1]) != (arr_4 [i_0 - 2])))), ((var_4 ? 0 : var_4))));
                var_16 = (min(var_16, ((max(((((min((arr_5 [i_0] [i_0] [i_2] [i_2]), (arr_0 [i_2]))) != var_8))), (min(((max(var_6, -1))), var_0)))))));
                arr_7 [i_0] [i_0] [i_0] [i_0 - 2] = (((arr_3 [i_0 - 4] [i_0 - 1]) << ((min(192, var_1)))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_3] &= ((((min(var_5, var_9))) ? (((arr_8 [i_0 - 4] [i_0] [i_0 - 3]) ? 58 : (arr_6 [i_0]))) : (((arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 2]) ? 0 : (arr_6 [i_0 - 4])))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_17 = (max(var_17, -var_4));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 = (var_11 == var_10);
                        var_19 = ((~((var_7 ? var_7 : 1))));
                        arr_17 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_0 - 1] [i_4] [i_0 - 1] = var_10;
                        var_20 &= var_5;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 -= 1;
                        var_22 = ((arr_8 [i_0 - 1] [i_1] [i_0 - 2]) ? 1 : ((var_7 ? var_1 : var_11)));
                        arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] = ((1 ? (arr_11 [i_0 - 2] [i_4] [i_3]) : var_8));
                        var_23 = (((((var_11 ? (arr_8 [i_0 - 4] [i_0 - 4] [i_1]) : 1))) ? 0 : var_5));
                    }
                }
                var_24 = (max(var_24, (((((-(arr_3 [i_0] [i_1]))) % var_8)))));
            }
            var_25 = var_9;
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_0 - 4] [i_7] [i_0] = (-((max((arr_18 [i_0] [i_0] [i_0 - 2] [i_0]), var_2))));
            var_26 = (max(var_26, var_9));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_28 [i_8] [i_8] = ((((((arr_19 [i_0] [i_8] [i_0 - 2]) % -1))) ? (var_0 + var_9) : (((1 * (arr_1 [i_0 - 2]))))));
            var_27 = (max(var_27, (((arr_0 [i_0 - 2]) % ((((arr_1 [i_0 + 1]) != var_4)))))));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_28 = (-(max(-0, (min(var_0, var_10)))));
            arr_32 [i_0] &= (min(((((~var_4) || 173))), (min((arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_0 - 1]), (max(var_7, 1152921504606846912))))));
            arr_33 [i_0 - 3] [i_9] = ((((min(29849, var_0))) ? (arr_6 [i_0 - 2]) : ((var_0 ? (arr_6 [i_0 - 4]) : 0))));
        }
        arr_34 [i_0] [i_0] = ((-2120972190 ? -1 : -1));
        var_29 = (max(var_29, ((max(-4341027108614997196, ((~(min(var_9, 0)))))))));
    }
    for (int i_10 = 4; i_10 < 9;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 3; i_11 < 7;i_11 += 1)
        {
            var_30 *= (min((((arr_39 [i_11 - 3] [i_10 - 2] [i_10 - 4]) ? (arr_39 [i_11 + 1] [i_10 - 1] [i_10 + 1]) : -30564)), ((min(var_1, 45618)))));

            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                arr_44 [i_12] = 17815116510493507890;
                arr_45 [i_10] [i_11 + 2] [i_12] = (((arr_37 [i_10 - 2] [i_12 - 2] [i_12 + 2]) * (max(var_8, (arr_16 [i_10 - 1] [i_10 + 1])))));
            }
            var_31 += (-4546306158008538146 ? 1 : 1);
        }
        arr_46 [i_10 - 1] = (((min(369052113, var_5)) & -13696977));
        var_32 -= (max((arr_40 [i_10 - 4] [i_10]), var_10));
    }
    var_33 = (max(var_33, (((var_3 < ((-var_4 ? var_4 : (~954904558))))))));
    #pragma endscop
}
