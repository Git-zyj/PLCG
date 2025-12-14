/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (max((var_5 % var_12), ((253 ? 2 : 126))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((~(arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 += var_3;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_4] [14] [i_4] = ((((253 ? var_10 : (arr_2 [i_0]))) >= var_9));
                            var_17 = (max(var_17, 4315));
                            var_18 = (max(var_18, (var_6 >> var_10)));
                            arr_14 [24] [i_1] [i_2] [24] [i_4] [i_2] [i_4] = ((-(arr_11 [i_2 + 1] [i_2 + 1] [i_2])));
                            var_19 = (var_7 & 2);
                        }
                    }
                }
            }
            arr_15 [i_0] = (arr_8 [i_0] [i_1] [i_1] [13]);
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_20 = ((arr_9 [i_5] [i_5] [i_5] [i_5]) != ((min((arr_9 [i_5] [13] [1] [23]), (arr_9 [i_5] [i_5] [i_5] [i_5])))));
        var_21 += ((((((((var_4 ? (arr_8 [1] [i_5] [i_5] [i_5]) : 4315))) ? (((max(1, 68)))) : (var_8 + var_8)))) ? (min(((var_12 ? var_9 : var_5)), var_5)) : 126));
        var_22 = ((var_5 + ((-(arr_1 [i_5])))));
        var_23 |= ((-(((!(((var_0 ? var_4 : (arr_9 [i_5] [i_5] [i_5] [i_5])))))))));
    }
    #pragma endscop
}
