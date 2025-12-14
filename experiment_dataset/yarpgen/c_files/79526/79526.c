/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (arr_2 [i_0]);
                    arr_9 [i_1] [i_1] [i_1] = (arr_5 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (arr_12 [i_3]);
        arr_14 [i_3] = (1802648430 + 13);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_3] [1] [i_4] [1] = (max((max((arr_12 [i_3 - 2]), (arr_17 [i_3] [i_4] [12]))), (arr_10 [i_3])));
                    var_16 = (max(var_16, (((-4720286943102317552 && (arr_2 [i_3]))))));
                    var_17 = (arr_10 [i_3]);
                }
            }
        }
        arr_20 [i_3] = min(4720286943102317568, -8875437620292223822);
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_6] [i_7] [i_7] = max((arr_4 [i_7]), (arr_1 [i_6] [i_6]));
            arr_28 [i_6] [i_7] [i_7] = 504;
            arr_29 [i_6] [i_7] [i_6] |= -8875437620292223821;
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            var_18 = (arr_12 [i_6]);
            var_19 |= (arr_24 [i_8]);
            var_20 = (((arr_26 [i_8 - 2] [i_8 - 2] [i_8 - 1]) && 1));
            var_21 = (arr_21 [i_6]);
        }
        var_22 = 572082073;
    }
    #pragma endscop
}
