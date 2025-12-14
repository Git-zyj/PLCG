/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (max((arr_1 [18] [i_2 - 1]), 58204));
                    var_20 = 1;
                }
            }
        }
    }
    var_21 = (min(130, var_6));
    var_22 = (((18446744073709551602 ^ var_0) >> (((min((((14025403344253219758 ? var_10 : 60834))), ((var_4 ? var_4 : 2147483647)))) + 6674103507622359848))));
    #pragma endscop
}
