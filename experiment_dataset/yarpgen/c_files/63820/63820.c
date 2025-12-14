/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((+(((var_1 | 7695399708750931194) ? (!var_11) : var_16)))))));
    var_21 = ((((var_5 & (min(var_18, 3535717545933715096)))) >> (-1756046191 + 1756046241)));
    var_22 = var_18;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0] &= (((92 | var_6) || var_13));
        arr_4 [i_0] = (arr_0 [i_0 - 2]);
        var_23 -= ((~(65535 < var_8)));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_24 ^= ((var_19 & (((var_12 ? (arr_0 [i_0 - 1]) : 117)))));
            arr_7 [i_1] = var_0;
            var_25 = (((((-(arr_5 [i_0 - 1] [i_1 - 1])))) != 4294967295));
            var_26 = 5556608393502387725;
            arr_8 [i_0] = var_9;
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = -536870880;
        arr_14 [i_2] = (min(((max((arr_5 [i_2] [i_2]), (arr_12 [i_2])))), (((arr_12 [i_2]) ? 1 : 127))));
        var_27 *= var_5;
        var_28 ^= -2067462496;
        arr_15 [i_2] = ((+(((var_12 | var_6) | (arr_11 [i_2])))));
    }
    #pragma endscop
}
