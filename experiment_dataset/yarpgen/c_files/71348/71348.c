/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = var_7;
            var_19 = 3189697182;
        }
        var_20 = (max(var_20, (arr_2 [i_0] [i_0])));
        var_21 = (min(var_21, var_5));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = -29263;
        arr_8 [i_2] = var_16;
        var_23 = (((1951371685 + var_8) * var_6));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((-((29263 ? 62298 : (arr_6 [i_3] [i_3 + 1])))));
        var_24 = (max(var_24, (((arr_3 [i_3 + 1]) ? 1140138959 : 0))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_25 = (max(var_25, (1951371685 / 29263)));
        var_26 = (((-4738646113623689128 + 9223372036854775807) << 0));
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [0] &= ((-((((max((arr_17 [0]), var_2))) ? (var_11 / var_14) : -var_7))));
        arr_19 [i_5] = arr_17 [i_5];
        arr_20 [i_5] = (arr_17 [i_5]);
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        var_27 = ((((max((min((arr_0 [i_6]), (arr_22 [i_6] [i_6]))), (arr_1 [i_6] [i_6 - 1])))) ? (((((min(36272, var_3))) && (arr_6 [i_6] [i_6])))) : (arr_9 [i_6] [i_6])));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_28 *= (((((((0 ? 26018 : (-9223372036854775807 - 1)))) ? ((24 ? var_17 : var_14)) : (((-24 + 2147483647) >> (2411 - 2384))))) < -22862));
            arr_26 [i_6] [i_6] [i_6] = var_8;
            arr_27 [i_6] = ((-(((arr_2 [i_6 - 3] [i_6 - 1]) + (arr_2 [i_6 - 3] [i_6])))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_31 [i_8] = -5036495982432962557;
        arr_32 [i_8] = ((-((-(-32767 - 1)))));
        var_29 = ((!(arr_16 [i_8])));
    }

    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_35 [i_9] = ((((var_17 << (((arr_15 [i_9] [i_9]) - 544313742)))) + (-2147483647 - 1)));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_30 *= ((-(arr_30 [i_10] [i_10])));
            arr_38 [i_9] [i_9] [8] &= (((((var_4 << (((arr_13 [i_10]) + 20436))))) ? ((var_12 ? 4294967295 : 29264)) : ((var_6 ? 2597185347 : var_11))));
            var_31 = (((arr_30 [i_9] [i_10]) >> (((arr_13 [i_10]) + 20432))));
            arr_39 [i_9] = ((-(arr_28 [i_9] [i_9])));
        }
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_32 = (max(var_32, (((((arr_30 [i_11 - 2] [i_11 - 2]) << (((arr_30 [i_11 + 1] [i_11 - 1]) - 3248108492)))) * (((((arr_28 [i_11 - 2] [i_11]) > (arr_30 [i_11 - 2] [i_11 - 1])))))))));
            var_33 = -1469385445;
            var_34 = (((max(((max(var_13, (arr_43 [i_9] [4])))), ((-(arr_28 [i_9] [i_11]))))) << (((-0 < ((var_15 ? var_4 : var_4)))))));
        }

        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_35 = (arr_30 [i_9] [i_12]);
            var_36 = (max(var_36, var_15));
            arr_47 [i_9] [i_9] [i_9] = (((612082579 << (var_3 - 3101281340))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_37 = (max(var_37, ((((var_7 ? (arr_36 [i_9] [i_12] [10]) : (arr_40 [i_13]))) / ((((arr_28 [i_9] [i_12]) ? var_1 : var_1)))))));
                var_38 = (((((var_12 ? 24168 : 32736))) ? ((4221999120115332097 ? 2754926426 : (arr_45 [i_9] [i_12] [i_12]))) : -var_2));
                arr_50 [4] &= (((((arr_41 [i_9] [i_9]) ? 3404452209 : var_16)) ^ ((var_15 ? (-32767 - 1) : 3770576985))));
                arr_51 [i_9] [i_9] [i_9] [i_9] = ((-(arr_45 [i_9] [i_9] [9])));
                var_39 = var_9;
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_40 = (max(var_40, var_5));
        var_41 = (max(var_41, (arr_16 [i_14])));
        arr_54 [i_14] = ((-((max((arr_44 [i_14] [i_14]), (arr_44 [i_14] [i_14]))))));
        var_42 = ((890515086 >> (-5734388050506783058 + 5734388050506783073)));
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        arr_58 [i_15] [i_15] = ((var_0 ? ((890515087 ? -25538 : -7220594953768254962)) : ((max((~var_15), ((1 ? 90 : 890515087)))))));
        var_43 = (max(var_43, ((max((((28670 ? 46750 : 16384))), (arr_14 [i_15]))))));
        var_44 *= var_10;
        var_45 *= (var_14 ? var_8 : ((-261632 ? (max(2634593274, 4082756832)) : (((max(var_6, var_2)))))));
        arr_59 [i_15] = var_6;
    }
    #pragma endscop
}
