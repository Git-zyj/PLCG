/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_9, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (((((-(arr_8 [i_0] [7] [8] [9])))) ? var_1 : var_9));
                    arr_9 [i_2] [i_1] = ((!(!var_8)));
                    var_15 = (max(3289731174856384427, 15157012898853167188));
                }
            }
        }
    }
    var_16 = -15157012898853167188;
    var_17 = ((var_9 ? (!3289731174856384425) : (max((min(var_0, var_6)), var_6))));
    var_18 = var_10;
    #pragma endscop
}
