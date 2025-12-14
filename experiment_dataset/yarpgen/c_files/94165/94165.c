/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 2295136259;
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = 1999831018;
                var_20 = ((var_8 ? ((1 ? 29777 : 32220) : -29758)));
                var_21 = (min(var_21, (((~(~var_5))))));
                var_22 = (4067557937 && 38451);
            }
        }
    }
    var_23 = var_11;
    var_24 = var_4;
    #pragma endscop
}
