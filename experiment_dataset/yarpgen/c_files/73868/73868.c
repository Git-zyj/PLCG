/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (~((-115 ? ((0 ? 18446744073709551615 : 18446744073709551608)) : 27465)));
                arr_5 [i_0] = (((((((min(8, (-127 - 1)))) ? -3936620950 : -10413488916272959910))) ? ((-(max(1002644559, 159)))) : -28277));
            }
        }
    }
    var_16 *= ((var_7 ? (--46) : var_1));
    var_17 = (!var_7);
    var_18 = min(var_8, (min((~18446744073709551608), (((6446 ? 34 : -102))))));
    #pragma endscop
}
