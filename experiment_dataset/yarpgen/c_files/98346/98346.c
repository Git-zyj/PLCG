/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 = (min((arr_5 [i_0] [i_1 + 1]), 0));
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = (((((0 ? -14 : (!22)))) >= ((2084080501 ? 9223372036854775807 : 210))));
                                var_21 = 32762;
                            }
                            var_22 = (arr_11 [i_0] [i_1] [i_3] [i_1 - 4] [i_0] [i_3]);
                            arr_16 [i_0] [i_1] [i_2] = (((((-3385221019720421799 ? 9223372036854775807 : 0))) >= ((+((0 ? (arr_11 [i_3] [i_2] [i_2] [i_1 - 1] [i_1] [i_0]) : (arr_12 [i_2] [i_1] [i_2] [i_3] [i_1])))))));
                        }
                    }
                }
                var_23 = ((((((arr_12 [i_0] [i_0] [i_1] [i_1 - 3] [i_1]) >> (((arr_12 [i_0] [i_1 - 1] [i_0] [i_1 + 1] [i_0]) - 13761504600536868942))))) ? ((((32 >= 1235274402) / ((min(32762, 32)))))) : (max(((577086336054498738 >> (65535 - 65474))), (((arr_3 [i_0]) ? (arr_9 [i_1]) : (arr_7 [i_1] [i_1 - 4] [i_1])))))));
                var_24 = (((min(((-8137565699662283831 ? 17869657737655052877 : (arr_8 [i_0] [i_1 - 2]))), (((arr_3 [i_1 + 1]) ? (arr_7 [i_1] [i_1 - 1] [i_1]) : -15937)))) == (0 / -2405855742)));
                var_25 |= ((((((min((arr_13 [i_1 + 1]), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))) ? (min((arr_12 [i_1 + 1] [i_1] [i_0] [i_0] [i_0]), (arr_4 [i_1]))) : ((((-9223372036854775803 >= (arr_13 [i_1]))))))) == ((((!((((arr_2 [i_1]) ? 14373318279149569227 : 4272490116938065415)))))))));
            }
        }
    }
    var_26 = var_6;
    var_27 = ((((max(((max(var_0, 50073))), ((var_3 ? 15439 : 4088))))) ? 32726 : var_18));
    #pragma endscop
}
