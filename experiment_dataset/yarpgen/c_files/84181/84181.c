/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (min(-358881308, ((((min(var_6, 15215))) ? ((((-2147483647 - 1) && var_9))) : var_3))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (max(((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0])))), ((((arr_1 [i_0]) ? var_9 : var_1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_2] = (((arr_4 [i_0] [i_1] [i_2]) ? var_2 : var_5));
                var_15 |= ((+(((arr_3 [i_0] [i_0]) ^ var_6))));
            }
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_16 = (!-2);
                arr_9 [i_0] [i_0] [i_0] = (arr_5 [i_0]);
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_13 [i_1] [i_1] = var_4;
                var_17 = (((((arr_1 [i_0]) != 0)) ? (arr_2 [i_1] [i_1]) : var_2));
            }
            var_18 = arr_12 [i_0] [i_0] [i_0];
        }
        var_19 *= (min((2147483647 + 0), (min((arr_5 [i_0]), (var_7 & 14)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_20 = ((~(max((max(-2147483644, var_7)), (~var_1)))));
                    var_21 += var_0;
                    var_22 = (max(var_22, ((min((!var_11), ((var_11 && (arr_14 [i_0] [i_5] [i_6]))))))));
                    var_23 = 127;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_24 = ((!((min((arr_18 [i_7]), 0)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_25 *= 2147483647;
                                arr_29 [i_8] [i_8] [i_8] [i_9] [i_9] [i_10] [i_11] = var_2;
                            }
                        }
                    }
                    var_26 = (((-2147483647 - 1) | ((max((!-4506449144589970300), (!-4506449144589970301))))));
                }
            }
        }
        var_27 |= ((((min(((max(2147483647, var_2))), (arr_15 [i_7] [i_7])))) ? 2147483647 : (!var_10)));
    }
    #pragma endscop
}
