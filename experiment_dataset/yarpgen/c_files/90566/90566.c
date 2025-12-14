/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((arr_1 [i_0] [i_0]) ? (((!(arr_1 [i_0] [i_0])))) : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((((1051881260 == (arr_0 [i_0]))) ? (~var_7) : ((var_15 ? (arr_0 [i_0]) : var_0))));
        var_18 = (((arr_2 [i_0]) > (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((arr_2 [i_0]) ? -465487282 : (arr_1 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 ^= (((arr_10 [i_1 + 4]) ? var_11 : (arr_12 [i_1 - 1] [i_3] [2] [i_3] [i_3])));
                        var_20 = var_6;
                        var_21 = (max(var_21, var_6));
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_3] = (((((7646913875718847779 ? (arr_1 [i_0] [i_0]) : var_8))) || (arr_7 [i_1 - 2] [i_0])));
                        var_22 = (((((arr_1 [i_0] [i_1]) ? (arr_8 [i_0]) : var_16)) / (arr_6 [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_23 |= var_2;
    #pragma endscop
}
