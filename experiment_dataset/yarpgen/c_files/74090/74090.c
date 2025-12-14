/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 13961499179431117140));
    var_15 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((var_6 || -28220) ? -28220 : ((((31 == 188) >= var_0))));
                arr_5 [i_1] [i_1] = (((((128 ^ (arr_0 [i_0])))) ? ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) : (4485244894278434488 - -28220)));
            }
        }
    }
    #pragma endscop
}
