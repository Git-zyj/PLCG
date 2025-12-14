/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_0] = (min(((((min(2572866764, (arr_2 [i_0] [11] [i_1])))) ? ((((arr_2 [i_0 + 3] [i_1] [i_1]) || var_7))) : (!var_4))), 0));
                arr_6 [20] [i_1 + 2] = ((746778153131555278 < (((((746778153131555278 >= 112) <= 231))))));
                arr_7 [1] = (max((max(8521215115264, (((arr_2 [i_0] [i_0 + 1] [i_0 - 1]) ? (arr_3 [8]) : var_6)))), (arr_3 [i_0 + 3])));
            }
        }
    }
    var_13 = max((((-(var_3 <= var_0)))), (((~6345183574006910444) ? ((var_2 ? var_8 : var_11)) : var_1)));
    var_14 = (max(var_14, (max((((-1 - var_4) ? var_4 : (var_3 / 18014398509219840))), -var_0))));
    #pragma endscop
}
