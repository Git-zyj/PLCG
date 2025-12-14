/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_5, var_15))) ? (min(var_12, var_9)) : var_15))) ? var_11 : (max((((var_5 ? -30 : var_12))), ((var_7 ? var_5 : var_0))))));
    var_17 = (max(((((((var_13 ? -25396 : var_4))) - (min(var_0, var_11))))), ((((var_7 ? 576460752303423488 : 25379)) | (((var_12 ? var_12 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((~(arr_2 [i_1] [i_0]))));
                arr_4 [i_0] [i_1] [i_1] = ((((!(((var_7 ? (arr_2 [i_0] [i_1]) : (-2147483647 - 1)))))) ? ((((!(arr_3 [i_0] [i_0] [i_1]))))) : ((max((!-1851582417456737197), (min((arr_2 [i_0] [i_1]), 100)))))));
            }
        }
    }
    var_19 = 1851582417456737197;
    #pragma endscop
}
