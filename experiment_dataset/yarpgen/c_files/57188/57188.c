/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((max(-1, -7408504959391162501))) ? var_1 : (~-var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min((max((arr_6 [i_2]), (arr_6 [i_0]))), (min((arr_6 [i_0]), (arr_6 [i_0])))));
                    var_17 ^= min(((((min(var_7, (arr_0 [i_1])))) ? (((0 ? 1193323256 : 120))) : (arr_1 [i_2]))), (((min((arr_4 [i_0] [i_1] [11]), var_14)))));
                }
            }
        }
    }
    var_18 ^= (min((min(((7408504959391162501 ? var_2 : 1)), var_0)), ((((min(var_2, var_8))) ? var_12 : ((var_6 ? -7408504959391162485 : var_0))))));
    #pragma endscop
}
