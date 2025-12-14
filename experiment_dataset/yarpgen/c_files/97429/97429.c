/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] = 4294967272;
                arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_1 - 1] [i_1 - 1]);
                arr_7 [i_0] [i_1] = var_10;
            }
        }
    }
    var_11 = ((var_6 ? ((-((117 ? 12 : 24)))) : (min(1, 4294967272))));
    var_12 = var_2;
    var_13 = ((var_8 ? ((((!((max(var_6, var_5))))))) : (((var_3 > var_8) ? (~3218) : (max(1044480, 1))))));
    var_14 = ((~var_6) ? ((((((var_3 ? var_6 : var_6))) ? ((max(62, var_3))) : ((min(var_9, var_6)))))) : (((62317 - -5191703170618813116) ? (((var_10 ? var_2 : var_7))) : var_10)));
    #pragma endscop
}
