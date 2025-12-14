/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~53355);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (arr_0 [i_0]);
                var_14 = 4294967295;
                var_15 = ((-(((arr_3 [i_0] [i_1 - 2]) % (arr_3 [i_0] [i_1 + 1])))));
                arr_4 [i_1 + 1] = (arr_0 [i_1 - 2]);
            }
        }
    }
    var_16 = (!var_7);
    var_17 = ((var_11 ? var_10 : ((max((max(187, var_2)), 34)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (((((min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1])))) ? (((-1 <= (arr_1 [i_2 - 1])))) : (9223372036854775807 <= 12924))))));
                var_19 = 65;
                var_20 = ((((((59624 ? -16725 : 32746))) ? 235 : -8911801825785612821)));
                var_21 = (~124);
            }
        }
    }
    #pragma endscop
}
