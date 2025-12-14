/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((4788556816304873577 / (var_1 && var_7)));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_11 = ((((14 % (-2147483647 - 1))) >= ((-18845 | ((var_6 ? var_3 : 170))))));
                    var_12 = (31 * var_0);
                }
            }
        }
    }
    var_13 ^= ((max(var_4, var_5)));
    #pragma endscop
}
