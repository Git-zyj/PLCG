/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-((max(159, 13187))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_1 [i_4 + 1]) - (max(var_1, var_0))));
                                var_13 = var_8;
                                var_14 = ((1045038556842160329 || (((~((28 ? var_5 : 116)))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_5] = (((-12414581785712152810 & ((((((arr_4 [5] [i_1] [i_1]) + 9223372036854775807)) >> (arr_12 [i_0] [i_1] [i_2] [i_5] [i_5])))))));
                        var_15 &= ((+(((arr_1 [i_0]) >> (((((arr_12 [i_2] [i_1] [i_2] [13] [i_5]) ^ var_3)) - 130))))));
                        var_16 = (max(var_16, ((min(17679, ((-((8674054714270701466 ? var_9 : 90)))))))));
                        var_17 = ((0 ? 21537 : 255));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_18 = var_10;
                            arr_20 [i_0] [i_5] [i_2] [i_5] [i_0] = ((-0 || ((!(arr_6 [i_6] [i_1] [7])))));
                            var_19 = (((arr_12 [i_2] [i_1] [i_2] [i_5] [i_2]) || (arr_12 [i_0] [i_1] [i_2] [i_5] [i_6])));
                        }
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            arr_23 [i_5] [i_2] [i_5] = ((!(((arr_11 [i_7] [i_7] [i_7] [i_7 + 1] [i_5] [i_5]) && var_5))));
                            var_20 = var_8;
                            var_21 = (((arr_10 [i_0] [i_0]) ? (((var_4 && (arr_19 [i_7] [i_7] [i_7 - 1] [i_7] [i_7])))) : (933311122 / -6)));
                            var_22 *= ((((max((arr_22 [i_7] [i_0] [i_7 - 1] [i_0] [i_5]), (arr_22 [14] [i_0] [i_7] [i_0] [14])))) & ((var_9 | (((arr_19 [i_5] [i_1] [i_2] [i_0] [i_7]) ? var_9 : var_4))))));
                            var_23 = var_5;
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [5] [i_5] [i_2] [i_1] [i_8] = (--28);
                            var_24 = ((((min(var_8, (arr_19 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1])))) ? (!var_3) : (arr_19 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])));
                            arr_27 [i_5] [i_5] = (((min(var_3, var_8))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_25 ^= (arr_2 [1]);
                            arr_32 [i_9] [i_5] [i_5] [i_5] [i_5] [i_0] = (-((-(max((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]), -62602194)))));
                            arr_33 [i_0] [i_5] = 171;
                            var_26 = (27118 + 46);
                            arr_34 [i_5] = (((((max(var_3, var_10)))) / -var_9));
                        }
                    }
                    arr_35 [i_0] [10] [i_2] = var_4;
                    arr_36 [i_0] = (max((max(var_4, (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_22 [i_2] [i_0] [i_1] [i_0] [14])));
                }
            }
        }
        var_27 = ((-((max((arr_8 [i_0]), (arr_8 [i_0]))))));
        var_28 = ((21624 ? 159 : ((((((-(arr_21 [8] [i_0] [8] [8] [i_0] [i_0] [1])))) == ((var_9 ^ (arr_15 [i_0] [i_0]))))))));
        var_29 = ((1 - (max((((-(arr_6 [i_0] [i_0] [i_0])))), (12414581785712152816 + var_6)))));
        arr_37 [i_0] = (max((+-0), var_6));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        arr_40 [i_10] [i_10] = -7073479706143344029;
        var_30 = (((165 - 1) - -var_4));
        arr_41 [i_10] [i_10] = 7073479706143344029;
    }
    var_31 = var_8;
    var_32 = (max(var_10, var_8));
    #pragma endscop
}
