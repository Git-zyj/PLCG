/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (max(var_9, (var_3 / var_3)));
                arr_4 [13] [13] [i_1 + 1] = var_3;
                var_12 = ((-var_3 ^ (max(var_6, var_7))));
                var_13 = ((((min((max(var_8, 1)), var_8))) ? (min(var_3, 128)) : (5136 >= var_8)));
            }
        }
    }
    var_14 = (((~var_7) != var_7));
    var_15 = (max(var_5, var_9));

    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = (var_3 * 17230781128084003816);
        var_16 ^= -13062401211535906513;
        arr_9 [i_2] [i_2] = var_0;
    }
    #pragma endscop
}
