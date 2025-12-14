/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((~((var_7 ? -var_1 : ((var_5 | (arr_2 [i_1])))))));
                var_12 ^= ((((max((arr_4 [i_0] [i_0 - 1] [i_0 - 1]), var_4))) ? 0 : ((min(var_0, var_6)))));
            }
        }
    }
    var_13 = ((((96 != var_5) ? (max(-2551779022545808421, 65527)) : ((1859255588 ? 36026597995708416 : 4294967265)))));
    #pragma endscop
}
