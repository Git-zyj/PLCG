/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0 + 2] [9] = ((205 ? 8657976046256660895 : 255));
            arr_6 [i_1] = (-((4294967295 ? -28 : (arr_3 [i_0]))));
            arr_7 [i_0] = ((!(224469448245342214 ^ -224469448245342215)));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] [9] [i_4] [i_4] [i_5] [6] = ((var_9 ? (arr_3 [i_2 - 1]) : var_8));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            arr_20 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = 224469448245342214;
                            arr_21 [i_0] [13] [i_3] [i_4] [i_5] = var_9;
                        }
                    }
                }
            }
            arr_22 [i_0] [i_2] = (((arr_15 [i_2 + 2] [i_2] [i_0 + 1] [i_0 + 3]) - var_6));
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_27 [i_6] = ((~(!-44)));
            arr_28 [i_6] [i_0] = (!var_9);
        }
        arr_29 [i_0] = 29686;
    }
    var_11 |= ((9223372036854775807 + ((-((var_6 ? 9223372036854775802 : var_0))))));
    var_12 = var_0;
    #pragma endscop
}
