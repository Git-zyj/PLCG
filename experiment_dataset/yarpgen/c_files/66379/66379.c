/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = (((var_14 / var_14) | (var_14 && var_13)));
        arr_2 [i_0] [i_0] = ((((((var_12 > var_13) < (var_7 <= var_12)))) <= ((var_0 >> (var_3 - 8587196627162454104)))));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_18 = (((var_4 % var_11) >> (var_9 - 1174357690)));
                var_19 &= ((((((var_13 && var_9) && (var_13 % var_5)))) > ((((var_11 | var_5) && (var_11 > var_5))))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_20 &= var_8;
                arr_12 [i_3] = ((((((var_10 / var_5) * (var_15 / var_7)))) | (var_12 - var_16)));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_21 = (((var_8 ^ var_13) - (var_10 > var_3)));
                var_22 = var_16;
            }
            arr_16 [1] [1] = ((((((var_11 - var_16) <= (var_11 % var_12)))) | ((((var_2 || var_16) < (var_4 - var_14))))));
            var_23 = (max(var_23, ((((var_5 & var_16) * (((var_0 >> (var_14 - 3206612994)))))))));
            var_24 = (((((var_11 << (var_12 - 26638))) >> (((var_14 | var_5) - 3221093674)))) >> (((var_1 || var_4) & var_14)));
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
            {
                var_25 = ((var_7 + ((var_2 >> (var_15 > var_11)))));
                var_26 = ((((var_0 != (var_7 >= var_1)))) * (((var_5 / var_2) * (var_4 / var_15))));
                var_27 = ((var_8 + var_15) | (var_1 | var_7));
            }
            for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
            {
                var_28 = ((((var_3 / (var_16 / var_0))) / (var_4 * var_0)));
                var_29 = var_9;
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
            {
                arr_28 [i_0 - 1] [i_5] [i_8] = (((var_1 + var_14) % (var_2 & var_3)));
                var_30 *= (((((var_6 * (var_11 / var_7)))) * (((var_7 / var_16) / (var_0 * var_13)))));
                var_31 = ((var_4 & var_9) | ((var_10 >> (var_1 - 211))));
            }
            arr_29 [i_0] [9] = (((((var_5 % var_15) <= (var_5 ^ var_11)))) >> ((((var_1 * var_0) <= (var_16 && var_12)))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 7;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_41 [i_9] [i_12] = ((((((var_1 == var_15) | var_4))) + (var_14 + var_14)));
                                arr_42 [i_12] [i_10] [i_10 + 1] [i_10] [i_9] [i_9] [i_0] = (((((var_9 || var_5) & (var_2 ^ var_3))) | (var_2 % var_11)));
                            }
                        }
                    }
                    var_32 = (((var_14 | var_11) + (((var_4 ^ var_14) | (var_14 | var_7)))));
                    var_33 = (((((var_15 + var_9) % (var_11 + var_2))) ^ (var_12 || var_12)));
                }
            }
        }
    }
    var_34 = (((((var_15 <= var_8) || (((var_4 << (var_9 - 1174357690))))))) >> (var_3 - 8587196627162454102));
    var_35 = ((((var_9 & var_15) | ((var_11 << (var_8 - 15546840200646036679))))) >> (((((var_14 - var_13) ^ (var_4 + var_10))) - 1223240222210277156)));

    for (int i_13 = 2; i_13 < 19;i_13 += 1)
    {
        var_36 = (((var_6 == var_2) - ((((var_0 && var_8) || (var_4 * var_8))))));
        arr_46 [10] [i_13] = ((var_3 >> ((((var_14 | var_10) > (var_16 || var_5))))));
        var_37 = ((((var_11 - (var_11 + var_12)))) * (((var_13 + var_10) - var_15)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    {
                        var_38 = (var_4 + var_8);
                        var_39 = var_15;
                        arr_57 [i_14] [i_14] [i_15] [i_16 + 2] [i_16] [i_15] = (((((var_6 << (((var_7 + 1102854267) - 24))))) && (var_8 & var_11)));
                        arr_58 [i_14] [i_15] [i_16] [i_16] = (var_10 - var_16);
                    }
                }
            }
        }
        var_40 = (((var_12 - var_9) ^ var_6));
    }
    #pragma endscop
}
