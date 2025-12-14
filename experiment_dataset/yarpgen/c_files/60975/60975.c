/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((-(((var_16 << 16) << (38217 - 38197))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(((((arr_1 [i_0]) <= -1))), ((-1010039118 ? ((-(arr_0 [1]))) : (min((arr_0 [16]), 184))))));
        var_19 = (arr_0 [i_0]);
        var_20 = 144114913197948928;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [15] [i_1] = (min(((((((arr_0 [1]) ^ 38220))) ? 38217 : 27315)), -1));
                    var_21 = (min(var_21, 18446744073709551615));
                    var_22 = (max(var_22, 27323));
                }
            }
        }
    }
    var_23 = (((((27316 > 1835008) >> (-565456213 / 144114913197948956)))) ? (((~(var_6 > -1)))) : (((((192 ? var_8 : 27308))) ? 87944510 : (~var_0))));
    #pragma endscop
}
