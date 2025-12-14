/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_7 ? (((arr_1 [i_0]) ? (((arr_0 [i_0]) >> (5200196884863589589 - 5200196884863589558))) : (((arr_0 [i_0]) ? 9 : -24394)))) : ((23940 ? var_7 : ((min(1, -9404)))))));
        arr_3 [i_0] = ((+((((((arr_0 [i_0 - 2]) ? var_8 : var_3))) ? (arr_0 [i_0]) : 9404))));
        var_17 *= ((var_2 * (arr_0 [i_0 - 3])));
    }
    var_18 = -var_14;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_11 [i_1] [i_2] = ((((-(max(1264397177614626420, var_6)))) + 2048));
                var_19 = ((((var_13 ? (min(1264397177614626420, -11)) : ((1264397177614626411 % (arr_4 [i_2]))))) * ((((((arr_6 [i_1] [i_1]) ? (arr_7 [i_1] [11]) : var_15)) >> (arr_0 [i_2]))))));
                arr_12 [i_1] |= ((((((arr_8 [i_2]) - (arr_0 [i_1])))) ? (((var_2 != var_13) ? (arr_10 [i_1]) : (var_11 > var_1))) : ((min((((var_15 <= (arr_0 [i_2])))), (((var_10 + 2147483647) << (var_9 - 556043385))))))));
                arr_13 [i_1] [i_1] [i_1] = (~(((arr_4 [i_2]) ? (arr_5 [i_1] [i_2]) : (arr_5 [i_1] [i_2]))));
                arr_14 [i_1] [6] = ((max((8779316069349111470 - var_14), var_3)) - ((((arr_5 [i_1] [8]) ? (((arr_9 [i_1] [i_2] [i_1]) + var_14)) : ((min(var_0, -9387)))))));
            }
        }
    }
    #pragma endscop
}
