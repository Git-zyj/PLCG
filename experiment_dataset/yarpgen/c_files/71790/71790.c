/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (((~((11738125739866073444 << (var_1 - 41))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [7] = var_3;
                var_12 = ((-85 > (((arr_0 [i_0 + 1]) - (arr_5 [i_0] [i_1 + 2] [i_1 + 2])))));
            }
        }
    }
    #pragma endscop
}
