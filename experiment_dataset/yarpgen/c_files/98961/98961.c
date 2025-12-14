/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (min(((205 ? 18446744073709551615 : 134217728)), ((((arr_3 [i_1 - 4] [i_1 - 4] [i_1 - 4]) >= (arr_2 [i_1 - 4] [i_1 - 3]))))));
                arr_5 [i_0] [3] = ((((((max(255, 1255677864))) != (min(1846937136626553977, (arr_0 [i_0]))))) || ((max(var_5, (155 ^ var_14))))));
            }
        }
    }
    var_17 = (max(var_17, (!3877750810984383857)));
    #pragma endscop
}
