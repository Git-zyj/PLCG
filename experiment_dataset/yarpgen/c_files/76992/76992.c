/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0] [i_0]) == ((((min(var_10, 1)))))));
        var_19 *= (!56489);
        arr_2 [i_0] = var_16;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_1] = var_17;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_20 = min(var_6, (min(1, ((var_3 ? 1 : 17171741441604975297)))));
                            var_21 = ((((max(((min(var_14, var_16))), var_13))) ? ((min(-var_11, (240 >= 55685)))) : (min((4095 ^ 1), var_8))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_22 *= (arr_3 [i_1]);
            var_23 = ((var_15 >> (4261674106 - 4261674097)));

            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                arr_22 [i_1] [i_1] [i_7] = min((min(var_7, (arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))), -1);
                var_24 ^= (arr_14 [0]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_25 = ((~((max(1, 47239)))));
                            var_26 = (min(var_26, (((((((((!(arr_21 [i_6] [6] [6] [i_9]))))) * (27 * 0))) ^ (arr_19 [i_9]))))));
                            var_27 = ((18297 ? 1 : 1856851449448184546));
                            var_28 = (((!var_4) ? (min(((min(1, 0))), (max(141367181, 576460752303423488)))) : ((((max(var_2, (arr_0 [i_8] [i_8]))) * (((min(var_16, var_4)))))))));
                        }
                    }
                }
                var_29 = (!var_3);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_30 *= 216;
                arr_32 [i_10] [i_1] [i_1] = (((!var_17) / ((226 ? var_1 : var_8))));
                var_31 = arr_16 [i_1] [i_1] [i_6] [i_1] [i_10] [i_1];
            }
        }
        var_32 *= var_7;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] [i_11] = (((((min((arr_28 [0] [0] [i_11] [i_11] [i_11]), 44256)))) | (((255 ^ var_11) >> (1569249182 - 1569249164)))));
        var_33 = ((((1 ? 12 : (((max(var_11, var_6)))))) & 32));
        var_34 = (min(((var_7 ? (arr_31 [i_11] [i_11] [10] [i_11]) : (arr_15 [i_11] [i_11]))), ((min(1, ((var_6 || (arr_11 [i_11] [i_11] [2] [i_11]))))))));
    }

    for (int i_12 = 4; i_12 < 9;i_12 += 1)
    {

        for (int i_13 = 2; i_13 < 7;i_13 += 1)
        {
            var_35 *= var_12;
            var_36 ^= (((-127 - 1) ? 3258030359 : 29));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_43 [1] [i_14] [i_12] = ((var_3 ? var_4 : (arr_19 [i_14])));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 6;i_16 += 1)
                {
                    {
                        arr_49 [i_12] [i_14] [i_14] [4] = (((arr_8 [i_12]) | (~var_1)));
                        var_37 = (max(var_37, (((-var_11 ? (arr_33 [i_12 - 2]) : 114)))));
                        var_38 *= var_3;

                        for (int i_17 = 1; i_17 < 6;i_17 += 1)
                        {
                            var_39 = ((+(((arr_37 [i_17 + 3]) ? var_7 : var_11))));
                            arr_52 [i_17] [i_14] [i_14] = ((44256 ? 0 : var_4));
                            arr_53 [i_12] [i_17] = ((!11) <= (var_6 | -75));
                            arr_54 [i_12] [i_12] [i_17] = (4294967274 * -67);
                        }
                    }
                }
            }
            var_40 = (1 == 1);
            arr_55 [i_14] [i_14] = var_16;
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            arr_59 [i_12] [i_12] [i_18] = (min((((!(((47239 ? (arr_34 [i_12]) : 1)))))), ((((var_9 ? 57344 : var_13)) * (((var_8 ? 240 : var_0)))))));
            var_41 = 0;
            var_42 = (min(var_2, 2408862804));
            arr_60 [i_12] = min((((~(!216)))), (min((arr_40 [i_12 + 1] [i_12 + 1]), var_6)));
        }
        var_43 = (((1 > var_15) ? ((55547 & (!15649687069957865580))) : 1));
    }
    var_44 = (((0 ? 19 : 1742791924)) == var_16);
    var_45 = ((min(var_7, 47245)));
    #pragma endscop
}
