/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_7;
    var_13 = (max(var_13, var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (((((arr_1 [i_0 + 2]) >= (arr_1 [i_0 + 1]))) || ((min((-9223372036854775807 - 1), (1 <= 28428))))));
                    var_14 ^= var_3;
                    var_15 = (min(var_15, var_6));
                    var_16 |= 28428;
                    arr_9 [i_2] = ((arr_0 [i_0]) != -9223372036854775783);
                }
            }
        }
    }
    #pragma endscop
}
