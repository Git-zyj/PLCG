/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~(!1377141671)))) ? (((((min(5, var_2)) == var_16)))) : (((((1 ? 508566908 : 1))) % (16819564902696632518 ^ var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (max((~var_9), (((var_7 != (var_8 + var_1))))));
                    var_18 = 14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                arr_15 [i_4] = (max((!1), (3621080 >= 122)));
                arr_16 [1] |= ((((max(var_6, ((min(var_15, 5361184286466323444)))))) ? (max(var_12, var_13)) : ((((var_16 ? 15 : var_12)) | 50415))));
            }
        }
    }
    #pragma endscop
}
