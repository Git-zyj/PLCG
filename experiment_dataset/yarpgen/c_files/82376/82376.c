/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8192;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [5] [5] [i_0] = (min((((((var_8 ? var_2 : (arr_1 [i_0] [i_1]))) < 2))), ((var_0 ? (arr_1 [i_0] [i_1 + 2]) : (arr_1 [i_1] [i_1 + 2])))));
                var_13 = ((-(((((arr_3 [i_0]) / -1078594357)) - (arr_3 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = (((((!(arr_3 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
