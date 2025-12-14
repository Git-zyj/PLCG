/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((var_11 && ((((~255) ? 255 : 2139336890)))));
                var_21 = var_3;
                var_22 ^= 57;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_23 = (min(var_23, (((!(((var_8 ? var_15 : (39540 * 110)))))))));
                    var_24 = arr_4 [8];
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_25 = ((!(((((3477496655 ? 2 : 101)) << (81 - 69))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0 + 1] = ((-(arr_8 [i_4] [i_0] [i_3])));
                    }
                    var_26 ^= arr_5 [i_3] [9];
                }
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_27 = ((-((max((arr_8 [i_0] [i_0] [i_5 - 2]), 175)))));
                    var_28 = (max(var_28, ((min((arr_5 [i_5 + 1] [i_0 - 1]), (((arr_12 [i_0 + 1] [i_5]) ? ((var_3 ? var_18 : var_2)) : var_11)))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_29 = (~24081);
                                arr_25 [i_0] [i_1] [1] [i_0] [4] = ((-((-(arr_2 [i_0] [i_0])))));
                            }
                        }
                    }
                    var_30 = (min(var_30, (!192)));
                }
            }
        }
    }
    var_31 = (((~var_5) / var_3));

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_32 = (min(var_32, var_13));
        var_33 = -24;
    }
    #pragma endscop
}
