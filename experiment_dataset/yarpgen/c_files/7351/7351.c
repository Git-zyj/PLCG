/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((var_10 ? (((var_7 << (var_16 + 2626510472556573908)))) : -var_6)));
    var_18 ^= -2147483645;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = ((var_9 & (arr_0 [i_0] [i_0 + 2])));
        arr_2 [i_0] [i_0 - 1] = 1;
        var_20 *= 2147483645;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 = (max(var_21, -2147483635));
            var_22 = (min(var_22, (((!(arr_1 [i_1 + 1] [i_1 - 2]))))));
            var_23 ^= (arr_3 [i_1]);
            var_24 *= (((!-1) ? var_2 : (arr_0 [9] [i_2])));
        }
        var_25 = var_13;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_26 = (min(var_26, var_15));
        var_27 = (!var_6);

        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_28 = (max(var_28, (((188 && (arr_3 [i_3]))))));
            arr_14 [i_4] = (arr_12 [i_4]);
            var_29 = (arr_11 [i_3] [i_3]);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_30 *= (((((1 ? (~var_15) : 255))) & var_3));
            var_31 = arr_8 [i_3] [i_5];
            arr_17 [i_3] [i_5] = (arr_11 [16] [i_5]);

            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_32 *= (((-2147483624 || var_8) ? (arr_16 [i_3] [i_3]) : (arr_18 [i_3] [i_3] [14] [i_3])));
                arr_20 [i_6] [i_5] [i_6] [i_6] = (((-1242140905 > 5171) ? (arr_3 [i_6]) : 1701));
                var_33 &= (((var_11 < var_3) ^ var_0));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_34 = (max(var_34, ((((((((var_6 > (arr_0 [i_7] [i_5]))) ? ((((arr_22 [i_3] [i_5] [i_5] [i_7]) <= 2508))) : (!6483323515669409150)))) < ((var_3 ? (((arr_13 [i_5] [i_3]) ? var_16 : var_0)) : var_3)))))));
                var_35 = (arr_4 [i_7]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_18 [i_3] [i_5] [i_7] [i_8]);
                        arr_30 [i_3] [i_5] [i_7] [i_8] [i_9] = (((arr_24 [6] [i_5] [i_5] [i_5] [i_5] [i_5]) & 2147483635));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_36 = (max(var_36, 5171));
                        var_37 = (((12 ^ 1705) ? (((arr_18 [11] [i_8] [i_7] [i_3]) ? (arr_12 [i_8]) : -6861043280665275479)) : ((((arr_25 [i_10] [1] [i_7] [i_7] [i_3] [i_3]) ? 1061767594 : (arr_9 [i_7]))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_38 |= (arr_28 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                        arr_35 [i_3] [i_5] [i_7] [i_8] [i_11] = var_13;
                    }
                    var_39 = (max(var_39, ((((arr_27 [i_3] [i_5] [i_7] [i_7] [11]) ? (arr_1 [i_5] [16]) : var_5)))));
                    var_40 = (arr_18 [4] [i_5] [i_7] [4]);
                    var_41 = (max(var_41, (((!(((var_1 ? (arr_23 [12] [i_5] [i_7] [i_5]) : (arr_31 [i_8] [i_8] [i_7] [i_5] [i_5] [i_3] [i_3])))))))));
                    var_42 = var_16;
                }
                var_43 = ((!(arr_28 [i_7] [i_5] [i_5] [i_3] [i_3] [i_3] [i_3])));
                var_44 = ((((arr_24 [i_3] [i_3] [i_7] [i_3] [i_7] [2]) < -2147483636)) ? (arr_22 [i_7] [i_3] [i_3] [i_3]) : (arr_18 [i_3] [i_3] [i_5] [12]));
            }
        }
        arr_36 [6] = var_0;
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_45 = (max(var_45, ((((((!(((527473861 ? var_3 : (arr_6 [i_12]))))))) % (((arr_7 [i_12] [18]) ? (arr_7 [i_12] [i_12]) : (arr_7 [i_12] [i_12]))))))));

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_43 [i_13] = (arr_6 [i_12]);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_50 [i_14] [i_14] [i_14] [i_14] [i_13] = (9857 - 6861043280665275479);
                        var_46 -= (((arr_47 [i_15]) == (((arr_47 [i_15]) ? (arr_47 [i_15]) : (arr_0 [i_12] [i_13])))));
                        arr_51 [i_15] [i_13] [i_13] [i_12] = ((!(((~(~var_3))))));
                    }
                }
            }
            arr_52 [i_12] [i_13] [i_12] = (((!var_1) <= (((arr_3 [i_13]) ? (arr_3 [i_12]) : (arr_3 [i_13])))));
            var_47 |= var_7;
        }
        for (int i_16 = 3; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_48 = (min(var_48, (((!((((arr_46 [i_12] [i_16 - 1] [i_12]) & (arr_39 [i_16 - 2])))))))));
            arr_55 [i_12] [i_12] [i_12] = (((((((-2147483635 ? (arr_42 [i_12] [i_16] [i_16 + 1]) : var_8))) ? (((arr_46 [i_12] [i_16 + 1] [i_16 + 1]) ? (arr_7 [i_12] [i_12]) : (arr_0 [i_12] [i_16]))) : (1 & 49))) < (arr_54 [i_16] [i_16] [i_12])));
            arr_56 [i_12] = (arr_6 [i_16]);
            arr_57 [i_12] [i_12] = var_4;
        }
        for (int i_17 = 3; i_17 < 18;i_17 += 1) /* same iter space */
        {
            arr_60 [i_17] [i_12] [2] = var_11;
            var_49 = 198;
            arr_61 [i_12] [i_17] [i_17] = var_6;
            var_50 = (max(var_50, (arr_39 [i_12])));
        }
    }
    var_51 *= ((((((var_5 ? var_15 : var_2))) ? (((-2147483635 ? var_1 : var_0))) : var_14)));

    /* vectorizable */
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_52 = (((arr_18 [i_18] [i_18] [i_18] [i_18]) ? (arr_18 [i_18] [i_18] [i_18] [i_18]) : 3010543155));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 9;i_21 += 1)
                {
                    {
                        var_53 = (max(var_53, ((!(arr_39 [i_21 + 3])))));
                        var_54 *= 7936;
                        arr_73 [i_18] [i_18] [i_18] [i_18] [10] = var_9;
                        arr_74 [i_18] [i_18] [i_18] [i_18] = var_0;
                        arr_75 [i_18] [i_19] [i_20] [i_21 + 3] = (((arr_7 [i_18] [i_19]) ? (!var_10) : -var_5));
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 17;i_22 += 1)
    {
        var_55 = (max(var_55, (arr_58 [i_22] [i_22] [i_22])));
        var_56 |= 32050;
    }
    #pragma endscop
}
