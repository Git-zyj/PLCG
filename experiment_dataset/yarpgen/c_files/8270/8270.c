/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, var_9));
                var_13 = (min(var_13, ((((!((max((arr_1 [i_0]), var_11))))) ? ((((((-4779 ? -21978 : 15736))) && (-127 - 1)))) : (min((!var_10), (max(-983589938, 32752))))))));
                var_14 ^= (((((((((arr_3 [i_0]) ? var_11 : 4294967286))) ? 0 : ((983589937 ? -29741 : var_10))))) >= (min((((-983589938 ? 15736 : -12519))), ((0 ? var_2 : -15736))))));
                var_15 = (arr_1 [i_1]);
            }
        }
    }
    var_16 -= var_9;
    #pragma endscop
}
