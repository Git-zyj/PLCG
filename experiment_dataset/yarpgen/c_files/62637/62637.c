/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_20 = (arr_3 [i_0] [i_0] [i_2]);
                    var_21 = (max((min((arr_1 [i_2] [i_0]), -10340)), (((!(arr_7 [i_0] [i_0] [i_2] [i_2]))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((~((max((arr_5 [i_3] [i_1]), var_17)))));

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_22 = (((min((-10341 || var_13), (min(4298475462026909075, 28526)))) == ((max(137, 3819565973)))));
                                var_23 |= ((1276387495 ? 1 : -8033255457154117496));
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((((min(((max(-83, (arr_4 [i_0])))), (1276387486 * 1530395457)))) * (((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((var_15 ? -2080601870101129942 : 1)))))));
                var_24 &= -1;

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        var_25 = (71 * 2521940179);
                        var_26 = (min(var_26, (arr_0 [i_7 - 2])));
                        arr_23 [i_0] = var_18;
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_27 = (arr_10 [i_0] [i_0] [i_1] [i_6] [i_0]);
                        var_28 = var_17;
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_29 = ((~(~var_12)));
                        arr_32 [i_0] [i_0] [i_0] [i_0] = (((~var_16) / ((((((arr_3 [i_9] [i_0] [i_0]) ^ 3130))) ? (min(2553819587883864455, 5416490334688162900)) : (((max(-10348, 5))))))));
                    }

                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {
                        var_30 -= (!124);

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            var_31 = (min(var_31, (arr_31 [i_1] [i_1] [i_1] [i_10] [i_11] [i_10])));
                            var_32 = var_12;
                            var_33 = (~var_0);
                        }
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            var_34 = (((((var_5 + var_10) ? ((max(var_1, var_10))) : var_12)) >= (max(((-10351 ? var_15 : (arr_16 [i_1] [i_6] [i_10] [i_12]))), 1276387503))));
                            arr_41 [i_0] [i_6] [i_6] [i_10] [i_12] [i_0] = ((-(max((arr_17 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_12]), -18943))));
                        }
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            var_35 = (min(((~(var_4 <= var_6))), ((((max(-109, var_2))) - (!var_11)))));
                            var_36 = ((-(((var_9 + var_15) - ((min(51539607552, 112)))))));
                            arr_45 [i_0] [i_13] [i_6] [i_10] [i_1] = (arr_38 [i_0] [i_1] [i_6] [i_10] [i_13] [i_13]);
                        }
                    }
                    var_37 &= (((max(10420, ((var_17 ? 1 : 14148268611682642528)))) <= (min(39, 1))));
                    var_38 = (var_13 >= -52);
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_39 = (((min((arr_36 [i_0] [i_1] [i_1] [i_14]), (((arr_10 [i_1] [i_0] [i_1] [i_0] [i_1]) & var_19))))) ? ((((1 <= (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1]))))) : (((((var_17 ^ (arr_4 [i_0])))) ? (max(121, var_4)) : (((arr_29 [i_0] [i_1] [i_1] [i_14]) ? 1 : var_5)))));
                    var_40 = (min(var_40, (((~(9223372036854775807 / 14148268611682642529))))));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_41 = (max(var_41, (var_3 == 11839924125836810219)));

                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {

                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            var_42 = ((127 >> (((~var_12) - 25636))));
                            var_43 = 10358;
                        }
                        var_44 = 1;
                        arr_55 [i_0] [i_0] = var_19;
                    }
                    arr_56 [i_0] [i_1] [i_0] = var_4;
                    arr_57 [i_0] = (max((((var_18 ^ (arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((-115 ? (arr_5 [i_1] [i_15]) : (arr_7 [i_0] [i_1] [i_0] [i_0])))) ? (1 + 10325) : (((arr_4 [i_0]) ^ var_11))))));
                    var_45 = (((~32756) ? (32766 & 10858922471397604540) : (~var_7)));
                }
            }
        }
    }
    var_46 = ((((min(31887, (!1)))) ? 16 : ((((max(var_10, 16))) << (18446744073709551615 - 18446744073709551598)))));
    #pragma endscop
}
