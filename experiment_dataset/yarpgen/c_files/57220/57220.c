/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] &= ((~((~(arr_0 [i_0 + 1] [i_0 + 1])))));
                    var_19 = ((((((((arr_4 [i_0] [14] [14]) ? var_9 : var_0))) ? ((max((arr_6 [15] [i_1] [10]), var_4))) : (max((arr_2 [i_0 + 1] [i_0 + 1]), var_14)))) < (((((arr_1 [i_0 + 2]) < (((((arr_2 [i_0] [i_0]) < 1))))))))));
                }
            }
        }
    }
    var_20 = (min(var_20, var_18));
    #pragma endscop
}
