/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(((((((87 ? var_11 : var_8))) < var_3))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (((arr_8 [i_0] [i_0 + 2] [i_0]) * (arr_8 [i_0] [i_0 + 1] [3])));
                            var_16 = ((!(arr_3 [i_0 + 1])));
                        }
                    }
                }
                var_17 = (max((((arr_10 [8] [i_0 - 1] [i_0 + 3]) ? (arr_9 [i_1]) : 0)), (((arr_7 [i_0 + 2] [3]) ? (arr_7 [i_0 + 1] [i_1]) : (arr_9 [i_1])))));
            }
        }
    }
    #pragma endscop
}
