/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = (~var_7);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = arr_2 [i_0];
        arr_3 [i_0 + 1] [i_0] = max(((-23 % ((var_2 ? var_3 : var_13)))), ((min((arr_1 [i_0 + 1]), (-23 != -12)))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] = (((((max(var_16, var_10))) ? ((var_5 ? var_8 : (arr_6 [i_0]))) : var_10)) >= 1023);
            var_20 = (((arr_4 [i_0 + 1] [i_1 - 1]) & (((arr_0 [i_0] [i_1 - 1]) ^ (arr_0 [i_0 + 1] [i_1 - 2])))));
            arr_8 [i_0] [i_0] = ((-((((arr_4 [i_0 + 1] [i_1 - 1]) >= (arr_4 [i_0 + 1] [i_1 - 2]))))));
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] = ((+(min((2127109923 & -120), (((54000 << (((arr_2 [i_0 + 1]) + 985352733)))))))));
            arr_12 [i_0] = (((((240 ? (-2147483647 - 1) : 8693565964740585061))) ? ((min(var_1, var_10))) : ((((1 ^ (arr_10 [i_0]))) | (55720271 | var_0)))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_21 = (max(var_21, (arr_9 [i_2 + 1] [i_0 + 1] [i_2 + 1])));
                var_22 = (min(var_22, ((((arr_14 [i_0 + 1] [i_2] [i_3]) ? var_1 : (arr_5 [i_2]))))));
                var_23 = (max(var_23, -var_14));
                var_24 = ((!(arr_5 [i_0])));
                var_25 = var_6;
            }
            for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_26 = (max(var_26, (((((max((((arr_9 [i_4] [i_2] [i_0]) / (arr_15 [i_0 + 1] [i_0 + 1] [i_4]))), (((var_12 ? -18879 : (arr_17 [i_4]))))))) ? ((~(max(2147483647, var_4)))) : ((~(-2147483647 - 1))))))));
                var_27 &= (1 * 7321771249780711962);
                arr_19 [i_0] [i_2 + 1] [i_2] = (((var_6 ? -55720272 : (arr_17 [i_0 + 1]))));
                var_28 &= ((var_9 / var_16) >> (-var_1 - 2449078503));
                arr_20 [i_0] [i_0] = ((((-24079 ? -31402 : -92))) + var_0);
            }
            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_24 [i_0 + 1] [i_0 + 1] [i_2] [i_5] &= ((((((arr_17 [i_0 + 1]) > var_11))) >> (((max(var_1, -6164)) - 4294961106))));
                arr_25 [i_0] [i_0] [i_0] [i_5] = ((((var_3 ? (arr_10 [i_0]) : (arr_18 [i_2 + 1] [i_2 + 1] [i_5 - 1]))) >> ((((arr_18 [i_2 + 1] [7] [i_2]) != var_10)))));
                var_29 ^= (min((arr_5 [i_2]), (arr_2 [i_5])));
            }
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_30 = (max(((min((arr_5 [i_0]), (arr_5 [i_0])))), var_3));
            arr_28 [i_0] [i_6] = (((((arr_4 [i_0 + 1] [i_6 - 1]) ? 21563 : (arr_4 [i_0 + 1] [i_0 + 1]))) / (arr_4 [i_0 + 1] [i_6 - 2])));

            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                var_31 &= (((arr_14 [i_0] [i_6] [i_7]) ? (((~-449156914139831763) ? 118 : (arr_5 [i_6]))) : (((var_11 >= ((min(-676901126, (arr_6 [i_0])))))))));
                var_32 = (max(var_32, (min(((-(arr_23 [i_6] [i_6] [22] [i_6 - 2]))), ((min(-31415, (arr_23 [i_6] [14] [i_0] [i_6 - 1]))))))));
                var_33 = (max(var_33, 31401));
                arr_33 [i_0] = -449156914139831763;
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                var_34 &= (115272330 - (((~(var_16 / var_15)))));
                var_35 &= ((((max(-8192, var_14))) ? (!var_4) : (!var_14)));
                arr_37 [i_0] [i_0] [i_0] = (~var_10);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_36 = (((min(-1, 3))) ? ((1240500876 ? (arr_36 [i_0 + 1] [i_0] [i_6 + 1]) : var_15)) : var_0);
                arr_40 [6] [i_0] [i_0] [i_0] = (min(((((((arr_16 [1] [i_6] [i_6] [i_9]) + var_16))) ? -1 : ((-1159198034 ? 2093793675 : var_3)))), var_4));
                var_37 ^= (max((((arr_36 [i_0 + 1] [i_6] [i_0 + 1]) << (((arr_36 [i_0 + 1] [i_6] [i_6]) - 13992974667343539434)))), (((((arr_17 [i_0 + 1]) ? -85 : (arr_13 [i_0] [i_6] [i_9])))))));
            }
        }
    }
    for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_38 *= ((max(var_12, (arr_39 [9] [i_10 + 1] [i_10 - 1] [i_10 + 3]))));
        arr_43 [i_10] [i_10] = (((((0 ? 7310 : -1))) ? ((((var_0 != (((arr_14 [i_10 + 1] [i_10] [i_10 + 3]) + var_3)))))) : (min((arr_15 [i_10] [i_10 + 3] [i_10]), var_15))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_39 = (3460677771792987484 / -134765888);
        var_40 = var_4;
        arr_46 [i_11 + 2] = ((((((var_15 + 2147483647) >> (((arr_21 [i_11] [i_11]) - 5258512052662364418))))) * 17953270488034292338));

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_51 [i_12] = (arr_18 [14] [i_12] [19]);
            var_41 = var_2;
            arr_52 [i_11 + 1] [i_11] = ((-1 / var_10) / (arr_15 [i_11 - 1] [i_11 + 2] [i_11 - 1]));
            arr_53 [i_11] [i_12] = ((1 ? (arr_23 [i_12] [i_11 - 1] [8] [i_11 + 2]) : (arr_23 [i_12] [i_11 + 3] [i_12] [i_12])));
        }
    }
    #pragma endscop
}
