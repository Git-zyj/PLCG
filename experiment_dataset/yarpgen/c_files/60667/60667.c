/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (min(var_18, ((((((var_7 ? 18446744073709551615 : -18446744073709551604))) ? ((var_4 ? var_15 : ((18446744073709551615 ? 18446744073709551606 : var_9)))) : ((((((-127 - 1) ? 7 : 9))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = 506986706;
                var_20 = (min((16 && 20), (min(18446744073709551615, (18446744073709551591 ^ 18446744073709551606)))));
            }
        }
    }
    #pragma endscop
}
