/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((((min(var_11, var_15))) ? var_1 : ((var_9 ? 7 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((((!(arr_0 [i_0])))) <= (arr_0 [i_0]))))))));
                    arr_10 [i_0] = var_17;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [3] [i_1] [i_4] [i_4] = var_12;
                                var_20 = (((~var_5) - (arr_14 [i_2] [i_2] [i_2])));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [20] = (arr_0 [i_1]);
                                var_21 = (max(var_21, (~4494023208979469730)));
                            }
                        }
                    }
                    var_22 = (max((((((arr_15 [i_0] [i_0] [15] [i_1] [i_2] [i_2]) ^ (arr_8 [i_2] [13] [i_1] [2]))))), (max((min((arr_7 [i_0] [15] [i_0]), 18446744073709551615)), (min(1044070470, 16928357116857842975))))));
                    var_23 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
