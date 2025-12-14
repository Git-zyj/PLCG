/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = ((!((((arr_0 [i_1]) ? var_17 : var_17)))));
                var_23 = (arr_0 [i_1]);
                var_24 = ((((14 ? 1206867764 : -12786)) > ((min(((-(arr_0 [i_0]))), (22890 | 4032))))));
            }
        }
    }
    #pragma endscop
}
