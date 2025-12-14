/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_13, (((~1294015751) ? (3777058708 >= 1477) : 3365296952085893064))));
    var_17 = ((-(((max(var_12, 1477))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min((!169), 0));
                var_19 += (((((var_3 > var_11) ? 3506325496465654481 : 0))) ? 1481 : (((((-1478 ? -10 : 32767))) ? ((max(var_9, var_7))) : (arr_0 [i_0] [i_1 + 1]))));
            }
        }
    }
    var_20 = -7334894978203925923;
    #pragma endscop
}
