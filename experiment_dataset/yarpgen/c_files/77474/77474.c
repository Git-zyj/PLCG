/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(var_11, (((var_8 ? var_3 : 2097148)))));
        var_12 = 20207;

        for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_13 = (min(var_13, (((((~(arr_1 [i_0]))) | 5)))));
            arr_5 [i_0] [1] [i_1] = var_6;

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_14 = (max(var_14, ((((((((arr_4 [i_0]) + 9223372036854775807)) >> (var_8 - 60442))) <= (((-11 ? var_5 : var_8))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (~var_1);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_15 |= ((-5 ? 65535 : (((~(arr_12 [i_0]))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_16 -= var_0;
                        var_17 |= (((arr_12 [i_2 + 1]) == (arr_12 [i_2 + 1])));
                        var_18 = (arr_7 [i_0] [i_1 + 2] [i_4] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_19 = var_5;
                        var_20 = ((-0 - (arr_7 [i_4] [i_2 + 1] [i_2 + 1] [i_1 - 4])));
                        var_21 ^= (~65535);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_4] = (((arr_9 [17] [i_1] [i_1 - 4] [i_1]) + ((var_3 ? (arr_11 [i_0]) : (arr_16 [i_1 - 2] [i_1 - 3] [i_2])))));
                        arr_24 [i_0] [i_1] [i_4] [i_0] [i_7] = (arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [0]);
                    }
                    var_22 |= (((((612968764 ? (arr_21 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_2]) : (arr_1 [i_0])))) ? var_9 : var_3));
                    var_23 = (arr_7 [i_1 + 1] [i_2] [i_2] [i_2 + 1]);

                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [18] [i_4] [i_2] [i_2 + 1] [i_2] = (((arr_2 [i_1 - 4]) | 3681998532));
                        arr_28 [i_4] [9] [i_4] [11] [i_4] [i_4] [i_4] = ((~(arr_13 [i_0] [i_1] [i_4] [i_8 - 2])));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_31 [i_1] [i_4] [i_9] = ((-13 ? 5 : 3181634111));
                        var_24 -= ((9166438485626841712 ? 5 : -1183968108));
                    }
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    var_25 ^= (((65518 >> (83 - 58))));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_2] [i_10] [2] [i_0] [i_0] |= 15;
                        var_26 ^= (((arr_21 [i_0] [i_10] [i_2] [i_1 - 2] [i_0]) != (((arr_19 [i_11] [i_10] [i_2] [7] [i_0]) ? var_2 : var_2))));
                        var_27 = (min(var_27, (((!(arr_8 [i_10 - 2] [i_10 - 1] [i_2 + 1] [i_1 - 3]))))));
                    }
                }
                arr_39 [i_0] [i_1] [i_2 + 1] = var_6;
            }
        }
        for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_28 = (((arr_6 [i_0] [i_12 + 1] [i_12 - 3] [i_12 + 2]) ? (arr_25 [i_0] [i_0] [i_0] [12] [i_12]) : (~var_0)));
            var_29 = (max(var_29, (arr_42 [i_12] [i_0] [i_0])));
            var_30 = (-11 % 366895221);

            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_51 [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_12 [i_0]);
                        arr_52 [i_13] [i_12] [i_12] [i_12] [i_12] = (1048560 | 22);
                        arr_53 [i_15] [i_15] [i_14 + 1] [i_15] [i_13] = ((var_9 ? (arr_9 [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 1]) : (arr_46 [i_14] [i_14] [i_14] [i_14] [i_13])));
                    }
                    var_31 ^= (var_5 <= -256);
                }
                var_32 = (max(var_32, var_7));

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    arr_57 [i_0] [i_12 - 4] [i_12 - 4] [i_12 - 4] [i_13] = (arr_16 [i_0] [i_12 - 2] [0]);
                    var_33 = (((arr_48 [10] [11] [i_16]) ? (((arr_1 [i_0]) ? (arr_19 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 2]) : var_2)) : (arr_17 [i_16] [i_12] [i_12] [i_0])));
                }
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        var_34 = (var_1 % var_8);
                        arr_64 [i_0] [i_0] [i_12 - 4] [i_13] [i_17] [i_13] = (((1048575 >> 5) + (arr_37 [i_0] [i_12 + 2] [i_12 + 2] [i_17] [i_18] [i_17] [5])));
                    }
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        var_35 ^= (((arr_18 [i_12 + 2] [i_12 - 3] [i_12 - 3] [i_12 - 2] [i_12 - 4]) ? (!242) : var_4));
                        var_36 = (arr_47 [14] [i_12] [14] [i_0]);
                    }
                    arr_67 [i_0] [i_13] [i_13] [i_0] = (arr_44 [i_12] [i_13] [i_17]);
                }
            }
        }
    }
    var_37 = (min(var_37, var_9));
    #pragma endscop
}
