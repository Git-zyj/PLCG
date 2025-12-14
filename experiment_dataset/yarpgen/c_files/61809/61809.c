/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3167857304096050003;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = (~-var_3);
        var_22 = (max(var_22, (var_7 <= var_16)));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_23 = var_9;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_24 += max(var_5, (((!(~var_12)))));
                    arr_9 [i_1] [i_2] [i_3] = (arr_4 [i_1] [2]);
                    arr_10 [i_3] = (arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_2 - 1]);
                }
            }
        }
        var_25 = var_11;
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_13 [11] = ((var_0 % (max(15877861715803959178, -3167857304096050010))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_17 [i_4 - 1] [1] [i_5] = ((arr_6 [i_4 - 1] [i_4 - 1]) || var_14);
            var_26 = (var_4 / var_0);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_7] [5] [10] [i_6] [i_7] = var_15;
                        var_27 = (((arr_2 [i_7]) - (arr_2 [i_7])));
                        var_28 = 15639091210183326109;
                        arr_26 [i_7] [6] [6] [i_5] [i_7] = (((~var_1) - var_3));
                        arr_27 [i_4] [i_5] [i_7] = ((2074375308 ? 523957955497483998 : 2807652863526225515));
                    }
                }
            }
            var_29 *= ((-(arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            arr_30 [i_4 - 1] = ((~(((max(var_13, var_5)) + (arr_8 [i_8 + 1] [i_8 + 1] [i_4 - 1] [20])))));
            var_30 = var_15;
            var_31 = (~var_3);
        }
        arr_31 [i_4] = (((arr_11 [i_4 - 1]) ? ((-(arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) : ((-(arr_3 [i_4] [i_4 - 1])))));
    }
    var_32 ^= -15877861715803959195;
    var_33 += ((((var_17 / ((var_7 ? var_3 : var_10))))) ? (min(((var_14 ? var_14 : var_19)), var_5)) : ((-((var_19 ? var_10 : var_0)))));
    #pragma endscop
}
