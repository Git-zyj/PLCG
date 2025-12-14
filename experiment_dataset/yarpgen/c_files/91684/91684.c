/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max((((((max(242, 51))) ? var_9 : var_15))), (max(var_17, (!40621)))));
                var_19 = (arr_0 [i_1]);
            }
        }
    }
    var_20 = var_10;
    var_21 = (max(var_21, ((max(-var_9, var_14)))));
    var_22 = (min(var_22, ((max(var_9, (((-(57939 <= 6130297200514193918)))))))));
    #pragma endscop
}
