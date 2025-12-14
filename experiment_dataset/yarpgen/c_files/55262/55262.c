/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 ^= arr_0 [i_0];
        var_22 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (min(((max((arr_1 [i_0] [i_0]), var_14))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_1 [i_1 - 1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = (arr_8 [i_2] [i_1] [i_2]);
                    var_24 |= ((-((57 | (arr_1 [i_1] [i_1])))));
                    var_25 = ((-(arr_0 [3])));
                }
            }
        }
        var_26 = ((37 != (arr_0 [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] [i_4 - 1] = ((((arr_11 [i_4] [i_4 + 2]) ? (arr_4 [i_4]) : var_5)));
        arr_13 [i_4 - 1] = (((arr_5 [6] [i_4 - 1] [i_4 + 1]) < (37 / -4634889835076125249)));
    }
    var_27 = ((var_13 & (min(((var_19 << (6343 - 6320))), var_2))));
    #pragma endscop
}
