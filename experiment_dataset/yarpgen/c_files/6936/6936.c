/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(~var_11)));
    var_21 = (max(var_21, var_1));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_22 = (max(var_22, ((max(((((var_13 ? var_6 : var_9)))), (-var_6 ^ var_3))))));
        var_23 = ((-((-(arr_0 [i_0])))));
        var_24 = var_13;
        var_25 &= (!var_13);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = (arr_3 [i_1 + 1]);
        var_26 ^= var_11;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_27 = (max(var_27, (((var_18 ^ (+-3003605101927807755))))));
                    var_28 = (max(var_28, var_13));
                    var_29 = (max((!3691974815090069470), (arr_5 [i_1 - 1])));
                    var_30 ^= var_5;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [i_4] = ((1881476046 << (2413491232 - 2413491218)));
            var_31 -= var_5;
            arr_18 [i_4] [i_5] [i_5] = var_7;
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            arr_23 [i_4] [i_6] [i_6] = ((((((((min(255, 13779)))) + var_1))) | (arr_16 [i_4])));
            arr_24 [i_4] [i_6] [i_6] = (!var_19);

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_28 [i_4] [i_7] = (((~7488) ? (max(((var_3 ? (arr_16 [i_7]) : var_9)), var_10)) : (min(var_3, var_10))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_32 ^= ((var_14 << (((max(var_14, var_9)) - 381092423944000597))));
                            arr_34 [i_4] [i_7] [i_7] [i_7] &= (!var_4);
                            arr_35 [i_4] [i_9] [i_9] [i_9] = 36268;
                        }
                    }
                }
            }
            for (int i_10 = 4; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_33 += ((min(var_5, var_2)));
                var_34 = (max(var_34, (arr_25 [i_4] [i_4] [i_4] [i_4])));
                var_35 = (var_15 ? var_3 : (((((arr_19 [22]) && var_6)))));
                arr_39 [i_4] [i_4] [i_10 - 4] &= (max(var_2, var_2));
            }
            for (int i_11 = 4; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_36 = (((((var_6 % (arr_16 [i_11]))) - -13779)));
                var_37 = (min((arr_11 [i_6] [i_6]), var_12));
            }
            var_38 = var_1;
        }
        var_39 = (arr_20 [i_4] [i_4]);
    }
    #pragma endscop
}
