/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~0);
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = ((((((0 ? var_10 : var_12)) == ((((arr_0 [i_0] [6]) | 240))))) ? (236 == var_8) : (min((((arr_3 [i_0] [i_1]) ? 6572 : 252)), ((1 ? 252 : 130))))));
                arr_5 [i_0] [i_0] [i_0] = ((((~var_14) ? var_2 : 229)));
            }
        }
    }
    var_22 = (min(var_22, (((((min(12325739622568569646, 1))) ? (1 / var_9) : var_1)))));
    #pragma endscop
}
