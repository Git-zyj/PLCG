/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((!18446744073709551615), 158));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((arr_2 [i_0]) + ((-1 ? ((min((arr_7 [i_0]), 1))) : ((9079256848778919936 ? 90 : var_6))))));
                    var_20 *= (arr_7 [12]);
                }
            }
        }
    }
    var_21 |= ((var_4 ? 17592185782272 : (--545357387)));
    #pragma endscop
}
