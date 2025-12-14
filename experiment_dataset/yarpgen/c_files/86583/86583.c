/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min((max(11772645001433057577, 785040542)), ((min((!var_2), var_6)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = ((~((((max(var_3, (-127 - 1)))) ? (arr_1 [i_0]) : (arr_0 [i_0 + 1])))));
        var_17 = ((((((!(((var_6 << (40769 - 40755)))))))) != (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = ((-6042090153561551318 ? (min((~47), 9)) : var_0));
                    var_19 = (var_8 > 0);
                }
            }
        }
    }
    #pragma endscop
}
