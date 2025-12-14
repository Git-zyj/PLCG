/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [2] [2] |= (max((((~var_5) / ((-6751290193723189715 ? var_0 : (arr_1 [i_0]))))), (((198 ? 0 : 0)))));
                var_20 = (((arr_0 [15]) ? ((min((arr_3 [i_0]), -8864))) : (arr_3 [i_0])));
                var_21 *= (((((-1717065131961889961 ? 17 : ((((arr_2 [i_0] [i_1]) && (arr_1 [i_0]))))))) % ((-(min(-80, 9223372036854775807))))));
                arr_6 [i_0] = ((((min(15, (arr_2 [14] [i_1])))) ? (((arr_2 [i_0] [i_1]) << (((arr_2 [i_0] [i_1]) - 2035889840419582804)))) : (((((arr_2 [i_0] [i_0]) != (arr_2 [i_0] [i_0])))))));
            }
        }
    }
    var_22 = (min(2343979045, -2060205294));
    var_23 -= (((-var_13 ? (min(18446744073709551613, var_2) : (((70 ? var_11 : var_17)))))));
    #pragma endscop
}
