/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((var_9 ? (!var_8) : (min(-var_10, (~var_8)))))));
    var_15 = (((!var_10) ? ((((var_10 != (12381623806443173294 && 95))))) : var_8));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 &= (!(((~(1432060968 + 1432060977)))));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [5] = (-11 / 1432060971);
            arr_7 [i_0] [i_0] [i_1 + 3] = (min(((~(~var_10))), ((-(~7924659537757527978)))));
            var_18 = (max(((((min(var_1, 1432060954))) ? var_5 : 2680961284)), ((max((arr_1 [i_0 + 4] [i_1 + 4]), (arr_1 [i_0 + 2] [i_1 + 2]))))));
            var_19 = 1;
            arr_8 [i_0 + 1] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
        }
    }
    #pragma endscop
}
