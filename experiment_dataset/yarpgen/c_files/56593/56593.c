/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = 1507026424;
        var_18 += 9;
        var_19 = ((var_6 ? (((!(arr_1 [i_0] [i_0])))) : (!105111951)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_5 [7] = ((!(!var_14)));
        var_20 = -10;
        arr_6 [i_1] = (min((((((-20455 ? 87 : 49152))) ? (arr_3 [i_1]) : ((var_6 ? var_3 : (arr_3 [i_1]))))), var_6));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((!((max((arr_7 [i_2]), var_3)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = var_0;
                                var_22 &= (!var_10);
                                var_23 += (arr_7 [0]);
                                arr_20 [i_4] [i_2] [2] [12] [i_4] = var_11;
                            }
                        }
                    }
                    var_24 = -10;
                }
            }
        }
        arr_21 [i_2] = (min(((((min(595336661, -5218))) ? 2508 : ((max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]), -32758))))), (arr_13 [i_2] [i_2] [i_2] [i_2])));
    }
    var_25 = -31584;
    #pragma endscop
}
