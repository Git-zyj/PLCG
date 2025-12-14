/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 32762;
    var_15 = ((-1 ? 45 : 7763530924914850515));
    var_16 = ((((min(((var_8 ? var_13 : var_4)), ((min(var_10, -32760)))))) ? ((min((var_8 == var_13), (-32767 - 1)))) : var_13));
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [5] [i_0] = var_11;
                arr_5 [i_0 + 2] = arr_3 [13] [i_1] [20];
            }
        }
    }
    #pragma endscop
}
