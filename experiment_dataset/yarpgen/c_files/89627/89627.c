/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 72441353;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max(((-(max(var_12, 72441353)))), (min(((0 ? var_12 : var_9)), 29))));
                arr_8 [i_0] [i_1] [i_1] = var_14;
                var_18 = ((255 ? ((32766 ? var_1 : var_4)) : 127));
                var_19 = (max(((29 ? 16836 : 7)), -23));
            }
        }
    }
    var_20 = (!29);
    #pragma endscop
}
