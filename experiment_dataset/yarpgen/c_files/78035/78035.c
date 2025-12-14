/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2047;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_21 += (((((min(var_9, var_0)) + 2147483647)) >> ((((-8935718453107600916 ? -4419249862577656921 : -7085514675482150463)) + 4419249862577656930))));
            arr_6 [i_0] [i_1] = var_14;

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_22 = max((max((1496878063 & 0), ((1 ? 1 : (arr_3 [16] [i_2]))))), 1);
                var_23 = var_0;

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_24 = (max(1, 7085514675482150458));
                    arr_12 [i_2] = max(1, 7085514675482150463);
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_25 = var_5;
                            var_26 = -4442589288578979815;
                            var_27 = (max((arr_18 [i_5] [i_7 + 2] [1] [i_7] [i_7]), (max(-3626148555854409145, (-9223372036854775807 - 1)))));
                        }
                    }
                }
            }
            var_28 = var_17;
            arr_21 [i_4] [12] = ((((min(((((-976146272 + 2147483647) >> var_1))), -7064331586361500833))) ? (((((max(-471165263, -4860386399430758536))) ? var_6 : -1667042010))) : -7064331586361500833));
            arr_22 [i_0] = max((((((arr_8 [i_0] [i_0] [i_4] [1]) >> 1)) >> ((((var_8 ? 7085514675482150458 : -77823711)) - 7085514675482150417)))), ((min(1, 1))));
            var_29 = var_4;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_25 [i_8] = 1487239178;
            var_30 = ((+(min((~var_1), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_8])))));
        }
        var_31 -= max((((((var_7 ? var_4 : var_14))) ? (1 * var_12) : (1 * var_7))), (var_17 * 1));
    }
    #pragma endscop
}
