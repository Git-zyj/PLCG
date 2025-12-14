/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((!((!(arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = (!var_6);
            var_19 = ((-(((!(!var_0))))));
        }
        var_20 += var_13;
    }
    var_21 = (!-var_1);
    var_22 = ((!(((~(~var_1))))));
    var_23 = (min(var_23, (((-((~(~16256))))))));
    #pragma endscop
}
