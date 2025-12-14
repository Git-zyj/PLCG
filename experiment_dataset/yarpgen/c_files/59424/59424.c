/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (!0);
                    var_16 = ((((((var_13 / 108121459) | (((((arr_7 [i_0] [i_0] [8]) < (arr_4 [i_1] [i_1])))))))) || (((-(arr_5 [i_2] [i_2] [i_1 - 1]))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((((-(1 + 108121454))) == (((~(var_12 < 108121464)))))))));
    #pragma endscop
}
