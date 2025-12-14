/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((((-422253659 ? 10901649976705690944 : 4094))) ? var_5 : var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (!591958259) : (arr_1 [i_0])));
        var_14 = (min(var_14, -15910));
        var_15 = (min(var_15, ((min(var_1, ((min(((((arr_1 [i_0]) ? (arr_1 [i_0]) : 235))), (max(2147479552, (arr_0 [0])))))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (min(var_16, (((~((var_12 ? var_11 : var_2)))))));
            arr_5 [i_0] [i_0] [i_1] = var_11;
        }
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_4 [i_2] [i_2]);
        var_17 *= (((!-17937) | 6790442975333418410));
        var_18 = (max((((arr_8 [i_2 + 1] [i_2 - 2]) + 4294967282)), ((min((arr_8 [i_2 + 2] [i_2]), (arr_1 [i_2 - 2]))))));
    }
    var_19 = ((((((var_7 + 9223372036854775807) >> (var_1 - 367590218429084355)))) ? var_8 : ((var_10 ? ((var_9 ? var_1 : var_9)) : ((var_3 ? 2251799813685247 : var_0))))));
    var_20 = var_11;
    var_21 = var_11;
    #pragma endscop
}
