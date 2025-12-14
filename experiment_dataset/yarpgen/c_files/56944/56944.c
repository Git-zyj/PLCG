/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((-14 / 65518) ? 25 : (((!(arr_4 [i_0]))))));
                var_15 ^= (((((35 ? var_8 : (arr_1 [i_1 - 1])))) ? ((((((arr_0 [i_0]) ? var_2 : 2243796742))) ^ -4)) : (arr_0 [1])));
                var_16 = (max(var_16, (((((((((arr_5 [i_0] [i_1]) ^ 208982526541718805))) ? (arr_2 [i_0] [4]) : (arr_5 [i_0] [i_1 - 1]))) ^ ((((!(205047026 / -9223372036854775798))))))))));
            }
        }
    }
    var_17 = var_10;
    var_18 ^= (min((((~(var_6 && var_9)))), (min((((-728629034 ? var_3 : 2147483647))), var_9))));
    var_19 = (~((1961000534996341026 | (~9223372036854775807))));
    #pragma endscop
}
