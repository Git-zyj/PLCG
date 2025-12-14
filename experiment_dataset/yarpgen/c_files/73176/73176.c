/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_7 | (max(((2147483647 ? var_5 : var_7)), (var_0 ^ var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2 - 1] = ((-var_2 - (max((min(-2147483647, -2147483644)), (max((-2147483647 - 1), 0))))));
                    var_11 = (min(var_11, ((((arr_6 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) | -2147483644)))));
                    var_12 = 1;
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = ((var_3 | (var_5 | var_4)));
    #pragma endscop
}
