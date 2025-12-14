/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 ^= (!46218);
                arr_5 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
                var_15 = ((var_0 ? ((-21284 ? 3585 : 15)) : (((~(!3585))))));
                arr_6 [i_0] [i_1] = ((((((arr_1 [i_1]) ? (arr_2 [i_0]) : 1))) ? (arr_2 [i_0]) : ((max((arr_2 [i_1]), (arr_1 [i_1]))))));
                var_16 = ((((~((var_1 & (arr_1 [i_0]))))) + ((var_12 ? (arr_3 [i_1]) : ((max((arr_4 [i_0] [i_0]), (arr_2 [i_1]))))))));
            }
        }
    }
    var_17 |= (1220254528 * 299309656);
    #pragma endscop
}
