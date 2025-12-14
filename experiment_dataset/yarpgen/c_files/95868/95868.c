/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((63 ? 1 : var_1))) ? 7276083964492894986 : (arr_5 [i_1])))))));
                    var_12 = (min(var_12, ((max((min((arr_1 [i_0]), 203)), (max((arr_1 [i_1]), (arr_1 [i_1]))))))));
                    var_13 = (max(var_13, ((max((~var_6), ((0 ? (arr_2 [i_0]) : var_2)))))));
                }
            }
        }
    }
    var_14 = (max(var_14, ((min(var_8, (((~var_4) ? var_2 : var_10)))))));
    #pragma endscop
}
