/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((((-(max((arr_1 [i_0]), var_7))))) ? (((-6832700908030899786 + 9223372036854775807) << var_9)) : var_2));
            arr_6 [i_1] [i_0] [i_0] = (arr_0 [i_0]);
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] = var_8;
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((((((arr_10 [i_0] [i_2 + 1] [i_3] [i_4]) ? (arr_9 [i_4] [i_3] [i_0] [i_0]) : 0))) && (arr_9 [i_0] [i_0] [i_0] [i_4])));
                    }
                }
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_20 [i_5] [i_5] [i_5] = (((arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? 6378 : var_7));
                arr_21 [i_0] [i_2 + 2] [i_5] [i_5] = (~6291456);
                arr_22 [i_5] [i_2] [i_2] [i_0] = (arr_1 [i_0]);
                arr_23 [i_0] [i_0] [i_0] = ((var_10 ^ (arr_19 [0] [i_2 + 2] [i_5] [i_5])));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_26 [i_0] [i_2] [i_2] [i_6] = (arr_4 [i_2 + 1] [i_2 + 1] [8]);
                arr_27 [i_0] [i_2] [i_6] = (arr_19 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2]);
            }
        }
        arr_28 [i_0] [i_0] = (min((max((arr_19 [i_0] [i_0] [i_0] [i_0]), 274877905920)), (((-(arr_4 [i_0] [i_0] [i_0]))))));
    }
    var_14 = ((-(min(var_0, var_10))));
    #pragma endscop
}
