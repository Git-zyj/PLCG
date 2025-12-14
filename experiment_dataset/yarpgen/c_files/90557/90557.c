/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_8));
                arr_6 [i_1] [i_1] [i_0] = (((!6140284440834127164) ? var_2 : 3909063446));
                arr_7 [i_0] [i_1] = (((min((var_10 / var_8), (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : var_11)))) & 149));
            }
        }
    }
    var_14 = (((!var_4) ^ var_10));
    var_15 = ((-(min(123, 1))));
    var_16 = ((min(var_4, (min(1, var_5)))));
    #pragma endscop
}
