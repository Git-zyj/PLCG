/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-((var_8 ? var_9 : var_4))))) ? ((-(~var_13))) : (var_10 | var_11)));
    var_21 = 4961848191611985638;
    var_22 = ((!((!(18446744073709551604 && var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = ((var_2 / (((var_9 != ((max((arr_2 [i_1]), var_19))))))));
                var_24 &= (min((arr_4 [i_1] [8]), (((8146 + (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
