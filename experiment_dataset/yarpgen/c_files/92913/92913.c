/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (--477672045)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = ((((max(-1786670439, var_3))) ? ((((1786670439 == 1023) <= var_2))) : 1));
        var_12 = ((1 ? 1 : 1));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_13 -= ((var_7 <= ((-var_4 ? var_2 : (var_5 > var_3)))));
        var_14 -= ((var_2 * (arr_4 [i_1] [i_1])));
    }
    var_15 = min(((((6481393403042946124 / -2504915390320872093) >= (var_8 | var_9)))), ((max(var_0, -797171396961003012))));
    var_16 = var_8;
    var_17 = (max(var_17, -524049635));
    #pragma endscop
}
