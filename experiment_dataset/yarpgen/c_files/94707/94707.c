/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((~((-1 * (~var_5)))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (((var_13 != var_0) * (((arr_5 [i_0] [1]) + 7))));
            var_19 = (max(var_19, (((-((7 + (arr_4 [i_0] [i_1]))))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = ((((1 * (((2297506784890761358 || (arr_8 [i_0] [i_0] [i_2])))))) == (1 < 1)));
            var_21 = ((-1 && ((((((arr_2 [i_0]) - 867933892)) / -var_3)))));
            var_22 ^= ((!(-21499 - 1)));
            arr_10 [i_0] = (4294967295 / 57085);
        }
    }
    var_23 = (min(var_23, (((((var_4 * (var_0 / var_12))) >> (((~var_17) + 1198)))))));
    #pragma endscop
}
