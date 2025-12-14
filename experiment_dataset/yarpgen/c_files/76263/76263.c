/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = ((((max(37, 230))) ? ((((arr_1 [i_0]) + (arr_0 [i_0])))) : (min((var_7 - 17735103872897555081), (max(var_1, (arr_0 [i_0])))))));
        var_11 = (max(var_11, (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] |= var_5;
                        arr_14 [i_4] [i_4] [i_1] [i_2] [i_1] = (((arr_2 [i_3] [i_1 - 2]) & (arr_4 [3] [i_1 - 2])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] = max((arr_9 [i_1 - 2] [i_5] [14]), ((-(arr_6 [i_1 - 1]))));
                        arr_18 [i_2] [i_3] [i_2] [i_1] = (arr_9 [6] [i_1 - 1] [i_3]);
                    }
                    arr_19 [i_3] = (arr_8 [i_1 + 1]);
                }
            }
        }
        var_12 = (min(var_12, var_4));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_23 [i_6] = ((((min((arr_8 [i_6]), var_9))) * ((max((arr_8 [i_6]), (arr_8 [i_6]))))));
        var_13 = (((arr_3 [i_6]) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (((arr_15 [i_6] [i_6] [i_6] [5]) / (arr_15 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_14 = var_4;
    #pragma endscop
}
