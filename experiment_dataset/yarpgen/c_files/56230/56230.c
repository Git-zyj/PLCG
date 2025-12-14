/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(((((7282 ? var_7 : (arr_5 [15]))) << (((arr_1 [i_0]) - 108)))), (((-((min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1])))))))));
                var_20 = ((((((!(arr_4 [i_0] [i_0] [i_0]))) ? ((var_15 >> (var_18 - 14829))) : (arr_1 [i_0]))) % (((~var_4) ^ -var_18))));
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
