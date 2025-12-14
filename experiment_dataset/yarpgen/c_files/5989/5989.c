/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (max((((((-7962 ? 4294967295 : -13)) <= (((((arr_1 [i_0 - 1]) && (arr_0 [i_0 + 2] [i_0])))))))), ((((max((arr_1 [i_0]), var_5))) ? (!60) : (arr_1 [5])))));
        var_16 = var_10;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_17 = var_2;
        var_18 = 1049317680091037494;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_13 [i_3] = ((!(arr_8 [i_3])));
                arr_14 [i_2] [i_3] [0] [0] = -var_11;
                var_19 = ((-14738 >= 1056424868) == (((arr_10 [i_2] [i_2] [i_4]) * 16801)));
            }
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                var_20 = var_4;
                arr_17 [i_3] [3] [i_3] = 52;
                var_21 = -66;
                var_22 = var_8;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = var_1;
                arr_20 [i_3] [i_3] [i_6] [i_6] = 1;
                var_24 = 17820;
            }
            var_25 = 121;
        }
        var_26 = (max(((max(((127 ? 75 : 172)), -1782760416))), (max(804691450, 6646636261185989234))));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        var_27 = ((~((171 ? 172 : (arr_5 [i_7 + 1] [i_7 + 1])))));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_8] = (min((((((arr_8 [i_8]) ? 58680 : (arr_1 [i_8]))) & 0)), var_2));
            var_28 = (0 / 673272432);

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_29 = ((-1568830535 ? -1 : 977));
                var_30 = (((min((((-1530283864 ^ (arr_12 [1] [3] [i_9])))), 3410533343)) - var_6));
                arr_31 [i_7] [i_7] [i_8] [i_8] = var_7;
                var_31 = ((~((((arr_10 [i_7 + 1] [i_9] [10]) == (arr_10 [i_7 + 1] [i_9] [0]))))));
                arr_32 [i_8] [i_7] = var_0;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_32 = (arr_24 [i_7] [i_8] [1]);
                var_33 = ((min(var_11, 1)));
            }
            for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
            {
                var_34 |= (min(0, (min((arr_26 [i_7 + 1] [i_8]), (((1 - (arr_0 [9] [i_8]))))))));
                var_35 = (~254);

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_36 = var_11;
                    var_37 = (min(var_37, (arr_39 [10] [i_8] [i_8] [i_11] [i_11] [i_12])));
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_43 [i_13] [i_11 - 3] [i_7] [i_7] = ((var_7 ^ ((((arr_30 [i_7 + 1] [8] [i_11 + 1]) ? 1 : (arr_30 [i_7 + 1] [i_7 + 1] [i_11 - 2]))))));
                    arr_44 [5] [i_8] [i_11 + 1] [7] = ((8015308695102277850 / ((-9 ? ((-101 ? -84 : -1422113546598566808)) : (((38605 ? 3821832431 : -98300890)))))));
                    var_38 = (((((~(var_12 <= var_13)))) || (((-1804130526 ? ((-5966350972797895925 ? var_3 : -106)) : 1)))));
                }
            }
            for (int i_14 = 3; i_14 < 10;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 7;i_16 += 1)
                    {
                        {
                            var_39 = (max((min(84, (arr_46 [i_16 + 1] [i_15] [i_7 + 1] [i_7]))), (arr_46 [i_16 + 2] [i_7] [i_7 + 1] [i_7])));
                            var_40 |= (((~120) % (arr_38 [i_14] [i_8] [i_14 - 2] [i_15])));
                            var_41 = (min((((!(arr_48 [i_7 + 1] [i_15])))), (min(-18014, (arr_46 [i_7 + 1] [i_14 + 1] [i_16 + 2] [i_16 + 4])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_42 = 255;
                            arr_58 [5] [i_8] [i_17] [i_8] [10] [i_8] = (arr_9 [i_7] [i_7] [i_17 + 2]);
                        }
                    }
                }
                var_43 = (1 > 14);
                var_44 = (-1726753449 && (((arr_16 [0] [i_14 - 3] [i_7 + 1] [i_7 + 1]) && (arr_16 [i_7 + 1] [i_14 - 1] [i_7 + 1] [i_7 + 1]))));
            }
            var_45 = (min(((((min(var_3, var_6))) ? 28881 : ((1666045772 ? var_10 : 141)))), 0));
        }
    }
    var_46 *= 12;
    var_47 = (max(var_10, (max(var_7, var_10))));
    #pragma endscop
}
