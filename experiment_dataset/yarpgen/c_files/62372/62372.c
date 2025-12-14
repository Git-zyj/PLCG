/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((arr_1 [i_0]) & (arr_2 [i_0] [i_0]))) | (min((max((arr_5 [1] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_1 [1]))))));
                    arr_7 [i_0] [i_1] [i_0] = ((((max(-1, (arr_4 [i_0] [0])))) ? 1 : (((-1497026955 / 1) ? var_2 : (((arr_3 [i_0]) * (arr_0 [i_0])))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = (((arr_8 [i_3] [1]) < ((min(1, 1)))));
        var_15 = ((~(((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])))));
        arr_11 [i_3] [i_3] = (var_2 ? var_4 : -67108864);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [i_3] = (~(var_0 || 1));
                arr_19 [1] [i_3] = 67108864;
                arr_20 [10] [i_3] [i_3] = (arr_13 [i_3]);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_25 [i_5] [i_3] [i_5] [8] [i_3] [15] = ((((var_11 ? 2147483647 : (max(var_4, (arr_14 [i_3] [i_3] [i_5]))))) >= (arr_10 [i_4])));
                    var_16 ^= (-2147483647 - 1);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_17 = (-906324715 || (arr_29 [i_3] [i_4] [i_5] [i_7] [i_8] [i_5] [i_7]));
                        var_18 = ((1 || (((min(var_7, (arr_8 [i_3] [i_3])))))));
                        arr_32 [i_3] = (-(((((906324711 ? 262016 : var_10))) ? (max((arr_10 [i_7]), var_4)) : 8388592)));
                        var_19 = var_5;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, ((max(0, ((1056964608 ? ((var_8 ? 1610612736 : var_7)) : (arr_35 [i_3] [i_4] [i_4] [i_5] [i_7] [1]))))))));
                        var_21 = (((((((max((arr_24 [i_5] [6] [1] [6] [i_5] [i_3]), (arr_28 [1] [i_7] [i_5])))) > ((-(arr_21 [i_9] [i_7] [1] [i_3])))))) ^ ((((((arr_12 [i_3] [i_3] [i_7]) ? var_10 : (arr_23 [i_3])))) ? (min(var_7, 1)) : ((var_8 ? var_1 : var_7))))));
                        arr_37 [i_3] [i_7] [i_5] [i_4] [i_3] = ((1 ? 1 : 506289711));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_3] [i_4] [i_3] [i_7] [10] = -399674051;
                        arr_41 [i_3] [i_3] = max(((min(0, var_10))), var_0);
                        var_22 = (((var_1 < (arr_38 [i_3] [i_4] [i_3]))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_3] [i_4] [i_5] [i_7] [i_11] [i_11] [i_11] = (((((((arr_14 [i_3] [i_3] [i_11]) ? 1 : 1)) < (0 / -12444509)))) % ((var_9 ? (min(87416740, -1025284396)) : ((min(1, (arr_8 [i_3] [i_3])))))));
                        var_23 = ((min(-1596520167, (arr_14 [i_3] [i_4] [i_5]))) / (max(1990937009, 1)));
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_24 = (1257985027 <= (~1));
                        var_25 += min((((arr_16 [6] [18]) ? var_4 : (var_2 > var_0))), (((((1 ? var_10 : (arr_22 [i_12] [i_5] [2] [i_5] [i_5] [i_3]))) < 1))));
                        var_26 = (((min((arr_39 [i_3] [i_5] [i_4] [i_4] [i_12] [i_5] [i_4]), -1971926001))) ? (((arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) | var_1)) : (((arr_39 [1] [1] [i_5] [i_5] [i_12] [i_4] [i_7]) ? (arr_39 [i_3] [1] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_39 [i_3] [i_4] [1] [i_3] [i_12] [1] [i_4]))));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_27 ^= (~1);
                        var_28 = (-((-7 ? (var_7 == -2147483647) : ((1706034624 ? (arr_9 [i_3]) : (arr_16 [i_5] [i_3]))))));
                    }
                    arr_53 [i_7] [i_4] [i_5] [i_7] [i_7] [i_3] = ((~1) ? (min(var_4, var_0)) : (var_10 < -55863312));
                    var_29 = ((67106816 ? 1 : 1));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        arr_59 [i_3] [i_4] [i_4] [i_5] [1] &= var_1;
                        var_30 = (1195204357 >= 1);
                        var_31 = (var_1 <= ((-1 ? (arr_54 [i_15] [1] [i_3] [i_3] [i_3] [i_3]) : (arr_13 [i_3]))));
                    }
                    var_32 *= (var_2 <= var_6);
                }
            }
            arr_60 [17] [i_3] = var_0;
            arr_61 [1] |= (arr_51 [6] [6] [i_3] [0] [i_4]);
            var_33 = (-(((1 ? (arr_13 [i_3]) : (arr_22 [i_4] [i_3] [i_4] [i_4] [4] [i_4])))));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_64 [i_3] = 0;
            arr_65 [i_16] [i_3] [i_16] = max(0, -65536);
            arr_66 [i_3] [i_3] = (((min(var_12, (arr_22 [i_3] [i_3] [i_3] [i_3] [8] [15])))) ? 1 : 0);
            var_34 = (min(var_34, 0));
            arr_67 [i_3] [i_16] [i_16] = (((var_2 | var_7) ? ((((arr_48 [1] [13] [i_16] [i_16]) && (arr_48 [i_16] [i_3] [i_3] [i_3])))) : (((arr_48 [i_3] [i_3] [i_3] [i_16]) ? 1 : (arr_48 [1] [1] [1] [1])))));
        }
    }
    #pragma endscop
}
