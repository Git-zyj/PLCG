/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((arr_11 [i_2] [i_1] [i_0]) ? -125 : ((((arr_7 [i_0] [i_0] [i_0]) != (max((arr_2 [i_1]), 2))))));
                    var_16 = (((((arr_1 [i_1 + 2] [i_1 - 2]) && (arr_1 [i_1 + 2] [i_1 - 2]))) ? (!53) : (max(-32256, (arr_8 [i_2] [i_1] [i_1] [i_0])))));
                    var_17 = (min(var_17, ((min(0, 4237573843605618781)))));
                }
            }
        }
    }
    #pragma endscop
}
