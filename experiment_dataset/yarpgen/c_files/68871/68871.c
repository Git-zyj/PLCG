/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-15125, -var_5));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(((((max(-20268, 20204))) ? (-20284 + -26658) : (16320 * -20268))))));
        arr_5 [i_0] = -22287;
        arr_6 [i_0] [i_0] = arr_3 [i_0];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((~(~23474)));
        arr_9 [i_1] = (((-32767 - 1) ? ((((arr_3 [i_1]) && (arr_3 [i_1])))) : ((-7268 ? -4657 : (arr_3 [i_1])))));
        var_14 = (((arr_3 [i_1]) ? ((((arr_3 [i_1]) != 4096))) : var_0));
    }
    #pragma endscop
}
