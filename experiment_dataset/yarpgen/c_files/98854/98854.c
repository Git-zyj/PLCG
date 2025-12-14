/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= 941;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 |= (min((arr_6 [8]), -47976457));
                                arr_13 [6] [20] [i_2] [i_2] [i_2] [i_4] = arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_2];
                                var_21 = ((((((arr_8 [i_1] [i_1 - 2] [i_4 + 1] [i_4 + 1]) ? -941 : (arr_8 [1] [i_1 - 1] [i_4 + 1] [i_4 + 1])))) ? (var_2 * 1) : (64528 - var_15)));
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((((-930 - (var_3 + var_12))) <= (((arr_0 [i_1 + 1] [i_1 + 1]) ^ (!-939)))));
                }
            }
        }
        var_22 = ((((((var_13 * (arr_5 [1] [i_0]))))) / -var_5));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] = ((!(((~(!var_12))))));
        arr_18 [i_5] = (max(var_13, 64544));
        arr_19 [i_5] = (!var_18);
    }
    #pragma endscop
}
