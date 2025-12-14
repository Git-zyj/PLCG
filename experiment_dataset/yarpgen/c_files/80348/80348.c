/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 |= ((((~(arr_1 [1])))) ? var_7 : ((((arr_4 [i_2 - 2] [i_2 - 2]) > var_0))));
                    var_13 = (max(var_13, ((max((arr_6 [i_0] [i_2 + 1] [1]), (max((arr_4 [i_2 - 2] [i_1]), (arr_6 [8] [i_2 - 1] [i_2]))))))));
                    var_14 &= (max(29258, (max(-174278661, -753))));
                    var_15 |= ((((0 > (max(18446744073709551615, -7572741023073127774))))) << ((((((((((arr_5 [4] [i_0] [1] [6]) + 9223372036854775807)) >> (var_8 - 14871841456052300065)))) ? ((((arr_6 [i_0] [12] [i_2]) & (arr_6 [i_2] [i_0] [i_0])))) : ((var_11 ? (arr_3 [i_0] [6]) : 0)))) - 3832320829)));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((((max(((~(arr_5 [0] [9] [i_2] [i_0]))), (max(-5593434310023839281, 1))))) ? ((~(((arr_6 [i_0] [i_1] [i_2]) ? var_8 : (arr_2 [i_1] [i_2]))))) : ((18446744073709551614 ? -8876366585738116877 : 18446744073709551615))));
                }
            }
        }
    }
    var_16 = (~((-((var_2 << (-7572741023073127771 + 7572741023073127806))))));

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_17 = (max((((((max(var_9, 18446744073709551600))) ? (max((arr_9 [8] [i_3]), -1)) : (max(-9223372036854775801, (arr_9 [i_3] [i_3])))))), (arr_9 [12] [i_3])));
        arr_10 [16] [i_3 - 1] = (arr_9 [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_13 [i_3] |= (max((((~(-2147483647 - 1)))), (max((arr_9 [i_3 + 2] [i_3 + 1]), 134217727))));
            var_18 = (max(var_18, ((var_7 ? ((((max(-1, 18446744073709551600)) < ((max((arr_8 [i_3] [i_3]), var_7)))))) : ((((~18014757840658109414) >= ((max(32766, (arr_12 [21] [17])))))))))));
            arr_14 [i_4] [i_4] [i_4] = (max(var_11, (arr_8 [i_3 + 2] [i_3 + 2])));
        }
    }
    #pragma endscop
}
