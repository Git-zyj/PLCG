/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_7;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [0] [0] [i_2] [i_3] [i_1] [i_3] [i_4 + 1] = (~-2053704061);
                                var_19 -= ((((((arr_9 [i_4 + 1] [17] [i_2 - 1] [i_3 - 2]) ? 36689 : (((arr_13 [i_0] [i_1] [i_2] [0] [10] [i_2 - 2]) ? (arr_7 [i_0] [i_0] [i_0 - 1]) : var_12))))) ? (((min((!25925), var_6)))) : (min(((min((arr_10 [i_0] [i_1] [i_2] [14] [1]), var_17))), var_3))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_3, var_12));
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            {
                arr_19 [i_6] [i_6 - 2] [0] = (min(-16351, 203));
                var_22 = ((!(((185 ? var_8 : 6633357277489219552)))));
            }
        }
    }
    #pragma endscop
}
