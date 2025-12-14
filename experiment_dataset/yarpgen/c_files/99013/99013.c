/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= ((((((var_7 ? var_3 : var_10)))) ? (~var_8) : ((9223372036854775806 ? var_11 : (max(var_5, -510214201662966282))))));
                var_19 -= (min((!var_11), (max(var_9, (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_20 = (-5628357919638051364 * var_3);
    #pragma endscop
}
