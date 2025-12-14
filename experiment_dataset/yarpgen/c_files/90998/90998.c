/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max((((max(var_7, var_7)) - -71)), ((((max(var_1, var_3)) - var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] = ((32 & (((((-50 ? -64 : 2))) ? (~-235664409) : 32672))));
                            var_12 = (max(var_12, (arr_7 [i_0])));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_0] = (((1 ? ((17 ? (arr_17 [i_0]) : 47)) : 11)) << ((((min((arr_5 [i_1] [i_1]), (arr_4 [i_4 - 2] [i_4 - 2])))) - 109)));
                    var_13 += ((!((max((arr_8 [i_0] [i_0]), 251)))));
                }
            }
        }
    }
    var_14 = (min(var_14, ((((((var_8 * ((min(-51, -17734)))))) ? var_7 : (((max(var_8, ((min(var_1, -28))))))))))));
    #pragma endscop
}
