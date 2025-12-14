/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((181 != (max(var_0, var_9))));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (((arr_5 [i_0] [i_0]) + (arr_2 [i_0] [i_0])));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_13 = (min(var_13, ((((!var_2) ? 29075 : var_2)))));
                    var_14 = (min(var_14, (max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            var_15 = (max(var_15, var_5));
            var_16 = -3340;
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_17 = (min(var_17, (arr_12 [2] [i_3])));
            arr_15 [i_3] [i_5] [i_5] = var_6;
            arr_16 [i_3] [i_5] [8] &= 18446744073709551615;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_18 = (min(var_18, (((((arr_14 [i_3] [i_6]) * (arr_18 [i_6])))))));
            var_19 = (arr_14 [i_3] [i_3]);
        }
        arr_19 [i_3] &= (((arr_14 [i_3] [i_3]) ? 65535 : (arr_17 [i_3] [i_3] [i_3])));
    }
    #pragma endscop
}
