/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((~(~var_8)))) ? (max((var_1 | var_7), 221)) : (~var_3))))));
    var_12 |= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [10] [i_1] = arr_1 [i_1];
                    arr_9 [2] [i_1] [i_0] = (min(((((!(arr_2 [i_1] [8]))) ? ((48744895 ? var_7 : (arr_2 [i_2] [i_0]))) : var_5)), (max((arr_2 [i_0] [i_1]), ((((arr_1 [1]) ? var_7 : (arr_7 [i_0] [i_0] [i_0] [5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
