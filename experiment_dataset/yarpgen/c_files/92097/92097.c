/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_4 < ((((520093696 || -520093696) && 520093708))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((arr_2 [i_0 - 2] [i_0 - 3]) ? (arr_2 [i_0 - 2] [i_0 - 3]) : (arr_2 [i_0 - 2] [i_0 - 3])))))));
                var_15 *= (520093709 / 45);
                arr_5 [i_1] [i_1] [8] = (219 <= -520093695);
                var_16 &= (((arr_3 [i_0]) ? 171 : (((arr_1 [i_0 - 3] [i_0 + 2]) / 520093701))));
                var_17 = ((((((127 ? 45113 : (-2147483647 - 1))) < 34441)) ? -6609 : -520093697));
            }
        }
    }
    var_18 *= (min(var_11, var_0));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_19 |= (arr_1 [i_2 - 1] [i_3]);
                arr_11 [i_2] = (((((113 / (arr_2 [i_2 - 3] [i_2 + 1])))) ? (-9223372036854775807 - 1) : var_0));
            }
        }
    }
    #pragma endscop
}
