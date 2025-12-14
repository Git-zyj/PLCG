/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 ^= ((((-83 / (arr_8 [i_2] [i_1] [i_0]))) == ((((9223372036854775807 % var_2) || var_19)))));
                    var_21 -= (((((arr_1 [i_0] [i_1]) << (var_17 - 345021942))) > (65535 < 2475697658)));
                    arr_9 [i_0] [i_0] [i_0] [i_0] |= (((5697283374176699934 == var_10) >= (1 % 1)));
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
