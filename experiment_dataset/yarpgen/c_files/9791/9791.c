/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = var_3;
                var_22 = (((132872011 ? 65535 : -125)));
                var_23 = ((((min((min(65508, 4465558843117879097)), (((218 ? 104 : (arr_0 [i_0 + 1]))))))) ? ((3355133732185397499 ? ((3779431400066163926 ? 511 : 5136467883749514981)) : (~1))) : ((((min(var_8, var_3)) % (~46))))));
                var_24 = (min((((min(48765251, 18)))), (~3697230405)));
                var_25 = (max(var_25, (((((((arr_1 [i_0] [i_1 + 1]) ? 1956608860136806137 : (arr_1 [i_0 + 1] [i_1 + 1])))) || -8)))));
            }
        }
    }
    var_26 = (max(var_26, (((var_12 ? var_3 : ((min(var_17, 251))))))));
    var_27 = var_5;
    #pragma endscop
}
