/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((max(-37550508, 3594430132))) ? ((((44370 > (arr_2 [i_0]))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) % (arr_2 [i_0]))))) : (-6 >= 65011));
        var_12 &= (((((arr_1 [i_0] [i_0]) ? ((((arr_2 [i_0]) ? var_3 : var_6))) : 638022123)) % ((((((arr_2 [i_0]) ^ 27583900)))))));
        var_13 = (min(89423121, 6));
        var_14 = (max((max(((((arr_2 [21]) ^ 3025))), 11564769933526362430)), 0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] |= (min(((((max(var_0, 3656945172))) ? ((~(arr_5 [i_1] [i_1]))) : -1968482913)), (-6 & 22223)));
        var_15 = ((32754 ? -21972 : (((!(arr_4 [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_16 = 3656945172;
        var_17 = (arr_5 [i_2 + 1] [i_2 - 2]);
        var_18 = (max(var_18, (((((-20612 ? ((((arr_2 [i_2]) <= 1282212967))) : (arr_1 [i_2 - 2] [i_2])))) ? ((((23645 | var_8) ^ (var_5 | 37792)))) : (((((arr_1 [i_2] [i_2 - 1]) >= var_1)) ? (32756 == var_1) : (((arr_2 [17]) ? 86 : var_4))))))));
        var_19 = (max(var_19, (arr_2 [i_2 - 2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            var_20 = var_3;
            var_21 = 30517;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_22 += var_9;
            var_23 = (min(var_23, (((var_6 ? (arr_12 [i_3] [i_3]) : (18592 | 25521))))));
            var_24 = (!-18587);
        }
        var_25 = (((arr_1 [2] [2]) || (-35 | var_3)));
        var_26 = (((((1351241304 ? -3676 : (arr_17 [4] [i_3] [i_3])))) ? (((arr_14 [i_3] [3] [i_3]) ? 18579 : var_1)) : ((32332 ? var_7 : var_11))));
        arr_18 [i_3] = (arr_13 [i_3]);
    }
    var_27 = (min((((((var_0 ? var_3 : var_8))) ? (1282212958 % var_11) : (255 || var_3))), var_8));
    var_28 = var_6;
    #pragma endscop
}
