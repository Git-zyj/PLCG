/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~4244476022) >= (~50491273))) ? ((min(var_6, (min(100, 4244476023))))) : var_18));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(~50491273)));
        arr_3 [22] &= (min((50491274 & -1857623674), ((100 ? 4244476043 : 672343944))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = (((~4244476018) && (((((-100 ? 65528 : 32767))) < (50491273 ^ 4244476023)))));
        arr_6 [i_1] = (min((((((((~2147483647) + 2147483647)) + 2147483647)) << ((((1 ? 4244476022 : 1)) - 4244476022)))), 65528));
    }
    var_22 = ((((((~2147483647) * (1 | 4244476008)))) ? var_15 : ((~((1 ? 4244475988 : 4244476022))))));
    #pragma endscop
}
