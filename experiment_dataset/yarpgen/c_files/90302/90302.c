/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((~(((var_2 <= (max(2106756435, 2188210861)))))));
    var_11 = (max(var_2, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 |= (((max((var_2 * 2188210861), ((387147417 ? 6099290645668365635 : (arr_0 [14] [i_1]))))) - ((min(var_0, 2188210860)))));
                var_13 += max((max((max(var_8, 3865183143)), (~2188210862))), (((var_6 >= (!1)))));
                var_14 = (-((var_7 ? var_4 : 2188210861)));
            }
        }
    }
    var_15 = -var_6;
    #pragma endscop
}
