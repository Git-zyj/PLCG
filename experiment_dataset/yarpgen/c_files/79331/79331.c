/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (((arr_0 [i_0]) ? (arr_6 [i_2]) : var_6));
                    arr_10 [i_0] = var_0;
                    var_11 = (min(var_11, (max(5524141801667177360, (arr_6 [i_0])))));
                }
            }
        }
    }
    var_12 = (var_7 ? var_1 : var_3);

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_13 [i_3] [10] = ((47857 ? var_9 : (max((arr_1 [i_3]), (max(8760098461617472764, var_5))))));
        var_13 = (((arr_4 [i_3] [i_3] [i_3]) ? ((((!var_6) < ((((arr_5 [5]) <= var_2)))))) : -var_6));
    }
    #pragma endscop
}
