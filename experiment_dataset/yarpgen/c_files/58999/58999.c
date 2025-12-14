/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (-var_5 & 0);
                arr_8 [i_0] [i_0] [i_0] = ((-1734557953 == 13422) ? (((((1734557952 ? var_9 : 13424)) * 41104))) : (min((arr_2 [i_0]), var_9)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_18 [i_2] [i_3] [i_2] = min(((var_3 ? (arr_11 [i_3 - 2] [1]) : (arr_10 [i_3 - 2] [i_3 - 2]))), (((-((max((arr_14 [3] [i_2] [i_4]), var_1)))))));
                arr_19 [i_2] = ((((((1818503078 ? var_0 : 1)))) || ((((((var_3 << (((arr_11 [i_3] [i_2]) - 1378076953))))) * (((arr_9 [i_2]) ? var_5 : var_2)))))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_10 = ((-(((!(-1734557944 & var_3))))));
                    arr_24 [i_2] [2] [1] [14] |= (-(((((arr_21 [i_2] [6] [i_5] [1] [i_5] [6]) << (((arr_10 [i_4] [i_3]) - 79)))) ^ var_9)));
                    arr_25 [i_2] [i_2] [i_2] [12] [i_2] = (max((max((arr_21 [i_5] [11] [i_5] [i_5] [i_4] [i_4]), (13422 ^ var_5))), (((2643131906864611607 - (arr_17 [i_3 + 1] [i_3] [i_3 - 2]))))));
                    arr_26 [i_5] [10] [1] [i_3 + 1] [0] &= ((((((arr_15 [i_3 + 1] [i_3] [i_3 + 1] [i_5]) & (arr_13 [i_3 - 1] [i_3 + 1] [4])))) ? ((4389559758322900879 >> (((arr_15 [i_3 + 1] [i_3 + 1] [i_5] [i_3 + 1]) - 801410514)))) : ((((arr_15 [i_3 - 2] [i_4] [i_4] [i_4]) ? var_9 : (arr_15 [i_3 + 1] [18] [13] [i_5]))))));
                    arr_27 [2] [14] [14] [i_5] &= -var_9;
                }
                var_11 = (min(var_11, ((max((arr_13 [i_2] [18] [0]), (((((arr_14 [i_4] [24] [i_2]) - var_5)) / (24431 >= -1))))))));
            }
            arr_28 [i_2] = (max((((arr_9 [i_2]) * var_7)), (arr_12 [6] [12])));
            var_12 = (((((((11600265696006096423 != (arr_16 [i_2] [i_3 - 1] [i_2] [i_2]))) ? ((-1734557945 ? 41104 : 511)) : 1734557952))) ? ((((max(0, -3340444402081998379))) ? (arr_11 [i_3] [i_3 - 1]) : (min(24432, 0)))) : 3818604758));
        }
        arr_29 [i_2] = (max(41103, 0));
        var_13 = 166;
        var_14 = var_0;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_32 [i_6] [i_6] = ((((arr_31 [i_6]) % -1994007264)));
        var_15 = ((!(((var_6 ? 6412 : (arr_12 [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_16 = (((!-2643131906864611600) > 1));
        var_17 = (arr_23 [24] [i_7] [24]);
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_18 = ((!(arr_31 [i_8])));
        var_19 = (min(var_19, (((+((4294967295 ? (arr_17 [i_8] [i_8] [i_8]) : (arr_15 [i_8] [i_8] [i_8] [i_8]))))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                var_20 = (-(!-6413));

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_46 [i_9] [6] [1] &= ((!((min(13481622766441476044, 4965121307268075571)))));

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        var_21 = (~-32766);
                        var_22 = 182371186;
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_23 = var_2;
                        var_24 = (max(var_24, 1096));
                        arr_51 [i_9] [i_9] [i_9] [i_10] [i_10] [i_11] = (((arr_39 [i_9]) / ((-(arr_11 [i_9] [i_13])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        var_25 = (((var_9 && -6425) && (((1478032329 ? var_7 : 1361847929)))));

                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            var_26 = ((-(arr_53 [i_9] [i_15 - 1] [i_9] [i_15 - 1] [i_15] [i_15 - 1])));
                            var_27 = (var_0 / var_4);
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                {
                    var_28 = -1361847930;
                    var_29 = (min(var_29, var_9));
                    var_30 = -var_3;
                    var_31 |= (var_5 * 1361847929);
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    var_32 ^= var_6;
                    arr_62 [i_9] [i_9] [i_10] [14] |= ((650058392 == (arr_48 [i_9] [i_10] [14] [i_9] [20])));
                }
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    arr_66 [i_9] [i_9] [i_10] [i_18 - 1] = ((min((((-6978 ? -32383 : (arr_15 [1] [i_10] [i_18] [i_10])))), ((476362538 ? var_8 : var_4)))));
                    arr_67 [i_9] = (1 ? 13443 : 6983);
                }
                var_33 = 253;
            }
        }
    }
    #pragma endscop
}
