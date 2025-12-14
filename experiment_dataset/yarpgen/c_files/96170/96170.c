/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = ((-(((!((max(var_1, var_5))))))));
        arr_2 [i_0] = ((~(max(((5366447100148456190 ? 9957236900056121712 : 1)), ((min(var_0, 1)))))));
        arr_3 [i_0 + 3] = (arr_0 [i_0 + 4]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (max(var_7, (((arr_5 [i_1] [i_1]) ? var_8 : (arr_4 [i_1])))));
        arr_7 [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] = (((((var_6 ? var_9 : (arr_4 [i_1])))) ? (min((arr_4 [i_1]), (arr_4 [i_1]))) : var_6));
        var_12 = var_0;
        var_13 = (max(((((max(1, 18310))) ? ((var_3 ? var_5 : var_7)) : 1)), 1));
    }
    var_14 = ((var_6 >> (((max((max(24576, 3564800913)), var_2)) - 3564800905))));
    var_15 = var_2;
    #pragma endscop
}
