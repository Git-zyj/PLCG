/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_2, var_10))));
    var_12 = (min(var_12, var_0));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((-(4504924032155576838 != 1200063419)));
        var_13 -= ((((((var_7 | 66584576) ^ (4228382718 || -62)))) ? ((((((arr_1 [i_0]) & (arr_0 [i_0])))) | (max(var_7, var_9)))) : (var_3 - 30621)));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_7 [3] = 51988;
        var_14 = 3366313017;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = 118;
        var_15 -= var_1;

        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_3 + 1] [i_3] = (((arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 2]) + (arr_8 [i_3 + 1])));
            var_16 = arr_12 [i_2] [4];
            var_17 *= (((((var_4 ? var_0 : var_1))) ? ((((arr_8 [i_2]) && var_10))) : (-48 && -969197330)));
            var_18 = (min(var_18, ((-(arr_11 [i_3 + 2] [i_3] [i_3 + 2])))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_17 [20] [20] = (min(-117, (var_5 & 9223372036854775792)));
            var_19 = ((((max((arr_12 [i_4] [i_2]), (min(var_0, var_5))))) ? 5795885220106900002 : ((((13520 - var_5) ? 116 : ((min(var_1, (arr_9 [20])))))))));
            var_20 *= max(-var_1, var_1);
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_21 += (max(-var_6, (12650858853602651641 - 969197315)));
            var_22 ^= 42;
        }
    }
    #pragma endscop
}
