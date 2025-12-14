/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 |= ((((min(var_2, ((!(arr_0 [15])))))) - (((!((((arr_2 [i_0] [1] [i_1]) * var_9))))))));
            var_15 = var_0;
            arr_4 [i_1] = (min((((!-9223372036854775794) ? var_12 : (-2789573102902813353 || 54801))), (((((57280 ? 5 : var_7)) <= var_0)))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [20] [i_2] = (-2938227423824119643 != 1);
            arr_9 [i_0] [i_0] [i_0] &= (arr_6 [i_0] [i_0]);
        }
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            var_16 = (min(var_16, 4294967292));
            var_17 = (65535 == 11198433063942215429);
            var_18 = ((1 <= 1) == ((max((arr_10 [i_3 - 2] [i_3] [8]), var_6))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_19 = (((arr_11 [i_0]) % (arr_11 [i_4])));
            arr_15 [24] [i_4] [i_0] = (!(((arr_3 [i_4] [i_0]) != (arr_1 [i_0] [i_4]))));
            var_20 *= (((arr_10 [22] [i_0] [i_4]) == (var_0 != 1)));
        }
        arr_16 [i_0] [i_0] = 0;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_21 = (((((var_6 ? var_4 : 10733))) ? var_2 : var_11));
        arr_20 [i_5] |= ((!(arr_14 [i_5])));
        var_22 -= ((((var_5 & (arr_6 [i_5] [8]))) <= (~var_4)));
        arr_21 [i_5] = var_6;
    }
    var_23 = ((((min(var_12, (var_9 != var_10)))) + (((((var_0 ? var_12 : 54781)) == var_4)))));
    #pragma endscop
}
