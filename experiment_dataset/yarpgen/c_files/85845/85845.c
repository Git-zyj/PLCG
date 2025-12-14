/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((((2270308181 ? (max(var_8, var_5)) : (max(var_8, (arr_4 [i_0] [i_0] [i_0] [i_0])))))) ? ((+(((arr_3 [i_1]) | var_6)))) : var_3));
                    var_16 += ((-(((2024659115 && (arr_6 [i_0] [i_0 + 2] [i_2 - 1] [i_2]))))));
                    var_17 |= (arr_1 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
