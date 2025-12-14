/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((0 ? 148 : 31));
                var_15 = (min(var_15, ((min(((1073741824 ? 3065395514 : -17)), ((((arr_4 [3] [i_1 - 1]) ? var_4 : ((min(var_5, 9960)))))))))));
            }
        }
    }
    var_16 = 0;
    #pragma endscop
}
