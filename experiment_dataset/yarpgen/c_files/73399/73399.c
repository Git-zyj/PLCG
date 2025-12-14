/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_1 ? var_7 : var_5));
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 *= var_2;
                        arr_8 [i_1] [i_1 + 1] [6] [i_3] [i_3] = (((!(var_10 && var_12))) ? ((((((((arr_4 [i_1] [i_1 - 3]) != (arr_1 [20] [i_1]))))) != (arr_1 [i_1 + 1] [i_0])))) : (!16));
                    }
                }
            }
        }
        var_16 *= 60103;
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_17 *= (((((((((448 / (arr_18 [i_4])))) ? (arr_11 [i_4 - 1] [i_4 + 1]) : var_12)) + 2147483647)) << (((((min(((var_11 ? (arr_1 [i_4 - 1] [i_4 - 1]) : -64)), ((((arr_0 [9]) % (arr_6 [i_5])))))) + 79)) - 15))));
                    var_18 = -454;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    arr_25 [i_8 + 2] [i_7] [i_7] [i_4 - 1] = ((((var_3 ? (arr_7 [i_7 + 1] [i_7] [i_8 + 3]) : (arr_3 [i_7] [i_7 - 1] [i_8 - 1]))) >= ((((arr_1 [i_4 + 1] [i_7 + 1]) >= (arr_17 [i_4 + 1] [i_4 + 1] [i_4]))))));

                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        var_19 = (((arr_2 [i_7] [i_7]) / var_4));
                        arr_29 [12] &= (var_2 ^ (((arr_28 [12] [12]) ? var_3 : 454)));
                    }
                    var_20 -= (max(((((arr_22 [i_4 - 1] [16] [i_8 - 2]) < (arr_27 [i_4 - 1] [7] [i_4 + 1] [i_7] [i_8 + 2])))), ((61 / (arr_22 [i_8 + 1] [0] [i_4])))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_21 = 4194303;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_22 = (((((65472 ? 511173219 : (arr_7 [i_4] [i_7] [i_8 + 3])))) / (((arr_34 [i_11] [i_10] [i_8] [i_7 - 1] [i_4 + 1] [i_4]) ? (arr_27 [i_11] [i_10] [i_8 + 3] [i_7] [i_4]) : -448))));
                            arr_35 [1] [i_7] [i_10] = (((~var_4) != var_2));
                            var_23 = (max((arr_34 [16] [8] [i_8 + 1] [5] [i_8 + 2] [i_8 + 2]), (arr_21 [i_4] [i_7 + 1] [i_10])));
                        }
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_38 [i_7] = ((~((-(max(var_7, (arr_30 [12] [7] [12])))))));

                        for (int i_13 = 2; i_13 < 17;i_13 += 1)
                        {
                            arr_41 [i_4] [i_7] [i_7] = ((-((var_3 ? 7680 : var_6))));
                            var_24 = (((((4194279 ? (arr_14 [i_4] [i_8] [i_12]) : ((448 ? (arr_37 [i_7] [i_7] [8] [i_12]) : var_5))))) ? (((arr_12 [i_12]) ? (arr_12 [i_4 - 1]) : (arr_12 [i_4 + 1]))) : ((((arr_20 [i_7] [i_7]) & -20)))));
                            var_25 = ((+((1584034789 ? (!1212146444) : (((arr_11 [i_4 + 1] [3]) ? (arr_40 [i_4] [i_7] [i_7] [i_8] [i_12] [i_13]) : 16799396881864100406))))));
                            arr_42 [i_7] [16] [i_8 + 1] [i_12] [i_13 - 1] = (max((((var_3 ? 2476507503 : (arr_23 [i_8 + 1] [i_8 + 1] [i_13 - 1])))), (((arr_34 [i_4 + 1] [i_4] [i_7] [i_7 + 1] [i_13 - 1] [11]) || (arr_34 [i_4 - 1] [i_7] [4] [i_7 + 1] [i_13 - 2] [7])))));
                        }
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            arr_47 [i_4] [i_7] [15] [i_12] [i_14 - 2] = (min((min((arr_19 [i_8 - 2] [i_7 - 1]), 2)), (((1 > (arr_19 [i_8 + 3] [i_7 + 1]))))));
                            var_26 = var_6;
                        }
                    }
                }
            }
        }
        var_27 = (min(var_27, ((!((min(var_7, (~var_12))))))));
        var_28 = ((65149 | (max(448, 935908771335810395))));
    }
    for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_29 ^= ((var_0 && (18211 || var_4)));
        var_30 = (4996 == 456);
        var_31 = (var_11 >= var_6);
        var_32 = (arr_20 [i_15 - 1] [i_15]);
    }
    var_33 = var_0;
    #pragma endscop
}
