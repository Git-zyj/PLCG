/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_0 ? (var_2 ^ var_2) : ((var_12 ? 5983630471528616739 : 19360))))) ? (min((141 <= var_6), var_1)) : (((~(~var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((var_8 != (((min(158, 141))))));
                    var_17 += (-116 ^ var_7);
                    var_18 = ((((max((~var_1), (!var_14)))) ? (((arr_5 [i_1] [i_1 + 2] [i_2] [i_1 - 1]) >> (arr_5 [i_0] [i_1] [i_2] [i_1 - 1]))) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
