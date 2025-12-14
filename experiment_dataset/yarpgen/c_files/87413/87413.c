/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 7404315815965765842));
                var_16 ^= ((min(2, (-3620470754527029066 - -1))) >= (arr_1 [i_0] [i_0]));
                arr_4 [i_0] = (~var_2);
            }
        }
    }
    var_17 = -15944;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            {
                var_18 = (max(((max((arr_8 [i_2 + 2] [i_3 - 2]), var_5))), (min(4316846197484620682, 5413719390278550579))));
                arr_10 [i_2] [i_2] = (((min((arr_5 [i_2 + 1]), (arr_8 [i_2 + 2] [i_3 - 1]))) != (((!131071) ? ((max((arr_5 [i_2]), 1))) : ((min(var_4, var_0)))))));
            }
        }
    }
    var_19 = ((var_4 ? (!var_0) : var_12));
    var_20 = (!38);
    #pragma endscop
}
