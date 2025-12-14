/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-32080, (((~-114) ? (var_0 / var_7) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 ^= ((!(var_2 || 127)));
                var_12 = (-108 <= var_4);
                var_13 = ((((var_3 > ((max((arr_0 [i_0]), 18983)))))) <= (((var_1 < ((((arr_0 [i_0]) && var_6)))))));
                arr_8 [i_0] = ((!(((((max(4603728494848586715, var_3))) ? 871340181604287572 : (((max(118, (arr_0 [i_0]))))))))));
            }
        }
    }
    var_14 = (((max((var_0 / var_3), ((4611404543450677248 ? var_7 : 42131)))) * ((min(122, var_7)))));
    var_15 = (min((max(var_5, var_2)), ((var_2 << (!1152550399419700934)))));
    #pragma endscop
}
