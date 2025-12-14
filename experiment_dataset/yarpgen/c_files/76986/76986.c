/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, (arr_8 [i_3] [1] [1] [i_0])));
                        var_11 = (((((((~(-2147483647 - 1))) << 0))) & (min(906581051, -1278646312))));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_13 [10] = ((31 & 62835) || ((min(var_1, 795166198))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_0] [i_0] = (arr_3 [i_4 - 1] [i_4 + 4] [i_4 + 3]);
                arr_17 [6] [1] [i_5] = 28;
            }
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_12 = (max(var_12, (619 > 2147483647)));
            var_13 = (max(var_13, ((((arr_5 [i_0] [i_0] [i_6] [i_6]) || ((min(127, var_8))))))));
            arr_21 [i_6] = (~var_1);
            arr_22 [i_0] [i_6] [i_6] = (max((((arr_4 [i_0] [i_0] [i_0] [i_0]) ^ 1)), var_9));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_14 *= ((-((32 ? 229 : 208))));
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_15 = 1549615553;
                        arr_32 [i_0] [i_7] [i_7] [i_9] = (-9223372036854775807 - 1);
                        arr_33 [12] [i_7] [i_8] [i_8] [i_8] = ((~(((var_1 && (arr_9 [i_7] [i_7]))))));
                        var_16 = (~1);
                    }
                }
            }
            var_17 = (arr_7 [i_0] [i_7] [i_7] [i_7] [1] [i_7]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_18 *= ((((418719027 ? 57283 : var_5)) >= var_6));
            var_19 = ((var_9 ? (~0) : var_0));
        }
        var_20 = (min(var_20, ((!(0 < 9007199254740991)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_21 += (max((arr_20 [i_0] [i_0]), (min(18437736874454810624, (arr_20 [i_0] [i_11])))));
                    arr_43 [i_0] [i_11] [i_12] = 28;
                    var_22 *= var_9;
                }
            }
        }
        var_23 = ((511 ? (((-1467577695 - ((24 ? 34933 : 34933))))) : (min(4092240662, 255))));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_24 = (min(((var_3 ? (arr_31 [i_13] [14] [i_13] [14]) : (arr_12 [i_13]))), var_3));
        var_25 *= (max(76, -1384529222));
        var_26 = (!151);
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 11;i_14 += 1)
    {
        var_27 = (((arr_28 [i_14 - 2] [i_14 - 2] [8] [0] [i_14] [i_14]) ? (arr_28 [i_14 - 2] [i_14] [2] [2] [i_14] [i_14]) : (arr_35 [i_14 + 2] [i_14] [1])));
        arr_51 [2] = (((arr_50 [i_14 - 1]) + (arr_18 [0])));
        var_28 += ((-(63 <= -1595176108)));
    }
    var_29 = var_9;
    #pragma endscop
}
