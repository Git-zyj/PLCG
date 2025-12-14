/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min((var_3 + var_1), ((var_6 ? var_5 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((((!(arr_1 [i_0] [i_0 + 3]))) ? (arr_0 [1] [i_0 + 3]) : ((((arr_1 [i_0 + 3] [i_0 + 3]) != (arr_1 [16] [i_0 + 3]))))));
                arr_4 [i_0] [i_0] = ((~(arr_3 [i_0] [i_1])));
            }
        }
    }
    var_18 = (max(var_7, var_8));
    var_19 = var_10;
    var_20 = (~1);
    #pragma endscop
}
