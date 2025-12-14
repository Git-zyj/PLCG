/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((-17107 && var_9) + var_7)));
    var_15 = (min(var_13, (max(var_10, (var_4 + var_9)))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = -17107;
                var_17 = (((8464492047689949146 != 10526) ? -8092280525540651035 : (((-(7987 != 39785))))));
            }
        }
    }
    #pragma endscop
}
