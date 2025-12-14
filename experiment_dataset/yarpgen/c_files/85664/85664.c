/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((((((max(10528, -2244556741829066021))) ? 6 : var_19))) ? (min((!1), ((var_2 ? 214 : var_9)))) : 10528));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, -10528));
                    var_22 = ((((((-(arr_1 [i_0]))) <= var_18)) ? (((~1) | (!-80))) : ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))) >= ((min((arr_2 [i_0] [i_0]), var_12))))))));
                    var_23 = ((+(((!28) ? var_18 : (~1)))));
                }
            }
        }
    }
    #pragma endscop
}
