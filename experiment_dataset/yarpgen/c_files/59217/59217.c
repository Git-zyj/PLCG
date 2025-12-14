/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((min(0, 15780)))), (((((min(15796, 1))) > 39237)))));
    var_21 -= (((var_10 ? (((max(var_17, var_8))) : (min(var_3, 4294967295))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min(33, (arr_0 [i_0] [i_0 - 4])));
                arr_8 [i_0] [1] [i_0 - 2] = ((((max((arr_6 [i_0 + 2] [i_0 - 3]), (arr_5 [i_0] [i_0 - 1])))) - (min(14, -1))));
            }
        }
    }
    #pragma endscop
}
