/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = 14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [14] [i_0] [i_0] [i_0] = ((((((max(65521, -1)) >= -65535))) % ((max((15 || var_2), var_7)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [1] = ((+((max((arr_7 [i_0] [15] [i_2] [i_3]), (arr_7 [9] [8] [9] [i_3]))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [6] = var_10;
        arr_18 [i_4] = (!127);
        arr_19 [i_4] = (((arr_16 [i_4] [i_4]) & (((((var_11 + (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((!((((((var_3 ? (arr_26 [i_4] [5] [i_5] [i_6]) : 0))) ? (((max((-127 - 1), (arr_22 [i_5] [i_5] [i_4]))))) : (min((arr_26 [i_4] [i_4] [i_5] [i_6]), (arr_24 [i_6] [i_6] [i_4] [i_4]))))))));
                    arr_28 [i_6] [12] [i_5] [i_6] |= (((var_0 / 14) ? (min(-9223372036854775807, ((((-127 - 1) || -1))))) : ((min((arr_23 [i_6]), (arr_23 [3]))))));
                }
            }
        }
    }
    #pragma endscop
}
