/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((18446744073709551606 ? var_7 : (var_2 >> var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (((((var_5 ? var_4 : var_8))) ? var_7 : (max(var_4, var_4))));
                var_12 |= (max(var_3, ((((var_4 ? var_0 : var_1))))));
            }
        }
    }
    #pragma endscop
}
