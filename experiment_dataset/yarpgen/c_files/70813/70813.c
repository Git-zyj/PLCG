/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min(((max((arr_5 [i_0] [i_1 - 2]), var_8))), (var_11 * var_2)));
                arr_7 [i_0] [i_0] = ((((2147483647 ^ 24) << (((((arr_1 [i_1]) | var_0)) - 2871327103)))) >> (55947 - 55934));
                arr_8 [2] = ((703320170 ? (((-var_10 || (!42788)))) : ((((min(3728552491, (arr_5 [i_0] [i_0]))) < (arr_5 [9] [15]))))));
            }
        }
    }
    var_17 = (min((!-var_1), var_11));
    #pragma endscop
}
