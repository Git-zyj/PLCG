/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((~(((1 == ((-(arr_0 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_14 &= (arr_1 [i_2]);
                                arr_13 [i_0] [3] [i_1] [i_0] [i_2] [i_3] [i_4] = (((((!((min(var_11, -5451570518862287999)))))) != (-1645948177 / var_4)));
                                var_15 = (((((var_5 * (arr_3 [i_4] [i_2] [i_0])))) * (min((max(15919226442589983984, var_1)), (62 >= var_4)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                var_16 = (max(var_16, (arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                                var_17 = (arr_1 [i_1]);
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_2] [i_0] = (((1 <= 2255385610) != (~24249)));
                                var_18 = ((((((arr_17 [i_0] [10] [i_2 - 1]) / ((var_5 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))))) ? 2103717458357009270 : ((((arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 1]) ? (((arr_1 [i_0]) & var_3)) : (var_11 == 24249))))));
                            }
                            arr_19 [i_0] [i_0] [i_0] = (((((var_10 ? 1060319854 : -32741) - var_12))));
                            arr_20 [i_3] [i_2] [i_0] [i_0] [i_0] = (((((1181650943 << (65535 - 65535))) >= (arr_17 [i_0] [i_1] [i_0]))) ? (((min(var_0, 899882752490409343)) % (((2448773624 << (((arr_7 [i_0] [i_0]) + 1137129695924583119))))))) : (arr_14 [i_2] [i_2]));
                            var_19 = 951151135370942974;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_20 = (((((4503599627108352 ? 29360128 : (arr_5 [i_7] [i_8] [i_8] [i_8]))) % var_10)));
                            var_21 = (((var_3 ? var_5 : (-62 & var_0))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 7;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_22 *= (min((((21 ? 16 : 49821))), (min(((-(arr_36 [i_7] [i_7] [i_11] [i_12]))), (-29360146 ^ 43)))));
                                var_23 = (max(var_23, (-18 || var_6)));
                                var_24 = ((((32766 / (236 && var_2)))) ? ((((1 ? var_8 : var_6)))) : (max((!-120), 4503599627108352)));
                                var_25 = 3799632268;
                                var_26 = ((57530 - ((((~-21) < -1623468792)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
