/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = 1814110161;
                var_16 = (arr_0 [i_0]);
                arr_5 [i_1] [i_1 - 3] = (min(((((min(1814110161, (arr_3 [i_0] [i_0] [i_0])))) ? (min(17, (arr_2 [i_0] [0]))) : ((max(var_14, (arr_1 [i_1] [11])))))), (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_17 = ((((max(794040525, var_3))) ? (((((var_13 ? -2149059023735004357 : var_8))) ? var_2 : (-786473224 / var_12))) : var_13));
    #pragma endscop
}
