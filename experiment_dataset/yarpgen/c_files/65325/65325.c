/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (min(var_14, (((((min(var_4, ((1628094373371332404 ? -1 : var_5))))) ? var_7 : (((((max(1449961188, var_6))) && (!1449961218)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 = ((59 | ((0 << (var_5 - 2688459962)))));
            var_16 |= (((var_4 >= 5249359609957403130) < ((62542 ? (arr_4 [i_0]) : var_2))));
            var_17 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_18 = ((((40351 ? (arr_11 [i_2] [i_2] [i_5]) : var_6)) > (arr_13 [i_5] [i_4] [i_3] [i_3] [i_2] [i_0])));
                            var_19 = (!62525);
                        }
                    }
                }
            }
            var_20 = ((var_1 ? (arr_1 [i_0] [i_2]) : (var_10 | var_9)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_21 = ((2845006072 ? 137 : ((3 ? 4294967295 : 375416755289307286))));
                            var_22 = var_8;
                            var_23 = -3010;
                            var_24 = 2995;
                        }
                    }
                }
            }
            arr_23 [i_0] [i_2] = (((arr_18 [i_0] [i_0] [i_2]) ? (arr_12 [i_0] [i_0] [6] [i_2] [i_2] [i_2]) : ((((arr_16 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]) && 1777025523)))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_25 = 62500;
            var_26 = (((arr_25 [i_0] [i_9]) ? (arr_24 [i_9] [i_0] [i_0]) : (arr_20 [i_9])));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_27 = (((arr_18 [i_13 + 1] [i_10] [i_11]) ? (arr_25 [9] [9]) : ((-4658675737725417968 % (arr_20 [i_13 + 1])))));
                            var_28 = (arr_34 [i_10] [i_13] [i_13] [i_13 - 1] [i_10]);
                            arr_40 [i_10] [i_10] [i_11] [i_12] [i_13] [i_13] [6] = -5983824660028863953;
                            var_29 = ((+(((arr_39 [i_0] [i_10] [i_11] [i_12] [i_13] [i_10] [0]) ? -5071760702728923617 : (arr_38 [i_10] [i_11] [i_11] [i_12] [6] [i_11] [i_12])))));
                            arr_41 [i_10] = 0;
                        }
                    }
                }
            }
            var_30 &= (~var_10);
            var_31 = ((-(arr_32 [i_0] [i_10] [i_10] [i_10])));
        }
        var_32 |= ((!(arr_6 [i_0] [i_0])));
    }
    var_33 = 1;
    var_34 = (((((~var_12) + 2147483647)) << (((min(var_12, var_9)) - 1))));
    #pragma endscop
}
