/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 55836;
    var_20 = ((var_15 ? 1 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (!9699);
                arr_7 [i_0] [i_0] [i_1] = 9707;
                arr_8 [i_0] [i_0] = ((((max(55868, 65280))) % (((arr_3 [i_0]) % 256))));
            }
        }
    }
    var_22 = ((var_12 <= ((((!var_9) != -3565848270)))));
    #pragma endscop
}
