/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((var_4 ? (max(var_6, 14334805390958953938)) : (~60934)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-((0 ? (arr_0 [i_0] [i_0]) : 37811)))));
        arr_3 [i_0] [i_0] = (max((!var_1), 13));
        arr_4 [i_0] = 17821632982072225433;
        var_17 = var_15;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (arr_1 [i_1]);
        var_19 = var_8;
        arr_7 [i_1] = ((~((min((-32767 - 1), 17517)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_3] = ((!((((arr_0 [i_3] [i_4 + 1]) ? (~17800) : (((arr_11 [i_3] [i_2] [i_3 + 1] [i_3]) - var_8)))))));
                        arr_16 [i_1] [i_3] = ((!(((((((((arr_13 [i_1] [i_2] [9] [i_3 - 1] [i_2]) + 2147483647)) << (29204 - 29204)))) / (arr_9 [i_1] [i_1]))))));
                    }
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
