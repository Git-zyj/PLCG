/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_10 << 0) || ((min((((128 ? 193 : -2147483624))), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [15] = ((((min(-21, 2147483647))) || ((min(var_0, (2147483623 | 20))))));
                var_16 = (min(var_16, (((!((((30161 || 1) ? (!-6626355534871024088) : ((-2533791231209536609 ? (-32767 - 1) : 111))))))))));
                var_17 = var_4;
                arr_6 [i_0 + 2] = (arr_0 [4]);
            }
        }
    }
    var_18 = ((var_8 ? 200 : 2147483647));
    #pragma endscop
}
