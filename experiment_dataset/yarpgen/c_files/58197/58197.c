/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= (-2369848608488852479 ? -2218979146909485535 : -2218979146909485535);
        var_18 -= ((2218979146909485566 <= (arr_0 [i_0])));
    }
    var_19 = ((var_10 ? ((((((2218979146909485566 ? 9223372036854775807 : 5921542351048334251)) <= (max(9223372036854775807, -2218979146909485524)))))) : ((var_3 % (min(4152679042600515014, var_6))))));
    var_20 = (max((max((-2147483647 - 1), (~2002168071))), var_8));
    #pragma endscop
}
