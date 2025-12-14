/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 & (((var_14 ? var_0 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] [7] = ((((min(var_13, (arr_4 [i_0] [i_0] [i_0]))) + 2147483647)) << (((((arr_12 [i_1 + 1] [17] [i_2 + 4] [i_2] [i_1 + 1] [i_1 + 1]) + 3028)) - 16)));
                                arr_14 [15] [15] [15] [i_0] [15] = var_4;
                            }
                        }
                    }
                }
                var_16 += ((((((arr_8 [i_1 - 3]) ? 1 : var_2))) ? (arr_10 [13]) : (27021597764222976 != var_7)));
                var_17 ^= ((var_2 ? (((-2 | -1) ? -27021597764222966 : -23)) : (((max(var_8, 2305843009213693951)) >> (((~var_3) - 4262006940))))));
            }
        }
    }
    var_18 = (~1);

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_19 *= var_1;
        var_20 = ((((((arr_0 [i_5]) ? var_2 : (arr_1 [11]))) | 195)));
        arr_17 [i_5] = var_3;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_21 = (((arr_18 [i_6] [i_6]) ? ((((arr_18 [i_6] [i_6]) || var_5))) : (arr_18 [1] [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        arr_26 [12] [i_7] [i_8] [i_9] = ((-(arr_18 [i_8] [i_8])));
                        arr_27 [i_6] [i_7] [i_6] = ((!((((((var_1 ? (arr_22 [1]) : var_9))) ? (min(var_11, var_13)) : (arr_22 [i_9 + 1]))))));
                        var_22 = (max(var_22, 202));
                        arr_28 [i_8] = var_2;
                    }
                }
            }
        }
        var_23 *= ((-(((((var_1 ? 205 : 746310312))) ? var_11 : ((((arr_23 [i_6] [i_6]) | var_6)))))));
    }
    for (int i_10 = 3; i_10 < 15;i_10 += 1)
    {
        var_24 -= var_2;
        arr_32 [i_10] [i_10] = var_11;
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        var_25 = (min(var_25, (arr_21 [i_11] [7] [i_11])));
        arr_36 [22] |= ((-((10 ? -32743 : -131072))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    var_26 ^= (min(-27021597764222967, ((4294963200 ? (arr_33 [i_11 - 1]) : (arr_33 [i_11 + 1])))));
                    var_27 = var_10;
                }
            }
        }
    }
    var_28 = ((!((((var_12 ? var_2 : var_5))))));
    #pragma endscop
}
