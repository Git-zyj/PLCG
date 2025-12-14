/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (((-1023 / var_4) ? (max(1, (10023145772971881540 * var_3))) : var_8));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (!4568589705968845330);
                arr_6 [i_0 + 1] [i_0] [11] = max((max(var_3, (((arr_1 [1]) - (arr_4 [i_0] [i_0] [i_0]))))), (arr_4 [i_0 - 1] [i_0 + 1] [i_0]));
                arr_7 [i_0] [i_0] [i_0] = ((((max((arr_3 [i_0] [i_1]), (arr_0 [i_1])))) ? (arr_4 [i_1] [i_1 - 2] [i_0]) : (((1 ? 7704264606227326706 : var_3)))));
            }
        }
    }
    var_13 = 0;
    #pragma endscop
}
