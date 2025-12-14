/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(88 > 167)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] [i_0 + 3] = ((((min(var_14, 7277) << ((((88 >> (((arr_0 [i_0 + 3] [i_0 + 2]) + 24)))) - 72))))));
                arr_6 [i_1] &= ((((max((((32757 != (arr_3 [i_0] [i_0] [6])))), 2439658327))) ? (((((var_14 ? (arr_0 [i_1] [5]) : (arr_1 [i_0 + 3])))) ? var_17 : var_10)) : (arr_4 [7] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
