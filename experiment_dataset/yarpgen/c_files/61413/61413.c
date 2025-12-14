/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (var_3 ? var_5 : (((!(var_7 == var_8)))));
    var_11 *= ((((((var_4 == var_1) >> (0 * 18446744073709551615)))) ? 0 : (min(var_2, ((1 ? 18446744073709551615 : 12813))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = 1694035503;
                    arr_7 [i_0] [i_1] [i_2] [i_1] = (min(var_5, -7694296122053264978));
                }
            }
        }
    }
    #pragma endscop
}
