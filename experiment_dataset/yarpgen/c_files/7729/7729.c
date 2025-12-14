/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -31;
    var_11 = (max(var_11, ((min(var_8, var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((1710271957 ? ((max(var_9, -2))) : (max((-30925 * var_7), (arr_0 [i_0])))));
                    var_13 = (((((2070 ? 6150474017931990192 : 0))) && (-2147483647 - 1)));
                    var_14 = (min(var_14, (arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [20] [i_1] [20] [20] [i_1] |= (((((((max(26, 42))) + -30925))) / (((((var_9 ? var_3 : 42725))) ? (max(-3360, 3360636450987473926)) : ((15086107622722077690 ? (arr_5 [i_0] [i_0] [i_4]) : var_0))))));
                                var_15 = (((((~(var_8 ^ var_0)))) ? (max((((arr_6 [i_2] [i_1]) & 0)), 752)) : ((3360636450987473921 << (((arr_9 [i_4] [i_1] [i_4] [i_3] [i_3]) + 76))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((!(~var_6))) && ((((max(15086107622722077690, 3)) ^ var_7)))));
    var_17 += (((((2108592339403546858 ^ 2108592339403546858) ? var_6 : 2147483647))) >= ((((max(-9398, 2108592339403546871))) ? (~14297068592531614143) : var_8)));
    #pragma endscop
}
