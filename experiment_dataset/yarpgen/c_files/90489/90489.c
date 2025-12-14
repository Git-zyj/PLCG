/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((min(var_14, (arr_4 [i_1 + 2] [i_1]))) > ((((arr_4 [i_1 + 1] [i_1]) % (arr_4 [i_1 + 2] [i_1 + 2])))))))));
                var_18 = (max(var_18, var_7));
                var_19 |= ((((((((var_11 >> (((arr_1 [10]) - 44306))))) ? (var_0 ^ var_6) : ((((arr_0 [i_0] [14]) ^ var_5)))))) ? var_0 : var_11));
            }
        }
    }
    var_20 = (~var_9);
    var_21 = var_12;
    var_22 -= ((((!(((var_0 ? var_9 : var_5))))) && ((((var_2 > var_13) ? (max(var_6, var_5)) : 35030)))));
    #pragma endscop
}
