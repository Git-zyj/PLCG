/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = ((29680 ? (var_0 % 2191355775) : (((arr_8 [i_0] [i_1] [i_2] [i_1]) ? (arr_5 [i_1]) : (max(var_8, 2147483634))))));
                                arr_14 [i_0] [i_1] [i_3] [11] [i_1] [i_3] = (arr_5 [i_1]);
                                arr_15 [i_1] [i_1] = (((((1 ? 36725 : 7294297148267553296))) ? ((max(1827794956, -7675))) : (max((arr_13 [i_0] [i_2 + 3]), (arr_13 [i_3] [i_2 + 3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_13 = (683701417 / 1309795402);
                                var_14 = (((118 ^ (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (26398 - 26393))))));
                                var_15 = (+(min(255, (((arr_3 [i_2]) ? 78 : 11616883396090968931)))));
                                arr_22 [1] [i_1] [i_1] [i_5] [i_5] [i_1] [i_0] = ((((arr_8 [i_0] [i_2 + 4] [i_0] [i_1]) ? var_4 : var_7)) - -9188666639499528173);
                                var_16 = var_5;
                            }
                        }
                    }
                    var_17 = (((max(705306656, (0 || -9697))) != (arr_6 [i_0] [i_2 - 1])));
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_27 [1] [i_1] [i_7] [1] [i_1] = ((min(var_3, (arr_12 [1] [i_8 + 2] [i_8] [i_1] [i_8 + 2] [i_8 + 1] [i_8]))));
                            arr_28 [i_1] [i_1] [i_7] [i_8] = 1;
                        }
                    }
                }
                var_18 = ((40 ? 29448 : -1));
                arr_29 [i_1] [i_1] = var_7;
            }
        }
    }
    var_19 = (-9223372036854775807 - 1);
    #pragma endscop
}
