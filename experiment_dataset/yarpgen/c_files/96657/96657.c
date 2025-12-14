/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 += ((-1 ? (((max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1]))))) : (arr_4 [i_0 - 1])));
                    arr_9 [i_0 + 1] [i_0] [i_0] [i_0] = (1 ? ((((max(var_4, 1))) ? ((min((arr_3 [1]), var_3))) : var_4)) : (((((562400197607424 / -562400197607424) < ((2103533382 ? 39 : 15905403539215977882)))))));
                }
            }
        }
    }
    var_17 |= ((((max(var_12, ((1 ? 10297615212666241448 : var_13))))) ? (((var_0 || var_8) ? -562400197607447 : var_1)) : (var_8 | var_10)));
    #pragma endscop
}
