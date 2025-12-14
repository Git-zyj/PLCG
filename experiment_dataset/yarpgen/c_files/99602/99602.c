/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 104;
        var_15 = (((((-9223372036854775807 - 1) | (arr_1 [i_0] [i_0]))) | (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 = 3846371577;
                                arr_16 [i_5] [i_4] [i_4] [i_1] [i_1] = 18816;
                            }
                        }
                    }
                    arr_17 [i_3] [i_3] [i_2] [12] = (arr_4 [i_3]);
                    var_17 = 32767;
                }
            }
        }
        var_18 = ((18816 ? (1 | -32794) : 28066));
    }
    #pragma endscop
}
