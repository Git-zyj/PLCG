/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((-9223372036854775807 - 1), (~-109)))) ? ((min(var_17, (max(var_15, var_13))))) : var_9));
    var_20 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 += (max(((((min(var_7, (arr_0 [i_0 - 1])))) ? -61 : (arr_2 [1] [i_1 + 2]))), var_5));
                var_22 = (min(var_22, -89));
                var_23 -= ((var_1 > (((arr_1 [i_0]) ? ((((arr_4 [i_1 - 1]) ? (arr_6 [i_1]) : var_13))) : (arr_4 [i_0 - 1])))));
                var_24 ^= (max((min((max(var_8, (arr_5 [i_0]))), (~var_6))), (9044848964675429601 >= 65535)));
            }
        }
    }
    #pragma endscop
}
