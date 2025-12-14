/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(!-20)));
                arr_7 [i_0] [i_0] [i_0] = ((((!((!(arr_4 [i_0] [i_0])))))));
                arr_8 [8] [8] [i_1] = (((((-(181 + 1)))) + (((!0) | ((-929669488 ? 69 : 18446744073709551602))))));
            }
        }
    }
    var_20 = (((var_16 * 8) * (6435999664288795974 == -929669505)));
    var_21 = ((((((268435456 << (var_16 - 13716315492221695847))) ? (!144115119356379136) : var_1))));
    #pragma endscop
}
