/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(24117, 12));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_1 [i_0]);
        var_13 = (((!var_9) ? (!var_5) : ((var_5 * (arr_1 [i_0])))));
        var_14 = (max(var_14, -11));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 -= (19 >= 16);
        var_16 = (((((18446744073709551603 ? 4294967040 : -66))) ? ((min((arr_0 [1] [1]), var_0))) : (min(((7168 >> (2048 - 2035))), (-15 > 1)))));
    }
    #pragma endscop
}
