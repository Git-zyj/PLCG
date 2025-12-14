/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_1, (((((-1998052097 ? 23781 : -1998052097))) ? (!-5053689216275191780) : (var_12 <= var_11)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (max(-1998052116, 1998052097));
        var_17 = (((-9223372036854775807 - 1) ? (arr_2 [i_0] [i_0]) : ((1998052116 ? -70 : -80))));
        arr_5 [i_0] = ((-((11476777554849768102 ? 53 : -97))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_18 = (min(((max(47617, -22))), (!22351)));
            arr_11 [i_1] [i_1] [i_1] = (((((-6072723679252557738 ? -73 : -70))) ? ((247 * (arr_10 [i_1] [i_2 - 1]))) : (17021730407096458585 == -73)));
            arr_12 [i_1] = (max(231, 122));
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_19 = (((-17795 || -122) ? (arr_8 [i_1] [i_3]) : ((var_8 ? (arr_6 [i_1 - 1] [i_3 - 1]) : var_6))));
            var_20 = (~9223372036854775796);
            var_21 = (max((min((arr_6 [i_3 + 2] [i_1]), 96)), -22));
        }
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            arr_20 [i_1] [i_1] [i_1] = var_4;
            var_22 ^= 576460477425516544;
            var_23 = (arr_13 [3] [i_1]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_30 [i_1] [i_4] [i_1] [i_6] [i_7] = (-16 + -43);
                            var_24 = (max(((18446744073709551615 ^ ((min(70, var_1))))), (((123 ? -43 : -6986620768862744476)))));
                            var_25 = (max(((77 ? 6297 : ((min(77, (arr_24 [i_6] [i_7])))))), -122));
                        }
                    }
                }
            }
            var_26 = ((min(-92, var_14)));
        }
        var_27 = var_11;
    }
    var_28 = var_12;
    var_29 = (-18638 || var_6);
    var_30 -= (1023936035 != var_9);
    #pragma endscop
}
