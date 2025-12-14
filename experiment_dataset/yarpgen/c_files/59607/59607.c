/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0 - 1] = var_8;
        arr_4 [i_0] = ((var_3 ? (var_0 & 89) : var_9));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_10 = ((-(((!(((-3592592772054145096 ? var_2 : (arr_0 [i_1 - 2] [i_1])))))))));
        var_11 = ((!(var_1 + 15368)));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_12 = (min(var_12, var_0));

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_13 = (max(var_13, var_3));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_14 = (max(var_14, (~var_7)));
                        var_15 = (var_1 && -var_5);
                    }
                }
            }
            var_16 = 1;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_18 [i_2 - 2] = var_2;
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_17 *= (arr_27 [i_8 + 1] [i_7 - 2] [i_6]);
                            var_18 -= ((var_5 ? (arr_7 [i_2 - 3] [i_6]) : ((var_8 ? 7549492413609338209 : var_2))));
                            var_19 += var_2;
                        }
                    }
                }
            }
            var_20 = ((2432606704965410135 * (arr_7 [i_2 - 3] [i_2 - 3])));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_31 [i_2] = var_9;
            arr_32 [i_10] [i_2 - 3] = var_3;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 20;i_12 += 1)
                {
                    {
                        var_21 = (min(var_21, 18038633991613543548));
                        var_22 = (arr_39 [i_2] [i_2] [i_2] [i_2]);

                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            var_23 = (arr_17 [i_10]);
                            arr_43 [i_2] [i_13] [i_13] [i_2] [i_2] = var_6;
                        }
                        var_24 = (((arr_21 [i_2 - 3]) ? (arr_36 [i_2 - 1]) : var_3));
                        var_25 = 69;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_26 = (min(var_26, (arr_48 [i_2] [i_10] [i_10] [i_10])));
                            var_27 = (max(var_27, ((((arr_51 [i_2 - 2]) > (arr_9 [i_2 + 1]))))));
                            var_28 = ((~((239 ? var_7 : 8))));
                        }
                    }
                }
            }
        }

        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_29 = ((-(arr_15 [i_2 - 3])));
            var_30 = -var_5;
            var_31 = ((var_7 | (((arr_20 [i_2] [i_17] [1] [1]) ? (arr_38 [i_17 - 1] [i_2] [i_2] [i_2] [i_2]) : var_5))));
            var_32 = (((arr_15 [i_2 - 1]) ? -var_2 : (arr_12 [i_17] [i_2 + 1] [i_2 + 1])));
        }
    }
    var_33 += (((var_5 | ((max(var_4, 69))))) | ((var_5 ? var_0 : (1 & 1))));
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            {
                var_34 = (~(((((-(arr_28 [i_18 + 1] [i_19] [i_18 - 2] [i_19] [i_19])))) ? 0 : (arr_11 [i_18] [i_19]))));
                var_35 = (max(var_35, ((min((((min(var_2, var_1)))), (min((arr_59 [i_18] [i_19] [i_19]), var_9)))))));
                var_36 = (min(var_36, (arr_20 [i_18 - 1] [i_19] [i_19] [i_18 - 1])));
                var_37 = max(((((((-8265305783372969074 && (arr_30 [i_18] [i_19] [i_19]))))) * (min(8388607, 264644894403072672)))), ((max(((max(1, 155))), 1))));
            }
        }
    }
    #pragma endscop
}
