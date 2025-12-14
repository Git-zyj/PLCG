/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!var_7) ? ((((var_12 ? var_1 : var_4)))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [1] &= (!(arr_4 [16] [i_1] [16]));
                arr_6 [10] [1] &= (((var_2 ? ((-7910463231346969738 ? -1628295860695239928 : 3778808338)) : (arr_1 [i_0] [i_1]))));
                var_18 = (((((((!(arr_3 [i_0]))) ? (var_13 >> var_1) : ((~(arr_0 [i_0] [i_1])))))) ? var_1 : (var_0 == var_6)));
            }
        }
    }
    #pragma endscop
}
