/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((~(316335438 - 316335438)));
                var_15 = (max(255, 1));
                arr_8 [i_1] = (max(var_10, (arr_0 [i_0])));
            }
        }
    }
    var_16 = ((((var_11 ? var_4 : ((max(var_0, -1670191685))))) <= 48));
    #pragma endscop
}
