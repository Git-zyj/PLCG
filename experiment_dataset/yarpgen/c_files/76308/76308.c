/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_8 ? (max(-432651753, -421151320)) : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 432651753;
                var_18 = max((arr_4 [i_1 + 1] [i_1] [i_1]), -3225414915);
                var_19 = (((((!-7554500968368143473) ? ((var_16 ? 503126140 : 2599475122)) : (((var_10 ? 255 : var_5)))))) ? (!var_15) : (!-6802));
            }
        }
    }
    #pragma endscop
}
