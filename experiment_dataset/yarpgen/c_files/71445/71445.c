/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-45 ? var_4 : var_1);
    var_11 = (((!var_1) < 853490310));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (-((-(arr_1 [i_1]))));
                arr_6 [i_0] [i_0] [i_1] = ((((((arr_1 [i_1 - 1]) - (arr_2 [i_1 - 1])))) ? 853490310 : -189498119060921928));
                arr_7 [i_1] [i_1] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
