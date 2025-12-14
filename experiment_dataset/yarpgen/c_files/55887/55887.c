/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_18 = ((((!(var_15 >= 2)))));
                            var_19 = (min(((var_6 ? ((var_0 ? var_11 : (arr_8 [5] [i_3] [i_1] [i_1]))) : var_11)), var_11));
                            var_20 = var_5;
                            var_21 = (max((min(-339498959, 87)), var_8));
                            var_22 = (min((~-77), var_17));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            arr_15 [i_3] [i_2 + 1] = (4971574281411876917 == 4971574281411876904);
                            arr_16 [i_3] [i_3] [i_2] [i_3] [1] = (-4971574281411876899 ? 339498958 : 1);
                        }
                        var_23 = (((((((max(-4971574281411876918, -112)) + 9223372036854775807)) >> (((var_1 >= (arr_4 [i_3] [i_3]))))))) + 7698879102725937993);
                        var_24 ^= ((-339498958 - ((var_15 + ((min(30726, 252)))))));
                    }
                }
            }
        }
        var_25 = (((-((1 ? -4971574281411876906 : -4721)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_26 -= ((((-(arr_4 [5] [i_6]))) / ((((arr_0 [i_0] [i_0]) ? (((arr_8 [i_7] [i_7] [i_0] [i_0]) + var_8)) : -77)))));
                    arr_22 [i_0] [i_6] [i_6] = ((-(max((max(-4971574281411876900, var_1)), (((var_5 << (((arr_1 [i_0]) - 45)))))))));
                }
            }
        }

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_25 [i_8] [i_8] [i_0] = (var_2 ? (((arr_23 [i_8]) ? 1 : var_1)) : -var_1);
            var_27 = (max(var_10, (max(3, 0))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_28 = ((-(max((var_5 + var_1), (arr_26 [i_9])))));

            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_29 = (arr_3 [i_0]);
                    var_30 *= (!var_1);
                    arr_32 [i_0] [i_0] [i_10] [i_11] [i_10] [1] = (1 % 13729568429854957779);
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_31 = ((!((var_15 != ((var_11 ? var_6 : var_6))))));
                        arr_40 [i_0] [i_12] [i_10] [14] [i_0] = (((((~((max(18570, var_14)))))) == (((arr_38 [i_0] [i_0] [16] [i_0] [8] [i_0]) ? 1508291564 : (arr_37 [i_13 - 1] [i_10 + 1] [i_13 - 2] [i_10 + 1] [i_9])))));
                        var_32 = ((((((((-2576029957103085650 ? 2147483647 : -1))) ? var_17 : var_11))) != var_1));
                    }
                    for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, var_15));
                        var_34 = ((((max(2097024, 4971574281411876895))) ? (((!(arr_1 [i_9])))) : (((var_16 == (arr_43 [12] [i_14 - 1]))))));
                        var_35 ^= ((((min(-12549, 103))) >= var_11));
                        var_36 += min((((arr_30 [12] [i_10 + 1] [i_10 + 1] [i_14]) ? (arr_30 [i_0] [i_10 + 1] [i_10] [i_10]) : var_0)), ((var_0 ? (arr_30 [i_9] [i_10 - 1] [i_9] [i_12]) : var_8)));
                    }
                    arr_45 [i_0] [i_9] [i_0] [i_10] [i_12] = var_17;
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        {
                            arr_50 [i_16] = (arr_42 [5] [5] [i_10] [i_15] [i_16] [i_15] [i_15]);
                            var_37 = (((-((((arr_37 [i_0] [i_0] [i_10] [i_15] [i_16]) <= 44))))));
                            arr_51 [4] [i_9] [i_10] [i_15] [8] |= (arr_33 [i_10 - 1] [i_10] [i_10 - 1] [i_16 + 1] [i_16 + 3]);
                        }
                    }
                }
            }
            var_38 = (arr_21 [i_0] [i_0]);
            var_39 = var_16;
            var_40 *= (max(((max((1 && var_16), var_0))), (max(var_1, (min(var_17, 1))))));
        }
    }
    var_41 = (((((min(1275688235, var_8))) ? var_12 : var_0)) > (!var_7));
    var_42 = var_1;
    #pragma endscop
}
