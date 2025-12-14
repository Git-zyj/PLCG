/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (!29669)));
    var_17 = var_6;

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_1));
        arr_4 [5] [i_0] = ((!(arr_3 [i_0])));
        arr_5 [i_0] [11] &= (var_14 - var_2);
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = 5953682974792442014;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_19 = ((((min((!16027), 24080))) ? (min((arr_2 [i_1 + 1] [i_1]), (arr_2 [i_1 + 2] [0]))) : ((min(var_0, 8997546980636885197)))));
                        arr_17 [i_4] [i_2] [i_2] [i_1] = (min(var_0, -1547388992));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_21 [10] [1] [i_2] [i_2] [i_2] = (((((3597259010 - (arr_3 [i_2 + 1])))) && 1483173663));
                            arr_22 [i_3] [i_2 + 1] [i_2] [i_4] [i_5] = var_8;
                            var_20 = (-(((((-127 - 1) ^ -1387027528)) << ((((min(var_9, var_13))) - 30)))));
                            arr_23 [i_1] [i_1 - 3] [i_1] [i_2] [i_1 + 2] [i_1] = 0;
                        }
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            var_21 ^= arr_16 [i_2 + 1] [i_2] [i_1 - 1];
                            arr_27 [i_2] [i_2] [i_3] [i_4] [i_6] = ((~((var_14 << (arr_15 [i_6 + 3])))));
                            arr_28 [i_1 - 4] [i_2] [i_2] [i_4] [i_1 - 4] = var_7;
                            arr_29 [i_1] [i_2] [i_1] [i_1] = ((~((min((arr_16 [i_2 + 1] [i_1 - 2] [5]), (arr_16 [i_2 + 1] [i_1 - 4] [i_1 + 1]))))));
                            var_22 -= 15545156213566906672;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_2] = var_12;
                            arr_33 [i_7] [i_2] [i_7] |= (((min(16414685927347025665, (arr_24 [i_2 + 1] [i_7] [i_1 - 2] [i_7] [i_1]))) < var_3));
                            var_23 = (max(var_23, ((min((arr_25 [3] [i_1 - 1] [i_2 + 1] [i_2] [i_7]), (arr_25 [0] [i_1 - 4] [i_2 + 1] [i_3] [i_3]))))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_37 [i_1] [i_2] [i_1] [i_1] [i_1] [i_8] = ((2251799545249792 * (-1051737966000247448 < var_5)));
                            arr_38 [i_2] [i_2] = (max(((65532 | (arr_12 [i_2] [i_2]))), -123));
                        }
                        arr_39 [i_2] = ((((min(3400214935, (((-15928 ? var_9 : 1792)))))) | (min((arr_12 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 - 4] [i_2])))));
                        var_24 = (max(var_24, ((min(74, (min((arr_20 [i_1 - 3]), ((min(224, 0))))))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 8;i_9 += 1)
    {
        var_25 += (-127 - 1);

        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            arr_44 [i_9 + 2] [i_10] [i_10] = 4865;
            arr_45 [i_9] [i_9] [10] = ((!(arr_20 [i_9 + 2])));
            arr_46 [i_9] [i_9] [i_9] = ((1 && ((min(0, var_4)))));

            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {
                var_26 ^= var_4;
                arr_49 [i_10 + 1] [i_9] = var_15;
                var_27 = 1383246234;
            }
        }
        arr_50 [i_9] = (max((((((arr_31 [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 - 1]) + 9223372036854775807)) >> 1)), (((-(arr_48 [3] [i_9]))))));
        arr_51 [i_9] [i_9 + 3] = (arr_24 [i_9 - 1] [i_9 + 1] [i_9 + 1] [6] [i_9 + 2]);
    }
    #pragma endscop
}
