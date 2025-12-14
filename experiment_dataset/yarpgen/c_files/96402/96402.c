/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((!((max(var_7, (((-127 - 1) ? -3 : (-127 - 1))))))));
        arr_5 [i_0] = 992664764;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_1] [3] [i_2] = ((~((var_10 ? 92 : (arr_10 [i_2 + 2] [i_2 - 1] [i_1 + 1])))));
            var_14 = (((((-3 ? 255 : 59))) ? (((~(~var_8)))) : -var_10));
        }
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_15 = ((~((11 ? 244 : var_5))));
            var_16 = var_8;
            arr_15 [i_3] = (9896629714678784942 ? 4146036370 : (-127 - 1));
        }
        arr_16 [12] [i_1 + 2] = 49;
        var_17 = ((-(max(195, 2850437090))));
    }

    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_18 -= (((((-(arr_1 [i_4]))) ? ((2850437108 ? 11765992372471607484 : 184)) : 197)));
        arr_21 [i_4] = (((((var_12 ? var_10 : 34))) + (var_10 * 16030506957717452786)));
        var_19 = (~8957);
        arr_22 [i_4] [i_4] = -82;
        var_20 = ((((!(10303 != 48)))));
    }
    var_21 = ((11765992372471607484 ? 203 : 0));
    #pragma endscop
}
