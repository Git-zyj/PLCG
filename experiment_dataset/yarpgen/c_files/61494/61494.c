/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max(8191, 1));
    var_15 = (((8191 * 639432656) ? ((max(var_4, var_13))) : var_2));
    var_16 = var_10;
    var_17 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(((~(arr_1 [i_0]))), 55599));
                arr_7 [i_0] [i_0] = (max((((!(((1278099720 ? 1 : 0)))))), (((!11761346905684124921) ? (arr_4 [i_0]) : (!-34)))));
                var_19 = (max(var_19, ((max(var_3, ((~(arr_2 [1]))))))));
                arr_8 [i_0] [i_1] [i_1] = ((-((22961 ? ((4817 ? var_4 : -8191)) : 3))));
            }
        }
    }
    #pragma endscop
}
