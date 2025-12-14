/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (min(var_10, (min(((min(var_11, var_2))), ((var_9 ? var_4 : var_16))))));
    var_19 = ((var_13 ? (min(var_12, (var_10 * 2147483647))) : (((!var_6) ? var_4 : (595045864 > var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((-(((!(arr_0 [i_1]))))));
                arr_6 [i_0] = ((var_3 ? ((((var_11 | (arr_1 [i_1]))))) : (((var_6 >> var_3) ? (arr_3 [i_1] [i_1] [i_0 + 3]) : 595045858))));
                arr_7 [i_0] [i_1] = ((((((!(-2147483647 - 1))))) > (10261 % var_2)));
            }
        }
    }
    #pragma endscop
}
