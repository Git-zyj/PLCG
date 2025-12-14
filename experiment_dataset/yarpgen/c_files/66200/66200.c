/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((1 ? (!var_4) : ((55 ? var_7 : var_4)))));
    var_19 = ((var_10 >> ((var_3 ? (((var_14 ? 1 : var_13))) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 -= ((((max(8581545984, (arr_4 [i_0 - 2] [i_0 - 2])))) ? ((var_0 ? (max(12692757305036874343, 4541055195707529)) : ((var_15 ? var_12 : var_9)))) : var_14));
                var_21 = max(-123, (((arr_1 [i_1]) ? var_8 : 1)));
                var_22 = (((((~(arr_4 [i_0 - 2] [i_0 - 2])))) ? (((var_8 ? (arr_4 [i_0 - 3] [i_1]) : var_11))) : 11399054261705355164));
            }
        }
    }
    #pragma endscop
}
