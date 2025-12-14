/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_14);
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (!var_8)));
                arr_4 [i_0] [i_1] = ((min((max(var_10, var_2)), var_15)));
            }
        }
    }
    var_20 = var_10;
    var_21 = ((!((max((!var_10), var_2)))));
    #pragma endscop
}
