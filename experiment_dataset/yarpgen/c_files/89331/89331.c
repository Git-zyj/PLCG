/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 502260556;
    var_17 |= (((((max(var_7, 9)) >= var_5)) ? -86 : var_11));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = ((-((-(arr_2 [i_0 + 2])))));
        var_19 = (arr_2 [i_0]);
        var_20 = (((15 >= 126) >> (((((var_5 ? 8186361210909966276 : var_4))) - 8186361210909966271))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = max((((((arr_3 [i_1]) == 31)))), ((~(max((arr_3 [i_1]), var_12)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_22 ^= (((arr_3 [14]) ? ((((arr_11 [i_1] [i_2] [i_2] [i_4]) - (arr_5 [i_2] [i_4])))) : (arr_10 [i_3] [i_2] [i_3] [i_3])));
                        var_23 = ((!(arr_11 [i_1] [i_2] [i_3] [i_4])));
                    }
                }
            }
            var_24 = ((arr_4 [12] [i_2]) ? (arr_5 [i_1] [i_2]) : (arr_5 [i_1] [i_1]));
            arr_12 [i_2] [i_2] [13] = (arr_6 [i_1] [i_1] [i_1]);

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_25 = (arr_11 [i_5 + 2] [i_2] [i_2] [i_1]);
                arr_15 [i_1] [i_2] [2] = (arr_11 [i_5 - 2] [i_1] [i_1] [i_1]);

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_18 [i_1] [i_2] [i_5] [i_1] |= (arr_8 [i_1] [i_2] [i_5 + 2] [i_6]);
                    var_26 = (max(var_26, (arr_3 [i_6])));
                    var_27 = (arr_9 [i_6] [i_1] [i_1] [i_1]);
                }
                arr_19 [i_1] [i_2] [i_5 + 2] = ((((((arr_14 [i_2] [i_2] [i_2]) ? -633511821237719396 : 205))) ? ((((!(arr_7 [i_2] [i_2]))))) : (((arr_8 [i_1] [i_2] [i_1] [i_1]) - (arr_3 [i_1])))));
            }
        }
        var_28 = (max(var_28, (((((((arr_14 [i_1] [i_1] [i_1]) ? (arr_14 [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_1] [i_1])))) ? (!12280) : var_7)))));
    }
    #pragma endscop
}
