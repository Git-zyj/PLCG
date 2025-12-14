/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-5713754031085254748 > ((min(var_0, (!var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 ^= (((arr_3 [i_1]) - ((var_4 ? 61 : var_7))));
            arr_4 [i_1] = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_2] [i_2] [i_2] = ((!(((~(arr_0 [i_1]))))));
                arr_10 [i_1] [i_1] [i_1] = ((~(arr_5 [i_0] [i_0] [i_1])));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_16 = (max(var_16, var_0));
                var_17 = (arr_11 [i_1] [i_3]);
                arr_13 [i_3] [i_3] [i_3] [i_3] = 255;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_18 += (36 ^ 0);
                var_19 = (arr_16 [i_1]);

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_20 [i_5] = (arr_2 [i_0] [i_0] [i_4]);
                    var_20 = (min(var_20, (((var_13 ^ (arr_11 [i_0] [i_4]))))));
                    arr_21 [i_5] [i_1] [i_4] [i_5] = ((-(-127 - 1)));
                    var_21 = (max(var_21, (~42371)));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_25 [i_0] [i_1] [i_4] [i_6] = var_3;
                    arr_26 [i_0] [i_0] = ((var_8 || (arr_0 [i_0])));
                    var_22 = (min(var_22, (((~(var_13 || var_7))))));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((var_5 ? var_7 : (arr_8 [i_0] [i_0] [i_4] [i_0])));
                }
                arr_28 [i_4] = (var_3 == var_5);
            }
            arr_29 [i_1] = var_0;
        }
        arr_30 [i_0] [i_0] = 16817;
        var_23 = (((var_12 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0] [i_0]))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_33 [i_7] [i_7] = (((-56 ^ 15031) % (((((arr_14 [i_7]) ? var_8 : -2560812651766886420)) + 4800497070258290635))));
        var_24 |= ((((((arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_32 [i_7]) : var_13)) | ((max((arr_1 [i_7] [i_7]), 255))))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_45 [i_7] [i_7] [i_9] [i_7] [i_7] = ((~(arr_22 [i_7] [i_7])));
                            arr_46 [i_8] [i_7] = ((1582683857533383472 ? 163 : 104));
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (((arr_35 [i_7]) < (((arr_37 [i_7]) ? 112 : var_12))));
                        }

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_25 = (!448);
                            var_26 = var_8;
                        }
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_52 [i_7] [i_7] [i_7] [i_13] [i_13] = ((!((min((((arr_49 [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_7] [i_9 + 1] [i_9 - 1]) ^ var_9)), var_2)))));
                            arr_53 [i_7] [i_8 - 2] [i_7] [i_10] = (min(18446744073709551602, -44531263270365339));
                            arr_54 [i_7] [i_7] [i_9 + 2] [i_7] [i_13] = ((!(((-102 ? -92 : (231 | 55))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_27 = (max(var_27, (arr_1 [i_8 + 1] [i_8 + 1])));
                            arr_58 [i_7] [i_8 - 2] [i_9] [i_10] [i_7] = ((-((64 ? 7312909625644977443 : 93))));
                            var_28 += 65089;
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_29 = (max(var_29, ((((max(((var_1 ? var_4 : (arr_7 [i_7] [i_8 - 2] [i_9 - 1]))), 192)) << ((((((max((arr_0 [i_7]), var_12))) ? (arr_5 [i_7] [i_7] [i_7]) : 44500)) - 43956)))))));
                            arr_61 [i_7] [i_7] [i_7] [i_7] [i_7] = ((max(12325034667072230793, 56008)));
                            arr_62 [i_7] [i_7] [i_8] [i_9 - 3] [i_10] [i_7] = (((((~-2560812651766886420) ? (((arr_36 [i_7] [i_7]) & -10)) : (((min(38, 200)))))) >= ((((!(-127 - 1)))))));
                        }
                        arr_63 [i_7] [i_10] = (((arr_1 [i_8 + 1] [i_8]) ? ((-(arr_49 [i_8 - 1] [i_8] [i_8 - 1] [i_7] [i_8 - 2] [i_10]))) : (((min(var_13, (arr_1 [i_8 - 2] [i_8 - 1])))))));
                    }
                }
            }
        }
        var_30 ^= (min(((~(arr_11 [i_7] [i_7]))), (((var_10 == ((min((arr_5 [i_7] [i_7] [i_7]), (arr_2 [i_7] [i_7] [i_7])))))))));
        var_31 = ((((min(13, 0))) ? var_2 : ((((arr_5 [i_7] [i_7] [i_7]) && 19)))));
    }
    var_32 = ((max((max(var_11, var_0)), -var_0)));

    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        arr_68 [i_16] [i_16] = ((-((var_9 ? var_6 : var_13))));
        var_33 = var_2;
        var_34 *= ((((min(var_8, (!var_10)))) && ((((arr_65 [i_16]) % var_8)))));
    }
    #pragma endscop
}
