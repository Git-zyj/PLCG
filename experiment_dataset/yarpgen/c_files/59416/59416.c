/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (var_8 ? ((((((min(var_8, 54450)))) >= (max((arr_0 [i_0]), var_1))))) : var_13);
        var_16 = (max(var_16, (arr_2 [i_0])));
        var_17 *= (((~1) & (((arr_2 [i_0]) ? var_1 : (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 &= ((((((((var_9 ? 2832479795 : var_7))) ? (arr_0 [i_1]) : ((-24406 ? (arr_0 [i_0]) : var_10))))) ? (!2832479795) : (arr_1 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 &= (min((~var_6), (min((((var_14 ? 2832479795 : var_8))), (min((arr_6 [i_0] [i_0]), -2147483644))))));
                        var_20 = (1462487501 * var_10);
                    }
                }
            }
            arr_12 [i_0] [i_0] [i_0] = ((((min((arr_9 [i_0] [i_0] [i_1] [i_1]), var_11))) || (((arr_9 [i_0] [i_0] [i_0] [i_0]) != (arr_9 [i_0] [i_1] [i_0] [i_0])))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 |= max(((min(-1087245817, (arr_21 [i_4] [i_4] [4] [i_5] [i_6 + 2])))), ((min((min(-482957188, 116)), (((arr_6 [i_4] [i_4]) ? var_6 : var_1))))));
                            var_22 = ((((((arr_16 [i_0]) && 1045594384))) & (-32767 - 1)));
                            var_23 = (arr_15 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            var_24 = (min((((var_2 % var_2) ? ((var_3 ? (arr_10 [i_4] [i_4] [i_4] [i_0] [i_0]) : 2832479809)) : (arr_7 [i_0] [i_4] [i_0] [i_0]))), (1400831109 && -var_13)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_25 = var_10;
                        var_26 = arr_3 [i_8];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_27 = (arr_18 [i_11] [i_10] [i_4] [i_0]);

                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_28 = ((~(((!var_4) ? var_3 : ((var_11 ? var_6 : 110))))));
                            var_29 = (max(var_29, (~var_14)));
                            var_30 = var_14;
                            var_31 ^= (arr_1 [i_0]);
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_32 = ((((var_9 ? (14152328406269760530 & var_0) : (!2635846516))) < 1462487502));
                            var_33 = 4294967293;
                        }
                        for (int i_14 = 1; i_14 < 11;i_14 += 1)
                        {
                            var_34 |= 1462487502;
                            var_35 = ((158381563 ? (arr_21 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14]) : ((((min(var_10, 4182756625))) ? ((var_10 ? (arr_16 [0]) : 824227390)) : ((var_0 ? 1462487486 : var_0))))));
                            var_36 = (((var_5 ? var_9 : var_1)));
                        }
                        var_37 = (min(255, (~var_8)));
                        var_38 &= (min(((var_14 ? var_8 : var_2)), (var_14 >= var_12)));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {
                        var_39 += ((+(((arr_28 [i_0] [i_15] [i_16]) ? (arr_28 [i_0] [i_16] [i_17]) : var_3))));
                        arr_51 [i_17] [i_15] [i_15] [i_0] |= ((var_10 ? ((max((~135), (~var_10)))) : (((~var_2) ? ((var_9 ? var_0 : (arr_0 [i_16]))) : ((((arr_27 [i_0] [i_15] [i_16]) ? (arr_9 [i_0] [i_15] [1] [i_16]) : var_4)))))));
                        var_40 = max((((-9181549325945054001 + 9223372036854775807) << (((arr_42 [i_17] [i_16] [i_16] [i_15] [i_0] [i_0]) - 58749)))), (((var_5 ? (arr_42 [i_0] [i_0] [i_0] [2] [i_15] [i_17]) : -482957188))));
                        var_41 ^= (max(-var_6, (arr_28 [i_15] [i_16] [i_17])));
                    }
                }
            }
            var_42 = (((((56940 ^ ((min((arr_28 [i_0] [i_0] [3]), (arr_13 [i_0] [i_0] [i_0]))))))) ? (arr_29 [1] [i_15] [i_15]) : ((-19404 ? (arr_7 [i_15] [i_15] [i_0] [i_0]) : 15))));
            var_43 = (min((((arr_42 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0]) ? (arr_42 [i_0] [i_0] [i_15] [i_15] [6] [i_0]) : 65521)), (arr_42 [i_0] [i_15] [10] [i_0] [i_15] [i_15])));
            var_44 = (min(((max(var_7, (arr_16 [i_0])))), ((var_3 ? var_8 : (arr_10 [i_0] [i_0] [5] [i_15] [7])))));
        }
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        var_45 = (min(((min(435530653, ((((arr_53 [i_18]) == (arr_54 [i_18]))))))), (arr_54 [i_18])));
        var_46 = ((-((((((arr_55 [i_18] [i_18]) ? (arr_54 [1]) : var_9))) / var_5))));
        arr_56 [i_18] = arr_54 [i_18 - 1];
        var_47 += arr_54 [i_18];
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 0;i_19 += 1)
    {
        for (int i_20 = 2; i_20 < 23;i_20 += 1)
        {
            {
                var_48 = (((~var_10) ? ((217 ? (((16463 >> (((arr_60 [i_20]) - 80))))) : (min(var_2, (arr_55 [5] [i_19 + 1]))))) : (((((((var_7 ? var_9 : 193))) || (0 && 9181549325945054000)))))));
                var_49 = (min(var_49, 32));
                var_50 &= (((arr_54 [i_20 + 2]) ? var_14 : (var_13 < var_14)));
            }
        }
    }
    #pragma endscop
}
