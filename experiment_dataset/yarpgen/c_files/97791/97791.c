/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (var_5 - 7066474762517570149);
    var_16 = ((~(((116 <= var_14) ? (((-32767 - 1) + 7066474762517570169)) : (var_14 / var_3)))));
    var_17 = ((-1073741824 ? var_3 : (1073741840 & 97)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 ^= (~25);
                    var_19 = (i_0 % 2 == zero) ? (((0 << (((((arr_1 [i_0]) + (max(var_2, (arr_5 [i_0] [i_0] [i_0] [i_2]))))) - 3519627961446985338))))) : (((0 << (((((((arr_1 [i_0]) + (max(var_2, (arr_5 [i_0] [i_0] [i_0] [i_2]))))) - 3519627961446985338)) - 2620762586191830556)))));
                }
            }
        }
        arr_7 [i_0] = var_7;
        var_20 = (min((min(var_1, 237)), ((((arr_1 [i_0]) < (((81 ? 56138 : 225))))))));
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_21 += ((((((-9223372036854775807 - 1) && -7066474762517570149))) >> (((max(2441800635211461832, var_5)) - 2441800635211461803))));
        var_22 = (max(var_22, ((((((var_1 ? (min(-98, var_14)) : var_0))) ? ((-((var_6 ? (arr_4 [12] [2] [i_3]) : var_4)))) : ((((max((arr_2 [i_3]), var_1))) ? (62205 ^ 1) : ((1 ? var_7 : var_2)))))))));
        var_23 -= (arr_0 [10] [10]);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (((((arr_6 [i_4] [i_4] [i_4] [i_4]) ? var_8 : -2147483643)) + ((var_7 ? (arr_6 [i_4] [i_4] [3] [3]) : (arr_6 [i_4] [i_4] [i_4] [i_4])))));
        arr_15 [i_4] = ((~(max(((((arr_2 [i_4]) ? var_1 : 1))), (arr_9 [5] [i_4])))));
        var_24 = (min(var_24, (((((min((arr_12 [i_4] [i_4]), 1579138430))) ? ((((arr_12 [i_4] [i_4]) ? var_13 : var_0))) : ((~(arr_12 [i_4] [16]))))))));
    }
    #pragma endscop
}
