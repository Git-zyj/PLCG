/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min(((-508286818 ? 9223372036854775807 : (arr_5 [i_0] [3] [i_2] [i_2]))), var_1));
                    arr_8 [14] [i_1 - 2] [i_2] = (~-508286832);
                }
            }
        }
    }
    var_19 = ((32767 ? var_7 : 1308198239300342862));
    var_20 ^= ((((var_0 ? (-20316 || var_12) : var_10)) >> (((max((9223372036854775805 / 66), (var_14 / var_17))) - 139748061164466295))));
    #pragma endscop
}
