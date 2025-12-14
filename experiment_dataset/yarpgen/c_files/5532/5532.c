/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = min((((-1932298611 ? 8 : -448706270))), (min((arr_1 [i_0] [i_1]), (max(646612836, -448706292)))));
                arr_5 [i_0] = (!232);
                arr_6 [i_0] [14] [0] = ((var_11 ? 1960835415 : (arr_3 [i_0])));
                arr_7 [i_0] [i_1] = arr_2 [i_0] [i_1];
                var_20 = (arr_0 [i_0]);
            }
        }
    }
    var_21 += var_14;
    #pragma endscop
}
