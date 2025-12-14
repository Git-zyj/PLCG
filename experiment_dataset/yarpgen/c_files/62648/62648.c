/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_0;
                var_10 = (max(var_10, 127));
                var_11 = ((-(((((~41) + 2147483647)) >> ((var_1 ? var_8 : 112))))));
            }
        }
    }
    var_12 = (-127 >= 202);
    var_13 = ((((((var_7 ? var_1 : var_3)) ^ var_1)) - ((-var_6 ? ((var_1 ? 18446744073709551606 : var_0)) : -var_7))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_13 [i_2] = (((var_4 ? ((21 ? 126 : var_4)) : 61299)));
                arr_14 [i_2] [i_2] = 64203;
                var_14 += ((-var_5 / (((var_2 - 65535) ? 576459652791795712 : -var_2))));
            }
        }
    }
    var_15 = ((~(!3)));
    #pragma endscop
}
