/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((var_14 + 9223372036854775807) << (14792 - 14792)))) ? (min(3737821792, ((max((arr_2 [i_1] [i_2]), 50743))))) : 0));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = (~-var_3);
                }
            }
        }
    }
    var_15 = (max((((((var_14 ? var_4 : var_2)) << (((~var_4) - 1689630816))))), (min((!var_6), ((65535 ? 3737821792 : -7034508350106900315))))));
    var_16 = (var_10 != (((((var_12 ? 65516 : var_3))) ? (!var_14) : (~var_2))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_1 [i_4 + 1] [i_4 + 1]) ? (arr_0 [i_4 + 1]) : var_11)))));
                    var_18 ^= (((min((50743 | 0), (arr_0 [i_4 - 3]))) * (arr_3 [i_5] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
