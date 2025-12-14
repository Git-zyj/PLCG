/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max(var_9, -99))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 4] = (-22762 + 252201579132747776);
                    arr_10 [i_0] [i_2] [i_2] [i_0] = (((arr_0 [i_2 + 4]) & (arr_5 [i_1] [i_0])));
                    var_12 = 252201579132747782;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] = -32155;
                                var_13 = (((arr_15 [i_2 + 3] [i_2 + 2] [i_2] [i_3 + 2] [i_4 + 2]) ? var_7 : var_7));
                                var_14 = (min(var_14, ((((((var_4 ? (arr_12 [i_0] [i_1] [i_2] [i_2] [i_4]) : var_5))) ? (arr_13 [14] [i_1] [i_2] [i_3] [i_4]) : var_10)))));
                            }
                        }
                    }
                }
                var_15 = (min((75 || 7217657846625371055), ((((min(var_5, var_6))) ? (((arr_8 [i_0] [i_0] [i_0]) ? var_5 : 61395)) : (!var_2)))));
            }
        }
    }
    var_16 = var_10;
    var_17 = (min(var_17, (((((((18194542494576803842 ? -99 : -1)) + 2147483647)) >> (var_9 - 698746680))))));
    #pragma endscop
}
