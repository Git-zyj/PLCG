/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (max(0, (var_3 & 1)));
                var_11 = (max(var_11, 18446744073709551615));
                arr_7 [i_0] [i_0] [i_0] = ((((((var_7 + 2147483647) >> (var_6 - 336819614))) >> ((((1 << (74 - 61))) - 8188)))));
            }
        }
    }
    var_12 = (~18446744073709551615);
    var_13 = (min(var_13, ((min(var_3, (min(var_4, var_7)))))));
    var_14 = ((!3340) ? (~var_5) : (var_2 && var_9));
    #pragma endscop
}
