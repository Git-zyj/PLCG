/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_11 == 127) ? var_12 : (min(var_14, 14906462921897763853)))) != var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] [i_4] = ((((min(18446744073709551613, (max(3540281151811787745, -1))))) && (((((min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_10))) ? ((32764 ? 3540281151811787759 : (arr_9 [i_1] [i_1]))) : ((((arr_1 [i_4]) ? var_0 : var_2))))))));
                                var_17 = (arr_1 [2]);
                                var_18 = var_4;
                            }
                            var_19 = min((((arr_8 [i_0]) ? (arr_8 [i_1]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))), (arr_1 [i_0]));
                        }
                    }
                }
                arr_15 [4] [i_1] [9] = (((arr_9 [7] [i_1]) ? ((max((!var_7), (var_2 > 14906462921897763844)))) : 67));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [8] [i_1] [i_5 - 2] [1] = ((!(((14906462921897763876 ? 3540281151811787757 : 63)))));
                            var_20 += ((((max(((max(-1, -13))), (31382 | 34163)))) == (min(274918690758418366, (arr_3 [i_5 - 2] [2] [i_0])))));
                            var_21 |= ((31373 ? -1 : 3540281151811787759));

                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_22 = ((min(((min(var_4, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((var_1 ? 3 : 18171825382951133256)))));
                                var_23 = var_2;
                                var_24 = (min(((+(((arr_22 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [6]) * (arr_2 [3] [i_0] [i_0]))))), (arr_18 [i_6] [i_6] [i_0] [i_0] [i_0])));
                                var_25 = ((((-((var_11 ? (arr_6 [3] [i_1]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))) / (min(1479485068217702286, 1214777296760578067)));
                            }
                            for (int i_8 = 3; i_8 < 8;i_8 += 1)
                            {
                                arr_26 [i_8] = (arr_17 [i_6]);
                                var_26 = -64;
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1)
                            {
                                var_27 = (!1);
                                var_28 = (!16);
                            }
                            arr_29 [1] [i_1] [i_5] [i_5] [1] [0] = (+((23950 ? ((868312964602764276 ? (arr_6 [i_0] [i_5]) : var_14)) : ((var_14 >> (var_8 - 3208463715076183981))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
