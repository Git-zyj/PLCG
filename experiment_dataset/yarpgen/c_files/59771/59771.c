/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 < var_1);
    var_11 = ((-10531 ? ((min(var_1, (var_3 + var_1)))) : ((var_4 ? -1 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((255 ? -933868152684756292 : 8628373489521618762));
                    arr_9 [i_2] [i_2] [i_0] = (min(((((arr_3 [i_0 + 4]) ^ (arr_0 [i_0])))), ((-((1 ? 8628373489521618762 : 29))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = (max(var_13, (arr_0 [i_1])));
                        arr_13 [i_0] [9] [10] [i_3] [i_3] = (((~34359738367) != ((12813452179678825761 ? 24 : 0))));
                        arr_14 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = ((4294967294 ? (min(-1656752631802502861, (arr_7 [i_0 + 3] [i_0] [i_2]))) : ((((max(1, 1)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] = (((arr_3 [i_0 - 1]) ? 11503 : 16));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_21 [8] [8] [i_2] [i_2] [8] |= ((!(arr_15 [i_0] [i_1])));
                            var_14 = ((-((((arr_20 [i_4]) < (arr_10 [1] [i_0 + 3]))))));
                            var_15 = -3155070215655116109;
                        }
                        var_16 = (min(var_16, ((1299165428 != (arr_0 [i_2])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((arr_16 [i_0 - 1] [i_0 + 3]) ? ((((((arr_10 [i_0] [i_0]) ? var_0 : var_0))) ? (((((arr_10 [i_0] [i_2]) >= (arr_12 [i_0] [6] [7] [i_0]))))) : (min(var_6, (arr_5 [i_0]))))) : ((((((~(arr_10 [i_0] [i_1])))) ? 1 : ((var_2 ? -8828 : var_4))))));
                        var_17 = -7681;
                    }
                    arr_26 [i_0] [i_0] = (((((~((34359738367 ? (arr_17 [i_0] [9] [i_0]) : (arr_23 [i_0] [i_1])))))) ? 4294967268 : (max(((34359738383 ? 18446744039349813233 : var_3)), 28))));
                }
            }
        }
    }
    var_18 = (((max(var_1, var_6))) ? (~var_2) : ((((max(var_5, var_4))) ? (var_1 + var_8) : var_2)));
    #pragma endscop
}
