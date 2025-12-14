/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((~(((!(arr_3 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_12 = (((arr_9 [i_0] [i_0]) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_2] [i_1])));
                var_13 = (min(var_13, (var_11 & 245455577)));
                var_14 = ((arr_0 [i_0]) ? var_1 : var_9);
            }
            var_15 = (~var_5);
        }
        var_16 = (max(var_16, ((min((max((arr_5 [i_0]), -var_10)), ((var_7 ? (!var_5) : 4049511723)))))));
    }

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_17 = 245455577;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_3] = ((0 ? 4049511723 : 18446744073709551610));
            var_18 = (((arr_8 [i_4] [i_3 + 1]) <= (arr_8 [i_4] [i_3 + 1])));
            var_19 = (min(var_19, ((((arr_14 [i_4] [14]) < (245455566 > 32704))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                var_20 = ((((245455577 ? 32712 : 5)) + (~4049511729)));

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_21 = (max(var_21, (((807093184 ? var_6 : ((((~255) * ((0 ? 245455567 : 807093194))))))))));
                        arr_26 [i_3] [i_6 - 1] [i_6 - 1] [i_5] [i_3] = ((!((((((245455568 ? (arr_15 [i_7]) : var_5))) ? (max(8439081027242451907, var_4)) : ((max(3259713760, 0))))))));
                        var_22 = (((((((1047015760 ? 30941 : 65535))) ? (var_2 & 1) : ((var_3 ? 22324 : var_1))))) ? (((((~var_5) <= var_2)))) : ((((max(4049511747, 0))) ? ((var_3 ? 245455567 : var_11)) : (arr_19 [i_6] [i_6]))));
                        var_23 = ((~((~(((arr_25 [i_3] [i_7] [i_3 + 1] [14] [i_3]) ? 1253831464 : -1))))));
                    }
                    var_24 = 1;
                }
                arr_27 [i_3] = ((((~(arr_8 [i_6 + 1] [i_3 + 1]))) / (arr_10 [i_3])));
            }

            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                arr_30 [i_3] [i_3] [13] [i_9] = ((max(((((arr_29 [10]) <= 25899))), (((arr_5 [i_5]) & var_9)))) | 4049511729);
                var_25 = (max(var_25, ((min(245455568, 1)))));

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_26 = (arr_31 [i_3] [i_9] [i_9] [i_10] [i_5]);

                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_27 ^= ((var_1 | ((((((var_4 ? 1 : var_2))) >= 1253831462)))));
                        var_28 -= -63433;
                        var_29 = (((((~(min((arr_20 [i_5] [i_3 + 1]), var_3))))) ? (((~((max(-94, 8191)))))) : var_9));
                        var_30 = ((-(~var_3)));
                        var_31 = (24711 * 8);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_32 = 62361;
                        var_33 = -var_7;
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, (arr_19 [i_13] [i_5])));
                        arr_42 [i_3] [i_3] = ((((!(((arr_22 [i_3] [i_5] [i_3]) || (arr_37 [i_10] [i_10] [i_9] [7] [i_3]))))) ? ((var_6 ? -32707 : (arr_21 [i_3] [5] [i_9] [i_10]))) : (((max((var_2 && var_3), -22315))))));
                    }
                }
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_35 = (~4049511729);
                var_36 = ((((max((arr_14 [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 + 1] [i_3 + 1])))) ? var_4 : ((min((arr_31 [9] [i_3 + 1] [i_14] [i_3 + 1] [i_14]), (arr_31 [i_3] [i_3 + 1] [i_14] [i_5] [i_14]))))));
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
            {
                var_37 -= var_8;
                var_38 = ((~(arr_44 [i_3])));
            }
        }
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            var_39 -= max((-1 + -var_1), ((~(arr_25 [14] [i_16] [i_16 - 1] [i_3 + 1] [14]))));
            var_40 = 40824;
            var_41 = (-32710 ^ 0);
            arr_49 [i_3] [i_3] = ((var_11 ? (((((var_2 << (var_6 + 7172750541558296730))) * var_4))) : (((arr_14 [i_3 + 1] [i_16 + 1]) * (var_4 ^ 4049511728)))));
        }
    }
    var_42 |= var_3;
    var_43 = ((-((~(1 <= 32692)))));
    var_44 = (min(var_44, -var_10));
    #pragma endscop
}
