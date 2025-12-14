/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = var_14;
                    arr_8 [i_1] = ((7828080929672745759 - (((-(arr_5 [i_0] [i_1 + 1] [i_2] [i_0]))))));
                }
            }
        }
    }
    var_18 = ((((min((!var_14), var_1))) ? ((1048576 ? 7828080929672745759 : var_0)) : var_10));
    #pragma endscop
}
