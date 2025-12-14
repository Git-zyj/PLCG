/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [8] = var_6;
                                var_18 = (arr_1 [i_3] [i_4]);
                                arr_16 [6] [5] [i_2] [i_2] [i_2] [i_1] = 3241903338644738025;
                            }
                        }
                    }
                }
                var_19 = ((+(min((max((arr_11 [i_0] [i_1]), 18446744073709551615)), (arr_13 [i_0] [i_0] [i_1] [0] [2] [2] [i_1])))));
                arr_17 [5] [i_1] [i_1] = var_14;
            }
        }
    }
    var_20 |= var_17;
    var_21 |= var_11;
    var_22 = (min(var_22, ((((var_17 ? var_14 : var_10))))));
    var_23 = 141357029755124129;
    #pragma endscop
}
