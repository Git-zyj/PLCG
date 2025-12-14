/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = var_7;
                            var_19 = (arr_1 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_15 [i_0] = ((~((~(1641628212 | var_1)))));
                                var_20 = (min(var_20, ((((((var_9 ? 0 : var_2))) ? ((var_13 ? (arr_14 [i_1 - 1] [i_1 + 1] [14] [i_5] [i_5 + 1]) : (arr_14 [1] [17] [23] [1] [i_5 + 1]))) : ((max(var_9, 65524))))))));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [4] = var_5;
                            var_21 = 0;

                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                arr_19 [i_0 + 2] [7] [i_0] [i_5] [i_7] = ((!(((-(~var_6))))));
                                arr_20 [i_0] [16] [16] [i_5] [i_5] [i_1] [i_0] = 4;
                            }
                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                arr_25 [i_0] [15] [i_4 - 1] [i_0] = 33977;
                                var_22 = ((((max((arr_8 [i_4 - 1] [i_0] [i_5 + 1]), var_6))) ? ((-5574666220165385799 ? (arr_24 [i_0] [i_0] [i_5] [i_1] [i_1 - 1] [i_1 + 1] [i_0]) : ((max(var_6, -78))))) : (arr_12 [i_0] [i_0 + 3] [i_0] [i_0])));
                                arr_26 [i_0] [i_1 + 1] [i_4] [i_5] [i_5] = ((1 && (var_3 / -1037555774)));
                                arr_27 [5] [i_0] [i_4] [i_4] [i_0] [i_0] = ((!(((arr_24 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]) >= -90))));
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                arr_31 [i_0] = (max((max((var_13 + var_4), (arr_5 [i_0] [i_0] [i_5]))), (var_1 && var_9)));
                                var_23 = 91;
                                arr_32 [i_0] [15] [i_0] [i_5 + 1] [i_0] = (((((var_1 ? 1810634785 : (arr_30 [i_0] [i_0] [19] [i_0] [i_0]))) < (((var_9 ? (arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9]) : 90))))));
                            }
                        }
                    }
                }
                var_24 -= var_6;
                arr_33 [16] [16] &= (-7030 + 1);
            }
        }
    }
    var_25 = (min(((((0 != var_3) != (!1)))), 61));
    #pragma endscop
}
