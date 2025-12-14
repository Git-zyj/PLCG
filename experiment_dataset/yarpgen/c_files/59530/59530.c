/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (max(var_18, var_15));
    var_19 = (max(var_19, (((4106523219 ? 4106523219 : 19)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 -= (~-var_8);
                var_21 = ((((!(arr_1 [i_1 + 4]))) ? (arr_1 [i_0]) : (arr_3 [i_0])));
            }
        }
    }
    #pragma endscop
}
