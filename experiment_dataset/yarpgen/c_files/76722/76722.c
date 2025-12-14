/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= var_7;
                arr_5 [i_0 - 1] [i_0] [3] = ((((((max((arr_2 [0] [0] [0]), var_18))) && (((6310993515069513668 ? -3 : var_14))))) ? (arr_3 [i_1 - 1] [i_0 + 1] [i_0]) : (((max(2047, 1))))));
            }
        }
    }
    var_21 = (max(var_21, var_8));
    var_22 = var_16;
    var_23 += (var_5 / var_15);
    #pragma endscop
}
