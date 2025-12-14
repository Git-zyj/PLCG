/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_2) ^ (((~var_1) ? (~var_2) : ((var_9 ? var_7 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (-(((((var_7 ? (arr_9 [i_0] [i_1] [i_0] [i_3]) : (arr_12 [i_2])))) ? ((var_7 - (arr_11 [i_0] [i_0]))) : ((((arr_8 [i_0] [i_1] [i_1] [11]) && (arr_9 [i_3] [2] [i_1] [i_0 - 1])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = min((arr_0 [i_0]), ((~(((((arr_4 [i_4]) + 9223372036854775807)) >> (((arr_9 [8] [i_1] [3] [i_3]) - 2889008994)))))));
                            }
                        }
                    }
                    arr_14 [i_0] [1] [i_0] = (min(((var_6 ? (arr_11 [i_0 + 2] [i_1 + 2]) : var_2)), (((((max(var_9, (arr_11 [i_1] [i_2])))) && ((var_4 && (arr_0 [i_1 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
