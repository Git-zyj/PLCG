/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_3 ? (arr_0 [i_0]) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))))) ? ((((((arr_0 [i_0]) | (arr_1 [i_0])))) ? (var_8 <= -5) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : ((~(max(var_2, var_4))))));
        arr_3 [i_0] = ((!(((arr_1 [i_0]) < ((-24 ? (arr_1 [i_0]) : var_4))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [4] [i_1] [i_1] = 0;
            var_11 += (((((((var_10 ? 25 : -6))) ? 0 : (min(var_9, var_4)))) + ((var_0 ? ((var_2 ? 6 : var_0)) : (arr_1 [i_0])))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_12 *= (max((((((((arr_1 [i_2]) ? var_4 : var_6))) ? ((var_4 >> (var_4 - 386557540))) : ((-14 ? var_7 : var_4))))), (max((((!(arr_9 [i_0] [i_2] [i_0] [10] [i_3])))), var_3))));
                    arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = (min(-11, (((1035979700 ? var_3 : var_2)))));
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_13 ^= (0 >= 5);

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_14 ^= (arr_9 [i_0] [i_1] [i_2] [i_4 - 1] [i_5]);
                        var_15 &= var_10;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_16 ^= (max((((min(var_2, var_7)))), (min(var_0, (arr_16 [i_2 - 1] [i_6])))));
                        var_17 = ((-((~(arr_11 [i_0] [i_1] [i_2 - 1] [i_4 + 1] [4])))));
                        arr_19 [3] [i_4 - 1] [5] [10] [i_0] = var_2;
                        arr_20 [i_0] [i_0] [17] [i_6] = ((((min(-6, (arr_13 [i_0] [i_4 - 1] [i_2] [i_2 - 1])))) / (--146)));
                    }
                    arr_21 [0] [i_0] [i_0] &= (((var_5 == var_10) + ((-((var_2 ? var_4 : var_1))))));
                    arr_22 [i_0] = (var_0 != var_10);
                }

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_18 = (max(((-2147483638 ? (((44131 ? (arr_0 [i_7]) : var_10))) : var_8)), (((~(arr_9 [i_0] [i_1] [i_2 - 1] [i_7] [7]))))));
                    var_19 = 117;
                }
                arr_25 [i_0] [i_0] [i_0] = (((var_4 || var_4) * (var_0 != var_4)));
                arr_26 [i_0] [i_1] [i_0] [i_2 - 1] = (arr_5 [i_0]);
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_29 [i_0] [3] [i_8] = ((+(((var_6 && ((min((arr_10 [i_0] [i_1] [i_8] [i_8]), -24))))))));
                var_20 = ((16595803901464908093 ? (((arr_9 [i_8] [i_8] [i_1] [i_0] [i_0]) ? var_7 : var_7)) : ((min((arr_9 [i_0] [17] [i_1] [i_1] [i_8]), -1)))));
            }
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                arr_32 [i_0] [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = (((1 ? var_9 : (arr_1 [i_9 - 1]))));
                            var_21 *= (min((arr_11 [3] [7] [3] [7] [2]), (var_10 >= var_7)));
                        }
                    }
                }
            }
            arr_39 [i_0] [i_1] [i_1] = ((((max(((var_1 ? var_5 : (arr_24 [2] [i_1] [i_1] [i_1]))), var_9))) ? ((((((~(arr_4 [i_0]))) != var_4)))) : (((arr_1 [i_0]) ? (1850940172244643540 | -15) : (arr_13 [i_0] [i_0] [i_0] [i_0])))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_22 = (+(((arr_8 [i_0]) >> (var_1 - 842485530))));
            var_23 = (max(var_23, -16595803901464908100));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_24 += (((var_2 ^ 9957965793914832996) <= 1850940172244643523));
            var_25 -= var_8;
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            {
                arr_50 [13] = 9007197107257344;
                var_26 = (max(var_26, ((((((min(var_9, (arr_36 [i_14 + 1] [i_15] [i_14] [i_14] [i_15])))) / var_1))))));
            }
        }
    }
    #pragma endscop
}
