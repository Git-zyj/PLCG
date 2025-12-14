/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= -var_13;
    var_21 = (min(var_13, ((1302665394 ? (~-22089) : ((min(var_17, 8192)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((var_14 || var_11) + ((max((arr_1 [i_0 - 4] [i_1]), var_4)))));
                var_22 = (!-9037);
                var_23 = (((((var_10 ? var_8 : var_3))) ? (((arr_2 [i_0 - 1] [i_0 - 4]) >> (((arr_2 [i_0 - 3] [i_0 - 3]) - 123)))) : ((-(arr_2 [i_0 + 1] [i_0 - 4])))));
                var_24 = var_3;
            }
        }
    }
    var_25 = ((min(((var_0 ? 1 : 22089)), var_1)) | ((22080 ? ((max(65523, 22089))) : var_13)));
    #pragma endscop
}
