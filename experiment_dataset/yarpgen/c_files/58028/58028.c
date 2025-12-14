/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((((max(7770158280945753193, (arr_0 [i_0 + 3])))) ? 1305531665 : (((~(arr_0 [i_0 + 2]))))));
                var_21 ^= ((!(((-1305531670 ? 1305531650 : ((93 ? 173 : -627506074662631562)))))));
                var_22 *= ((((arr_1 [i_0 + 2]) == (arr_1 [i_1]))));
                var_23 |= ((((!(!167))) ? 511 : var_8));
            }
        }
    }
    var_24 |= var_15;
    var_25 = (min(var_25, var_19));
    #pragma endscop
}
