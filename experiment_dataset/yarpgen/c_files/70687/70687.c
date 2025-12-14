/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 += (((-var_3 | 32640) != ((min((arr_0 [i_0]), (arr_1 [i_0]))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 ^= var_14;
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((((min(var_9, var_2))) << ((((var_5 ? var_12 : (arr_9 [i_0] [i_0] [i_2] [i_3]))) - 1036664408))));
                        arr_12 [i_2] [i_3] = 1;
                        var_18 += (arr_2 [i_0] [i_0] [i_3]);
                    }
                }
            }
            arr_13 [12] = (((-47194 + 2147483647) >> (((arr_0 [i_1 + 2]) ? (arr_0 [i_1 - 2]) : -1030480291))));
            var_19 ^= (-4381455900624504605 > 127);
            var_20 ^= -1;
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_21 = (min(127, 47488));

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_23 [i_0] [i_5] [i_6] = var_14;
                        var_22 = (max(var_22, ((((((arr_9 [i_4] [i_5 - 1] [i_4] [i_4]) ? 1 : var_6))) ? (((arr_21 [i_4] [i_4 + 2] [i_4] [i_6 + 4] [i_6]) << (var_10 - 711091274))) : (arr_21 [i_0] [i_4 - 1] [i_7] [i_6 + 4] [i_6])))));
                    }
                    var_23 *= 10;
                }
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_9] [i_8] [i_4] [i_4] [i_0] = var_5;
                            arr_34 [i_0] [i_4] [i_8] [i_9] [i_10] = (-127 - 1);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] |= (((max((var_0 * var_9), -4381455900624504605)) + ((((arr_1 [i_0]) << (4381455900624504604 - 4381455900624504588))))));
                        }
                    }
                }
                var_24 = (min(var_24, (((((1 >> (246 / 4381455900624504604))) | var_11)))));
            }
            for (int i_11 = 4; i_11 < 17;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_44 [8] [8] [1] [14] [i_13] [1] [i_13] = ((((min(-86, -9223372036854775806))) ? (-127 - 1) : 127));
                            var_25 = ((var_9 | (max((1 & 0), 603312898564201973))));
                            var_26 += 19;
                        }
                    }
                }
                arr_45 [i_11] = (arr_32 [i_0] [i_0] [i_0]);
                var_27 = (min(var_27, var_5));
                var_28 = -var_4;
                var_29 = (max(var_29, ((min((arr_36 [i_0] [i_0] [i_0]), 4381455900624504604)))));
            }
            arr_46 [i_0] [1] [i_4] = (arr_10 [i_0] [i_4] [i_0] [i_4] [i_4]);
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    {
                        var_30 = (min(var_30, var_8));
                        arr_52 [i_15] [i_15] [i_14 + 4] = (min(-4381455900624504605, ((((arr_24 [i_0] [i_4]) >= (arr_16 [i_4] [i_4] [i_15]))))));
                    }
                }
            }
        }
        var_31 *= ((-(min(64, -25439))));
    }
    var_32 = min(var_5, var_12);
    #pragma endscop
}
