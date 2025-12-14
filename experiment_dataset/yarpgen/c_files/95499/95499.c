/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((!var_6), (min(((min(-1484326104, 25900))), (var_17 ^ var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((!((!(arr_1 [i_0 + 1]))))))));
                var_20 = 17592169267200;
                arr_5 [i_0] [i_1] = (arr_1 [i_0 - 2]);
            }
        }
    }
    var_21 = var_11;
    var_22 = (((~((8 ? var_13 : -27648)))));
    #pragma endscop
}
