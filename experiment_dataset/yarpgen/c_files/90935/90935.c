/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(((max(113, 0))), (((((0 ? (arr_2 [i_0]) : 1))) ? 255 : 1))));
                var_19 = ((-(((arr_4 [i_0 - 1] [i_1]) ? var_12 : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
