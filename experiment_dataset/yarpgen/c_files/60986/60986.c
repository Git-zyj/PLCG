/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 &= (~var_3);
                arr_5 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_3 [i_1 - 1] [i_1 + 3]) : (arr_3 [i_1 + 3] [i_0])));
                var_18 = ((((((~var_7) ? var_8 : ((max((arr_1 [i_1]), 23347)))))) ? (arr_4 [i_0] [i_0] [i_0]) : (max((max(var_5, (arr_3 [i_1] [i_0]))), 125))));
                var_19 = 65530;
            }
        }
    }
    var_20 = var_4;
    var_21 ^= ((-21 ? ((65530 ? ((var_10 ? var_0 : var_5)) : var_3)) : var_12));

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_3] = ((!((((arr_8 [i_2]) / var_10)))));
            var_22 = 65518;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_2] [i_5] [i_5] [i_2] [i_2] = (((((-1 ? -1613294251 : var_8))) ? 2147483636 : 65530));
                        var_23 = var_3;
                        var_24 &= (~8555586620660541484);

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_25 = (max(var_25, var_6));
                            var_26 = (arr_14 [i_2]);
                            var_27 = (((arr_16 [i_2] [i_4] [i_5] [i_7]) ? var_4 : (arr_12 [i_7] [i_5])));
                        }
                    }
                }
            }
            var_28 ^= -var_12;
            arr_24 [i_2] = ((var_12 ? (((5107430591014982502 ? 2147483643 : 13))) : (((arr_4 [i_4] [i_4] [i_2]) ? var_8 : (-2147483647 - 1)))));
            var_29 = (((124 ? var_0 : (arr_6 [i_4]))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_30 ^= (arr_9 [i_8]);
            arr_27 [i_2] = (max((arr_0 [i_8]), (arr_23 [i_2 + 1] [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = var_10;
                            var_32 = (((!var_3) ? ((((!(((var_7 | (arr_2 [i_2])))))))) : var_5));
                        }
                    }
                }
            }
        }
        arr_40 [i_2] [i_2] = (((((-6625557549177883343 ? -807937840 : ((var_0 ^ (arr_37 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))))) ? (arr_10 [i_2 - 2]) : (((4227725326 * (arr_26 [i_2 - 1]))))));
        arr_41 [i_2] [i_2] = ((~(arr_10 [i_2])));
    }
    #pragma endscop
}
