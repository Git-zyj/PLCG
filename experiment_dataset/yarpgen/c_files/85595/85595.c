/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85595
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
                var_20 = (arr_3 [i_0] [i_0] [i_0]);
                arr_4 [i_0] [i_0] [1] = (((3831546351 ? var_3 : 2147483647)));
                var_21 = ((((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : var_0))) ? var_12 : ((((arr_1 [i_1] [i_0]) % (((arr_0 [4] [i_1]) ? (arr_1 [i_1] [3]) : (arr_2 [i_0]))))))));
                arr_5 [i_0] [12] = 676236456;
            }
        }
    }
    var_22 ^= (!var_3);
    var_23 = var_1;
    #pragma endscop
}
