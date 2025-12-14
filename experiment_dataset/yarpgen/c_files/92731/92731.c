/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-((var_1 ? 4063051225606307771 : (-11 * var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 += ((((((arr_6 [i_0] [18]) ? -4063051225606307778 : ((((arr_4 [i_0]) ? var_1 : (arr_0 [i_1] [i_0]))))))) ? ((((max(var_2, var_1))) ? ((max(1536, (arr_5 [i_0])))) : (arr_5 [i_0]))) : (((arr_4 [i_1]) % (arr_4 [i_0])))));
                var_16 ^= ((((!(((arr_6 [18] [i_1]) || 196608)))) ? 2907222832 : (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
