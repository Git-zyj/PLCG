/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((~var_16), (((var_8 << (var_5 - 2221652753))))));
    var_19 = (var_3 | (min((max(717880849, var_16)), ((((-9223372036854775807 - 1) > var_0))))));
    var_20 *= (((((9223372036854775807 ? 128 : (1 <= var_5)))) ? 173 : ((0 ? 1775589228 : var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 |= 155;
            var_22 = ((~(arr_5 [i_0] [i_0] [i_0])));
            var_23 = (arr_5 [1] [i_0] [i_1]);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_0] = (((var_0 ? -5725618407570013098 : (arr_2 [i_0]))));
            var_24 = (min(var_24, (((118 | (!151))))));
            arr_9 [i_0] [i_0] = ((arr_6 [3]) ? (arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2]) : (arr_5 [i_2 - 1] [i_2] [i_2 + 4]));
        }
        arr_10 [14] = 145;
        arr_11 [6] = 5725618407570013097;
    }
    #pragma endscop
}
