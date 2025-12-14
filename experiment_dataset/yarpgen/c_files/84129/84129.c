/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_17 = (((!var_11) ? -1 : (((-127 - 1) ? var_1 : var_1))));
                            var_18 = (~29692);
                            var_19 = (max(((((min(var_4, 29688))))), (max(var_7, 3661531812719690922))));
                            var_20 = ((!(~var_13)));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_21 = ((!(((var_13 * (!65535))))));
                            arr_16 [i_0] [0] [i_2 + 1] [i_3] [i_3] [15] = (min((((-9 ? 1 : 29692))), (((((-32767 - 1) ? var_12 : 141)) + -23679))));
                            arr_17 [i_0] [i_0] [12] [i_0] [i_3] [i_3] = ((((max((((-(-32767 - 1)))), -var_7))) ? (max((arr_13 [i_5] [i_3] [i_2 - 1] [9] [i_0]), -610014570)) : ((var_4 - (-58 & 35867)))));
                            var_22 *= ((((min(1, 8901180007592326808))) ? (min(((1 ? 29688 : var_12)), ((max(26626, 8))))) : (min(var_8, (min((-2147483647 - 1), -32739))))));
                            arr_18 [12] = (min(((!((min(var_10, 227))))), ((210 < ((max(-30119, var_12)))))));
                        }
                        var_23 &= -736999196197171337;
                        var_24 = ((((max(((min(202, var_8))), -736999196197171337))) ? (((((var_0 ? var_5 : var_13))) ? 211 : ((min(0, 96))))) : (!var_2)));
                        var_25 = ((((max((arr_3 [i_2 + 2] [i_2 + 2] [i_2]), (min(var_8, var_7))))) ? (((var_9 ? var_4 : var_2))) : ((433477274 ? 32477 : (min((arr_8 [i_0] [i_1] [i_0] [i_0] [i_2 + 1] [i_2 + 1]), (arr_12 [i_2 - 1])))))));
                    }
                    var_26 = (min(-30723, (min(((-(arr_15 [i_0] [i_1]))), (arr_1 [i_1] [i_2 - 1])))));
                    var_27 = (arr_1 [i_0] [4]);
                }
            }
        }
    }
    var_28 = (((min((min(196, var_1)), (max(var_0, 2018216133)))) | var_12));
    var_29 = (!0);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            {
                arr_26 [0] = (!-30723);
                var_30 = ((54 <= ((var_7 << (var_11 - 14)))));
                var_31 = 9792;
            }
        }
    }
    #pragma endscop
}
