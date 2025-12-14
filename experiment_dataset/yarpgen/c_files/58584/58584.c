/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_12 = ((((((3 % -120) >= -12))) - ((var_1 ? ((-(arr_3 [i_1]))) : (arr_3 [i_1])))));
                    var_13 = ((((((8 | 20) >> (((((arr_2 [i_2]) - (arr_0 [i_0]))) - 1698090925107987794))))) ? -12 : -10));
                }
                var_14 = ((-((-(!var_10)))));
            }
        }
    }
    var_15 = ((1880298728 ^ ((var_10 ? (var_4 - 27545) : ((var_9 ? 9 : var_9))))));
    #pragma endscop
}
