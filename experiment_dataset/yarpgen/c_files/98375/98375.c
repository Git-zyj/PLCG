/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((229924218116741078 ? (var_12 > var_5) : var_1));
    var_17 = 3247618193;
    var_18 = (max(var_9, var_12));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [10] = (arr_0 [i_0] [6]);
        var_19 = 1;
        var_20 = 50089;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        arr_6 [i_1] = (((max(var_1, (-32767 - 1)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = ((-229924218116741080 % (((73 ? 1047349102 : 4095)))));
                            arr_18 [i_4] = ((-(max((arr_11 [i_2 + 1]), (arr_9 [i_2] [i_3])))));
                        }
                    }
                }
                arr_19 [i_2] [i_2] [i_3] = (arr_4 [i_2]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_27 [i_2] [10] [i_6] [4] [i_3] [i_2] = 127;
                            arr_28 [i_6] [i_3] [i_6] [i_3] = (~3210260267);
                            arr_29 [i_2] [7] [7] [i_6] = ((-(max(var_6, 402190259))));
                            var_22 = (max(var_22, (((((max((arr_0 [i_3] [i_6]), (arr_0 [11] [i_3])))) <= ((2227893157 ? 12633 : 0)))))));
                            arr_30 [i_6] [8] [8] [i_3] [i_6] = ((((!(arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_7]))) ? var_1 : 50110));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
