/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_14;
    var_19 *= ((((var_1 != (!var_4))) ? (2 != 54) : -51));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((~(((15 >= (arr_5 [7] [i_0]))))));
                    var_21 &= (var_13 | -32744);
                    arr_10 [i_0 - 1] [i_0 - 1] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
