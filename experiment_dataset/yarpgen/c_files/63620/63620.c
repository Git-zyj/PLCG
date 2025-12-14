/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 &= ((((((1 ? var_6 : (arr_4 [i_0 + 2] [i_1]))))) ? (((!(((1 ? 57223 : var_3)))))) : var_12));
                var_20 = (1 | 1);
                arr_5 [i_1] = (min(((1 ? 1 : var_14)), -1210050167));
                arr_6 [i_0] [i_1] = (min((max((max(2001549955, 1)), (1 <= 1))), (((!(arr_1 [i_1] [i_0 + 2]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 &= (max((max((-32767 - 1), (arr_0 [i_2] [i_2]))), (arr_0 [i_2] [i_2])));
        arr_11 [i_2] = (((arr_7 [i_2]) ? ((((max(var_1, 1))) ? (~1) : 1)) : ((~(max((arr_8 [i_2]), 1879191254))))));
        var_22 = ((var_9 ? var_8 : ((var_14 ? (var_3 && 0) : (arr_7 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_23 = ((((((var_5 ? (arr_12 [i_3] [i_3]) : 1)))) ? (((var_2 || ((min(1, (arr_12 [i_3] [i_3]))))))) : (65280 || 1)));
        arr_14 [i_3] = (((((1 + (arr_13 [i_3])))) ? (((arr_13 [i_3]) - var_7)) : ((1678791929 - (arr_13 [i_3])))));
        arr_15 [i_3] [i_3] = var_2;
        var_24 = var_5;
        arr_16 [i_3] [i_3] = (max((1 * 1), 1));
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_25 = (min(var_25, ((min(((~((15617610068400114168 ? 15617610068400114168 : 1)))), ((max((arr_17 [i_4 - 2]), 1))))))));
        arr_21 [i_4] [i_4] = (max((!1), (max(1, (max(65535, -3510))))));
        var_26 = ((~((2147483647 ? 1 : 9223372036854775807))));
    }
    #pragma endscop
}
