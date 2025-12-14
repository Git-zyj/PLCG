/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((var_6 ? ((10547658416232194059 ? 10547658416232194087 : 7015379412685963799)) : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((var_0 ? (min(((0 ? var_13 : var_7)), (max(10547658416232194059, 11431364661023587804)))) : var_8)))));
                var_16 = (min((max(7015379412685963799, var_11)), (var_7 % 18027)));
                var_17 = 11431364661023587815;
                var_18 -= var_0;
                var_19 = (max(var_19, ((max((~var_7), ((65118 ? var_13 : -1)))))));
            }
        }
    }
    #pragma endscop
}
