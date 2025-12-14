/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (((((((24576 ? (arr_5 [i_0] [i_0]) : var_7)) * (((!(arr_4 [i_0] [i_1]))))))) ? (min((min(9223372036854775807, (arr_2 [i_2]))), var_5)) : var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = ((max((var_1 || 77), (!var_8))) && ((!((min(194, var_10))))));
                                var_13 = (max(((-(((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_9 [i_0] [i_1] [i_2] [i_1 + 1] [i_4] [i_0]) : var_7)))), (((1016462176 ? 1 : (arr_5 [i_3] [i_4]))))));
                            }
                        }
                    }
                    var_14 = (5032023465000173365 ? (min(24, 940)) : (min(4294967295, (arr_11 [i_0] [i_0] [i_0] [i_1 - 1] [i_2]))));
                }
            }
        }
    }
    var_15 = ((-((var_3 * (var_3 / 3278505093)))));
    var_16 = (min((min((max(1, 12093963625133353210)), 245)), var_5));
    #pragma endscop
}
