/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((var_7 ? ((min(114, var_13))) : var_12)) << (120 && var_3)));
    var_15 = ((var_13 ? 24041 : -var_3));
    var_16 = 114;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (18426543015628699019 ? (((arr_0 [i_0 - 2] [i_0 + 2]) ^ (arr_0 [i_2] [i_0]))) : ((((var_6 && (arr_0 [i_0] [i_0]))))));
                    arr_7 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [16]) ? 102 : (arr_3 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
