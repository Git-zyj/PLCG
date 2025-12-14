/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_0 [i_0 + 1])));
        arr_2 [16] = (arr_0 [i_0 + 1]);
        arr_3 [i_0] &= (((arr_0 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0 - 2])));
        var_15 = (~var_1);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 3] = -0;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 += (var_4 || var_3);

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_17 = ((+(max(var_3, (((arr_8 [3]) / -1))))));
                var_18 &= -1847627221;
                var_19 += (((((arr_4 [i_1 - 2] [i_2]) && var_10)) ? ((((((1 ? -7396188190645431697 : 65)) > (~-1633892318))))) : var_12));
                var_20 = var_10;
                arr_13 [i_1] [i_2] [1] [i_3] = ((~(((((var_2 ? var_7 : var_5))) ? var_9 : ((var_1 * (arr_9 [i_1] [i_2] [i_3])))))));
            }
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                arr_16 [4] [2] = (((-(((2627706949 < (arr_15 [1] [i_2] [i_4] [12])))))));
                var_21 ^= (((((var_3 ? var_3 : (arr_5 [i_2] [i_4]))))) | ((+(max((arr_1 [i_1]), (arr_15 [i_1] [7] [10] [i_1 + 1]))))));
                arr_17 [i_1] [i_2] [i_4 - 1] [i_2] = (max(65535, 65));

                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_22 = (max(var_22, ((((arr_19 [i_2]) ? (1 < 7396188190645431708) : ((((arr_4 [i_1 + 1] [i_4 - 1]) > (arr_19 [i_2])))))))));
                    arr_20 [i_1] [i_2] [i_5] [i_5] = ((2047 ? 1 : 1));
                    var_23 = (max(var_23, ((min((max(535822336, 58191)), 1)))));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_24 -= ((((((arr_10 [i_6 - 3] [i_6 - 2]) ? (((7354 == (arr_1 [18])))) : (7396188190645431697 > 65535)))) ? (((-(0 / 21859)))) : ((((arr_15 [i_6 - 3] [i_6] [i_6] [i_6]) ? (arr_1 [2]) : (arr_15 [i_6] [i_6] [14] [i_6]))))));
        var_25 &= (arr_9 [1] [i_6 + 3] [10]);
        var_26 ^= -var_5;
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_27 &= ((((arr_11 [i_7 + 2] [i_8]) ? (arr_22 [i_7 - 3]) : var_7)));
            var_28 = ((((((!(arr_21 [i_8 + 2]))))) > (min((arr_10 [i_8 + 1] [i_8 + 3]), 0))));
            var_29 = (max(var_29, var_12));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_30 = (arr_25 [1]);
            arr_34 [i_7] = (((((189 >= var_1) > (arr_25 [i_7 - 1]))) ? 1667260347 : (arr_26 [i_7])));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                {
                    arr_40 [i_7] [i_10] [i_11 - 1] [i_10] = var_2;
                    var_31 += ((!(arr_26 [1])));
                }
            }
        }
        var_32 ^= 28646;
        arr_41 [i_7] = var_9;
    }
    var_33 = var_9;
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 8;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 7;i_14 += 1)
            {
                {
                    var_34 = (((((var_11 < 1667260348) == var_10)) ? (arr_18 [14] [i_14] [i_12 + 3] [i_12]) : (arr_22 [i_12 - 1])));
                    var_35 = (max(var_35, (!1)));
                    arr_51 [3] [i_14] [i_14] = (!((min((arr_38 [i_12 + 2] [i_12 + 1] [i_14 + 4]), (arr_36 [i_12 - 1] [i_12 - 1] [i_14 + 4])))));

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_36 = (max(var_36, ((((((arr_12 [i_14 - 3] [i_12 + 2] [14]) && (arr_50 [i_12 + 3] [i_14 - 2]))) ? (!var_5) : ((((arr_12 [i_14 - 1] [i_12 + 3] [i_14]) && (arr_50 [i_12 - 1] [i_14 + 3])))))))));
                        var_37 ^= (((((((arr_1 [i_14 + 4]) > (arr_1 [i_12 - 1]))))) >= ((246 - (arr_1 [i_14 + 3])))));
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        arr_56 [2] [i_16] [i_14 + 3] [i_16] &= ((((((((arr_45 [8] [i_16] [i_14]) || var_0))) > var_9)) ? (!28738) : ((var_2 | (min(0, 1667260351))))));

                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 8;i_17 += 1)
                        {
                            var_38 ^= arr_44 [5];
                            arr_61 [i_14] = (-2047414149759999877 % 1753128712);
                            var_39 = var_2;
                            arr_62 [i_12] [i_14] = (arr_43 [i_17 + 1]);
                        }
                        var_40 += (max(2627706976, var_12));
                    }
                    var_41 = ((var_6 ? (1 < 1) : ((var_4 | (arr_12 [i_13] [i_14 + 4] [i_14])))));
                }
            }
        }
    }
    #pragma endscop
}
