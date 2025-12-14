/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 8064;
    var_20 = (max(var_20, ((max(((((var_16 ? var_7 : 39736)))), var_17)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((arr_0 [i_0]) ? (min(4294967272, (arr_0 [i_0]))) : ((((var_11 > (arr_0 [i_0]))))))) + (((((min(var_18, var_3)) > (arr_1 [i_0]))))))))));
        arr_2 [i_0] = ((-(min(((-(arr_0 [i_0]))), ((~(arr_1 [i_0])))))));
        var_22 = (~var_0);
        var_23 = (min(var_23, ((((((((arr_0 [i_0]) ? var_1 : var_6))) ? -25799 : var_2))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_1] = 39747;
            var_24 = ((var_7 ? 3 : var_3));

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_25 = ((((((arr_8 [i_1] [i_1] [i_2] [i_1]) + -var_9))) ? ((var_0 ? -25800 : (arr_6 [17] [i_3 + 1] [i_3 + 1]))) : ((((!(~var_12)))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_26 = var_6;
                            var_27 = ((((((!(arr_3 [i_1])))) % -var_16)));
                            var_28 = (((((var_2 ? (arr_12 [i_1] [i_1]) : ((min(var_6, var_15)))))) ? ((-var_17 ? (~144) : (((arr_15 [i_5] [i_4] [i_3] [i_2]) % 17662)))) : (((!229225080) << (((arr_10 [i_2]) - 57042))))));
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                var_29 = var_17;
                arr_21 [i_1] [i_2] [i_6] = ((min(((-(arr_18 [i_2] [i_2] [i_2]))), (arr_18 [i_6] [i_6] [i_6 + 1]))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    arr_28 [i_7] = ((-((-(arr_17 [i_1] [i_1] [i_1])))));
                    var_30 = (((arr_17 [i_8 - 2] [i_8 - 1] [i_8]) ^ var_3));
                    arr_29 [i_1] [14] [i_1] [14] = ((-(arr_19 [i_1] [i_2])));
                    arr_30 [i_1] [i_1] [i_1] [i_1] = (((arr_15 [i_8 - 1] [i_8] [i_8 - 3] [3]) * (((arr_8 [i_8 - 3] [i_7] [i_1] [i_1]) ? 0 : (arr_22 [i_8] [i_7] [i_1] [i_1])))));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_34 [i_1] [i_2] [i_2] [13] = (((arr_31 [12] [i_7] [i_2] [i_2] [i_1]) ? (arr_14 [i_9] [i_9] [1] [i_9] [i_9] [i_9] [i_9]) : 4294967287));
                    var_31 = (((arr_13 [11] [i_2] [11] [i_2] [11] [i_2]) != (((arr_23 [i_1]) - var_2))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_32 = (arr_16 [i_10]);
                    arr_38 [5] [5] [5] [5] = 65524;
                }

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_33 *= ((!(arr_23 [i_11])));
                        var_34 = (min(var_34, (((((var_12 ? (arr_37 [i_1] [i_1] [i_2] [i_2] [i_11] [i_11]) : (arr_11 [i_2] [i_2] [i_2] [i_11] [i_12]))) < var_17)))));
                        arr_44 [i_1] [i_2] [i_1] [i_1] [i_12] [i_1] = ((~(arr_27 [i_11] [i_1] [i_2] [i_1])));
                    }
                    arr_45 [i_1] [i_1] [i_1] [i_11] = ((-(arr_6 [i_1] [i_2] [i_7])));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 = ((var_15 ? ((~(arr_4 [i_1] [i_1]))) : 3411));
                        var_36 = var_9;
                        var_37 = var_13;
                    }
                    for (int i_14 = 4; i_14 < 19;i_14 += 1)
                    {
                        var_38 *= (((arr_26 [i_1] [i_2] [i_7] [i_14 - 2] [i_7]) <= -17664));
                        var_39 = (~var_1);
                    }
                    arr_51 [i_1] [i_1] [i_1] [i_2] [i_7] [i_11] = ((-1 ? var_11 : ((-(arr_35 [i_11] [i_7] [i_2] [i_1])))));
                    var_40 = (~-1729804285);
                }
            }
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            var_41 = (arr_13 [i_1] [14] [i_15] [i_1] [i_1] [i_1]);

            for (int i_16 = 3; i_16 < 17;i_16 += 1)
            {
                var_42 = (max(var_42, 2147483647));
                var_43 = (max(var_43, 177));
                var_44 += var_5;
                arr_58 [i_16] [i_1] &= (max(1304941027, (-1180437565 / -2147483645)));
                var_45 = ((var_1 % ((max((65532 == var_7), var_9)))));
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    {
                        var_46 = ((((4294967278 ? 172 : 28))) != (65246 % 1409439609335792785));
                        var_47 = ((11 ? 26 : 2147483618));
                        var_48 = 20;
                    }
                }
            }
            var_49 = (max(var_49, ((min(((~((var_9 ? 10382574491087690749 : (arr_43 [i_15] [1] [i_15] [i_1] [1] [i_1]))))), (arr_19 [i_15] [i_1]))))));
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
        {
            var_50 = (arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            var_51 = -var_8;
            arr_67 [i_1] [i_1] [i_1] = (-(((arr_55 [i_1]) ? var_17 : (arr_57 [i_1] [i_19]))));
            var_52 += ((((((arr_63 [i_19] [i_19] [i_19] [i_19] [i_19]) && var_5))) ^ var_16));
        }
        arr_68 [i_1] = 32679;
    }
    for (int i_20 = 1; i_20 < 13;i_20 += 1)
    {
        var_53 = (234 && 62);
        arr_72 [i_20] = -3217;
        var_54 = (((~var_17) >> ((((min((arr_0 [i_20 + 2]), (arr_0 [i_20 + 2])))) - 4911))));
    }
    #pragma endscop
}
