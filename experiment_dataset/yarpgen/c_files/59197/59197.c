/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;
    var_11 = (min(var_11, 16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 += (max((((arr_0 [1]) ? ((-2358 - (arr_0 [i_0]))) : (-2147483647 - 1))), (min(var_8, (arr_4 [8] [i_0 + 2])))));
                var_13 |= ((((max(32767, (arr_3 [i_0 + 1])))) << (((arr_2 [i_1]) - 22991))));
            }
        }
    }
    var_14 = ((var_6 * (((((-78 > -3391320923687265700) > var_9))))));
    #pragma endscop
}
