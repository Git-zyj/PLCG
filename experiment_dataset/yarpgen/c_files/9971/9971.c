/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((!var_1), (max((~var_7), (~-628)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (((arr_0 [i_0] [i_0]) != var_2));
            var_15 |= (((arr_1 [i_0] [12]) <= 681054890));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_2] [i_2] [i_3] [i_3] = var_12;
                        arr_10 [i_1] [i_1] [i_1] [i_0] = (((arr_6 [i_0] [i_1] [i_2] [i_3]) >= (var_12 && var_7)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_13 [5] = (arr_6 [5] [i_0] [i_0] [i_0]);
            var_16 *= ((!(arr_11 [i_0])));
        }
        arr_14 [i_0] = 60;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_17 = (~var_10);
                    arr_20 [i_6] [12] [i_6] [i_6] &= -61;
                    arr_21 [i_6 + 1] [i_6] [i_5] [i_0] = (arr_18 [i_6 - 1] [i_5 - 1]);
                    var_18 *= (((((var_10 ? var_0 : 1))) ? (arr_4 [i_6]) : 0));
                }
            }
        }
    }
    var_19 = (min(((60 ? var_12 : ((60 ? 60 : var_1)))), 60));
    var_20 = -729601621;
    var_21 *= var_1;
    #pragma endscop
}
