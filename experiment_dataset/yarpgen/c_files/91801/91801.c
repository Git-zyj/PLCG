/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, var_3));
                arr_4 [4] [4] [i_0] = (min(((max(-1080884048, ((1 << (549755813887 - 549755813881)))))), (max((max(11736, -549755813888)), (((var_7 + (arr_0 [i_0]))))))));
            }
        }
    }
    var_16 = ((((max((min(-30843, var_11)), (((var_4 ? var_8 : var_9)))))) != -549755813886));
    #pragma endscop
}
