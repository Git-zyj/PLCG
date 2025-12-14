/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (((1 ? var_1 : 0)));
        var_20 = ((((!(!0))) || (!var_0)));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_21 = (max((arr_3 [i_1 + 1] [i_1 - 2] [i_1]), ((~((31 ? (arr_1 [i_0 - 3]) : (arr_3 [i_0] [i_1] [i_1])))))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_22 = ((0 * (arr_1 [i_0])));
                arr_7 [i_0] [0] [i_1] [i_2] = ((~((-26 ? ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (4 - 4)))) : 1677673417))));
            }
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 = ((((1 ? (min(1, (-9223372036854775807 - 1))) : 18685)) % ((((max(48, 0))) ? (~7699417455064548432) : ((((arr_1 [i_0]) ? 0 : var_6)))))));
            var_24 = (((((max(18, (arr_9 [i_0] [1] [4]))))) ? (((((arr_1 [6]) >= 161)) ? (((arr_4 [i_3] [i_3]) ? -32767 : (arr_6 [8]))) : -49)) : 1));
            var_25 = (max(((((var_1 * 3075345978) == (9223372036854775807 || var_8)))), 7595337972620084034));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_12 [i_4] = (((arr_6 [i_4]) ? (arr_6 [i_4]) : (arr_6 [i_4])));
        var_26 = (((arr_5 [i_4] [4] [1]) && (arr_9 [i_4] [i_4] [i_4])));
        arr_13 [i_4] = (~1);
    }
    var_27 = ((((max((((var_7 ? var_5 : 1488333274))), (max(-8364489929105235642, 125))))) ? ((((32767 || var_3) > (var_16 < var_19)))) : var_10));
    #pragma endscop
}
