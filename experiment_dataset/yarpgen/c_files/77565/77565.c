/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -8676022510537395478;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-var_0 >= (min(3787866817719870879, (max(-3787866817719870898, 1))))));
        arr_4 [i_0] = -3787866817719870879;
        arr_5 [2] [7] = -3787866817719870879;

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
            {
                var_18 = ((min(3787866817719870879, (arr_0 [i_1 - 1] [i_1 - 1]))));
                var_19 = (min(var_19, ((((min(var_3, (arr_2 [i_1 - 2] [i_1]))) / var_13)))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_13 [i_3] [i_1 - 1] [i_3] = (!var_16);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_5] [i_3] [i_3] [i_3] [22] [i_0] = var_7;
                            arr_19 [i_0] [i_1] [i_3] [i_4] [i_3] = -var_6;
                            var_20 = -var_13;
                            arr_20 [i_1] [i_3] [i_3] [i_5] = (~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                    }
                }
                var_21 = (max(var_21, (((-3787866817719870879 < ((((arr_9 [i_3]) ? var_13 : var_16))))))));
                var_22 ^= var_3;
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1 - 2] [i_1] [i_1] [i_6] [i_6] [i_1 - 2] = (min(var_8, (var_14 / -323097358)));
                            var_23 -= (((((-(var_12 || var_16)))) ? ((-(max(-3787866817719870879, -1825)))) : ((((!(((10 ? -13634 : 10)))))))));
                        }
                    }
                }
                arr_28 [i_6] = (((((~((-(arr_11 [i_6] [i_6])))))) ? 101 : ((min((min(7, var_1)), var_16)))));

                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    arr_33 [i_0] [i_1] [i_6] [i_9] [i_9] = ((99 ? (((arr_2 [i_1 + 1] [i_9 + 1]) ? 97 : ((-(arr_25 [i_0] [i_0] [i_0] [i_9] [i_6] [i_9] [i_6]))))) : (var_15 < var_7)));
                    var_24 = (max(var_24, var_8));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_25 = 18446744073709551611;
                    arr_38 [7] [i_1] [i_1] [i_6] [i_10] [i_10] = min((--18446744073709551615), (arr_24 [i_0] [11] [i_6] [i_10] [11] [i_1 + 1]));
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_26 = (max(var_16, (min(var_13, (arr_21 [i_12 + 1] [i_1 - 1])))));
                            arr_49 [i_0] [i_0] [i_11] [i_12] [i_13] = ((7 ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -192604735));
                            var_27 = (((((~((12625 ? 7 : 25726))))) ? ((-var_6 + (~3787866817719870879))) : (((((arr_17 [24] [i_13] [i_0] [i_1 - 1] [i_1 - 1] [15] [i_12 + 3]) < (arr_17 [i_1] [i_13] [i_13] [i_1 - 2] [i_1 - 2] [i_12] [i_12 + 3])))))));
                        }
                    }
                }
            }
            var_28 = (-(((!(arr_26 [i_1 - 2] [i_1] [0] [i_1])))));
            var_29 = var_8;
        }
        var_30 = (min(var_30, var_4));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_31 = (~var_7);
        var_32 *= ((!(((~(var_11 & 323097357))))));
    }
    var_33 = -13634;
    var_34 = ((var_8 ? -2785810998737397596 : var_4));
    #pragma endscop
}
