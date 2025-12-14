/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = 5110220051749696200;

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_21 = (~1342282133480944065);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [1] = (87 % var_17);
                        var_22 = (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 2] [2] [i_2 - 2] [i_2]);
                        arr_10 [i_0] = (var_16 - -5110220051749696200);
                        var_23 = arr_8 [i_1];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        var_24 = ((-7026514533014548602 ? -7026514533014548601 : var_19));
                        var_25 = (((arr_8 [i_4]) ? var_17 : (var_2 - 1)));
                        var_26 = ((-((var_11 ? var_12 : 56647))));

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [1] [11] [i_0] [i_5 + 2] [i_6] = 117;
                            arr_21 [i_0] [6] = 1342282133480944065;
                        }
                        var_27 = (min(var_27, ((((arr_0 [20] [i_5 - 1]) ? -92 : var_2)))));
                    }
                }
            }
            var_28 = -90;
        }
        arr_22 [8] |= -1169755642;
        var_29 |= ((2624174022 ? 127 : 92));
    }
    var_30 = var_11;
    var_31 = (max((~var_16), (!var_7)));
    #pragma endscop
}
