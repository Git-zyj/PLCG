/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 -= ((-(((arr_0 [i_2 - 2] [i_2 + 1]) ? (arr_0 [i_2 + 1] [i_2 - 4]) : var_11))));
                    var_16 = (max(var_16, ((max((((arr_6 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1]) ? (arr_6 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 4]) : (arr_6 [i_2] [i_2 + 1] [i_2 - 2] [i_2 + 1]))), ((max((arr_8 [i_0] [i_1] [i_0]), (var_1 - -5680231338864530845)))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = ((var_2 ? ((5680231338864530858 | (((min(var_12, 1)))))) : (~-105)));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 -= ((-20265 & (((-32767 - 1) % (arr_6 [i_3 - 1] [i_3] [7] [i_3])))));
                                var_19 = (max(var_19, ((((max((arr_12 [i_6] [i_6]), (arr_5 [i_7] [i_5] [i_4]))) / (arr_1 [i_3]))))));
                                arr_22 [i_4] [i_4] [i_5] [i_6] [i_7] = var_1;
                            }
                        }
                    }
                    arr_23 [i_3] [i_3] [i_4] = max((((arr_19 [i_3] [i_3] [i_3] [i_3 + 2] [i_3]) ? 5680231338864530858 : -2512966430522401153)), var_5);
                    arr_24 [i_3 + 3] [i_4] [i_4] = -2512966430522401153;
                }
            }
        }
    }
    var_20 -= (((((var_13 ? var_3 : 5680231338864530858))) & var_8));
    #pragma endscop
}
