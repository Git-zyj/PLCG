/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (((!(arr_0 [i_0 - 1]))))));
        var_16 |= (arr_1 [5]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_17 = (min(var_17, ((((arr_5 [i_2]) ? (arr_5 [i_2]) : (((((arr_3 [i_1]) < (arr_7 [i_1] [i_2] [i_2]))))))))));
            var_18 = (min(var_18, var_5));
            var_19 -= var_8;
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_20 &= ((~(((arr_9 [i_3 + 1]) ? (-6169868836657636496 != -6169868836657636493) : 3973023568215596300))));
            var_21 += 4611686018427387904;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_22 -= (6169868836657636493 ? (arr_8 [i_4 + 1] [i_4 + 1] [i_1]) : 512);
            var_23 -= ((-3376 | (var_7 & 3973023568215596300)));
            var_24 = (max(var_24, (-127 - 1)));
        }
        var_25 ^= (arr_11 [i_1] [i_1] [20]);
        arr_14 [i_1] [i_1] = (((arr_12 [i_1] [i_1]) <= (((!9223372036854775807) >> ((((arr_7 [20] [i_1] [i_1]) < (arr_5 [i_1]))))))));
    }
    var_26 = (max(var_26, var_5));
    var_27 = (max(var_27, -var_3));
    var_28 = (min(var_28, (~var_12)));
    #pragma endscop
}
