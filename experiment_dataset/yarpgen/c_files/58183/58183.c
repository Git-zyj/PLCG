/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!((((1792 != 4294965503) << (var_6 - 3931957153)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((min((arr_4 [i_0] [i_1] [i_1 - 1]), (arr_4 [i_0] [i_0] [i_1 - 1])))) ? ((var_5 & (arr_4 [i_1] [i_1 - 1] [i_1 + 1]))) : (var_12 ^ var_8)));
                arr_7 [i_1] = ((!((max(1564121677, 14)))));
                arr_8 [i_0] [i_0] = (((75 > -61) <= ((var_9 ? (arr_5 [i_1 + 1] [i_1] [i_1 + 1]) : ((var_10 ? var_7 : var_1))))));
                arr_9 [i_0] [14] [i_0] = (((4294965503 <= 4294965503) | ((~(var_10 + var_2)))));
            }
        }
    }
    var_17 = var_14;
    var_18 = ((var_11 + 2147483647) << (((max((~4294965503), (!4294965503))) - 1792)));
    var_19 = var_0;
    #pragma endscop
}
