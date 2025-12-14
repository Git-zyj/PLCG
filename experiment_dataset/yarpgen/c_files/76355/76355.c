/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_3] [13] [i_1] [i_1] [i_1] [1] = (max((~var_8), (max((((arr_8 [i_1] [1] [i_2] [i_3]) ? 50 : (arr_9 [i_1]))), (!var_9)))));
                        var_11 &= (((arr_2 [i_0]) ? (~48) : (max((((arr_3 [i_0] [i_1] [i_3]) ? var_1 : 224)), ((min(var_7, 203)))))));
                    }
                    arr_13 [i_1] [i_1] [16] [i_0] = (min(((max(-var_7, (!76)))), (min((min(1369276218, var_9)), (max(30, 536870848))))));
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_18 [i_5] [i_5] = ((max(1368627183, ((var_5 ? 137304735744 : 2926340140)))));
            var_12 = (max(((+(((arr_1 [i_5]) ? var_4 : 220)))), ((-((-(arr_3 [15] [i_4] [i_5])))))));
            arr_19 [i_5] = ((!(((-(max((arr_11 [i_4] [i_5]), (arr_7 [20] [i_5]))))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_26 [i_7] [i_7] [i_7] [i_7] = (max((((!((((arr_22 [i_4] [i_6] [i_7] [i_7]) ? 63578 : var_8)))))), (((arr_16 [i_6] [i_7] [i_4]) ? (arr_4 [i_4 + 3] [i_6]) : var_0))));
                        var_13 ^= (min((~var_2), (((!(arr_14 [i_4 - 2] [i_4 - 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
