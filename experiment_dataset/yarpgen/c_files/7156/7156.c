/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 |= ((-(((arr_4 [i_1] [i_1] [i_0]) ? (arr_4 [i_1] [i_1] [i_1]) : (arr_4 [i_1] [i_0] [i_0])))));
                arr_5 [i_1] = ((!((min((((var_1 ? var_7 : 0))), (min(3, 2530942056842640820)))))));
            }
        }
    }
    var_15 = ((~(((((var_7 ? var_4 : var_13))) ? ((max(var_4, -122))) : (!var_1)))));
    #pragma endscop
}
