/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (max((((arr_2 [i_0] [i_0]) ? (~var_2) : (((arr_1 [i_0] [i_0]) + 11296988626414825396)))), ((((var_9 != var_0) > (var_2 != var_6))))));
        arr_5 [i_0] = ((~(((~11296988626414825403) ? -7149755447294726219 : var_8))));
        arr_6 [11] = var_9;
        arr_7 [i_0] [17] &= ((((!(arr_1 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) + -var_4))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = ((((!(arr_8 [19]))) && var_4));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_2] [15] = var_8;
            var_11 = ((var_3 >> (((((arr_11 [i_2]) ? var_6 : var_7)) - 43090))));
        }
        arr_14 [i_1] [i_1] = (((~var_3) ? (arr_11 [i_1]) : (arr_8 [i_1 + 1])));

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_12 = (min(var_12, (((260680064 ? 127 : -9141122580764004402)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_27 [i_5] [i_3] [i_5] [i_5] = (!var_8);
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_5] = (~var_9);
                        arr_29 [i_3 + 1] [i_1 - 2] [i_4] [i_5] = (((7149755447294726220 && var_0) ? (arr_8 [i_3]) : (arr_21 [i_1 + 3] [i_1 + 3] [i_3 + 2] [i_5 - 1])));
                        arr_30 [i_5] = (arr_26 [0] [15]);
                        var_13 = var_6;
                    }
                }
            }
        }
    }
    var_14 = (max((((((var_5 ? var_9 : var_3)) != var_4))), ((var_2 ? var_9 : var_0))));
    #pragma endscop
}
