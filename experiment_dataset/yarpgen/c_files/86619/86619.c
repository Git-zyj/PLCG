/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (var_6 <= -72);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [0] [0] [13] [13] [i_0] [i_0 - 4] [4] = ((var_7 ? ((var_6 ? (((!(arr_4 [i_0] [i_0] [i_3 + 3] [i_4])))) : ((min(-72, var_0))))) : (arr_6 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 2])));
                                arr_14 [i_0] [i_1] [i_1] [3] [i_1] [i_1] = var_8;
                                var_15 = ((1 ? -37 : -11));
                            }
                        }
                    }
                    var_16 = (((72 * 0) ? ((127 >> (((-127 - 1) + 152)))) : ((min(44, (arr_11 [i_0] [i_0] [i_1] [i_0] [i_2 + 1]))))));
                }
            }
        }
    }
    var_17 = ((var_7 ? var_4 : var_6));
    var_18 = 127;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 1;
                                var_19 = (((min(((var_13 ? 117 : var_5)), (arr_5 [i_5] [i_7] [i_5]))) >= -20));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_20 = (max(-80, ((-(-127 - 1)))));
                            var_21 = 3;
                            arr_35 [i_5] [i_6] [6] [6] = ((((max((arr_6 [i_5] [i_6] [i_10] [i_11]), (arr_6 [i_5] [i_6] [i_6] [i_11])))) ? var_11 : (((((0 ? var_13 : var_8))) ? var_13 : 1))));
                            arr_36 [i_6] [1] [i_11] = ((((max((min(var_11, var_11)), (-127 - 1)))) ? 0 : ((-115 ? ((-58 ? 0 : var_4)) : var_9))));
                        }
                    }
                }
                arr_37 [9] = ((((((1 ? -6 : (arr_12 [i_5] [i_5] [i_5]))) + 2147483647)) >> (69 - 52)));
                var_22 = ((+(((((arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]) >= (arr_6 [i_5] [i_6] [i_5] [i_5]))) ? var_11 : var_12))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_23 = (~115);
                            var_24 = ((-((max(var_5, var_8)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
