/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((max(168, var_2)), var_6)) - var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((((var_12 ? var_0 : var_8)) & (11625732805213171878 >= 1))));
                arr_7 [i_0] = (-9223372036854775807 - 1);
                arr_8 [i_0] [i_1] = ((var_2 == (((0 % (-9223372036854775807 - 1))))));
                var_19 &= ((((((min(1, 4294967294)) / (32767 + -95)))) >= 15755055950721374001));
            }
        }
    }
    #pragma endscop
}
