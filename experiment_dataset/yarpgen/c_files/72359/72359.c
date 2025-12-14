/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 == (((var_1 + 9223372036854775807) << (-var_12 - 1980357813)))));
    var_15 = (((max(-var_11, ((var_0 ? var_1 : var_5)))) ^ var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 -= ((4095 ? ((((arr_1 [i_0] [i_1 - 1]) == (arr_1 [i_0] [i_1 - 1])))) : ((min((arr_1 [i_0] [i_1 + 1]), (arr_3 [i_1] [i_1 + 1]))))));
                    var_17 = (max((arr_1 [i_1 - 3] [i_1 + 1]), ((112 ? ((31326 ? 143 : 143)) : -2587))));
                    var_18 ^= 562716852;
                }
            }
        }
    }
    #pragma endscop
}
