/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_4 [11] |= (arr_0 [1]);
        arr_5 [i_0] [i_0] |= var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_12 -= ((-(arr_9 [8] [i_2])));
            arr_11 [i_2] = ((-(arr_6 [i_1])));
            var_13 = (max(var_13, var_1));
        }
        var_14 += ((~(arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_15 = (((arr_2 [i_3 - 2]) ? -6486532053966436892 : var_4));
        var_16 += var_5;
        var_17 *= var_10;
        arr_15 [i_3 - 2] = var_3;
        var_18 = ((!(arr_8 [i_3 - 2])));
    }
    var_19 = ((((((max(var_2, var_8))) ? (max(3831007654, 6486532053966436892)) : (((var_3 >> (var_6 - 2985610304326821740)))))) | ((((~var_1) ? (~30297) : 463959648)))));
    var_20 += (((((-((var_3 ? var_4 : var_1))))) || ((max(var_1, (((var_5 ? var_5 : var_9))))))));
    #pragma endscop
}
