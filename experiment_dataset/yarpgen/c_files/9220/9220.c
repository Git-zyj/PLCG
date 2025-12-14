/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((~var_5) ? var_6 : var_1))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((26 / var_8) ? (((var_1 * (arr_4 [21] [i_1] [i_0])))) : ((12310 * (max(var_2, (arr_0 [i_0]))))));
                var_11 = (min(var_11, ((max(((max((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (((!-160417237) ? 13116 : ((max(12327, 25291))))))))));
                arr_6 [i_0 - 1] [14] = (arr_4 [i_1] [i_1] [i_1]);
                arr_7 [i_0 + 1] &= var_1;
            }
        }
    }
    var_12 ^= var_3;
    var_13 = (min((max(((var_1 ? var_4 : var_0)), var_1)), (((((min(var_0, -1303004879330939505))) ? (~1303004879330939496) : (-4138686778286881481 == var_9))))));
    var_14 = var_6;
    #pragma endscop
}
