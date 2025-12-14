/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((max(((max((arr_8 [i_0] [2] [4] [8]), var_3))), -80))))));
                            var_14 = (max(var_14, -1045128060));
                            arr_12 [i_0] [i_1] [i_2] [i_0] = (min((((arr_11 [i_3] [i_3] [i_3] [i_3] [i_1 - 1] [i_1]) / (arr_9 [i_0] [i_1 - 1] [i_1] [6] [i_1 - 1] [i_0]))), ((((arr_11 [i_2] [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_1]) <= (arr_9 [i_0] [i_3] [i_1 - 1] [i_1] [i_1 - 1] [i_0]))))));
                        }
                    }
                }
                var_15 *= (min(((min(2147483640, (arr_6 [i_0] [2] [i_0])))), (((!(((-93 ? 7127 : 2147483640))))))));
            }
        }
    }
    var_16 = (max(((((max(-103, 54559))))), ((var_0 ? -var_4 : -var_8))));

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    {
                        var_17 = ((!((!(arr_21 [i_4] [i_5 - 2] [i_6])))));
                        arr_25 [i_5] [i_5] [i_6] [i_6] = ((!((((var_5 || 0) | (13942310905541103317 % -80))))));
                        arr_26 [i_7] [i_6] [i_5] [i_5 + 2] [i_4] = var_1;
                        arr_27 [i_4] [i_4] [i_5] [22] [22] = (min((!45960469), 13942310905541103338));
                        var_18 += 54559;
                    }
                }
            }
        }
        var_19 = (min(var_19, ((min((((!(((~(arr_16 [i_4] [i_4]))))))), (min(10982, ((-93 ? var_2 : 0)))))))));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_8] [i_8] [i_9 + 2] = (((min(32757, (((!(arr_24 [i_8] [i_9] [i_9] [i_9]))))))));
                    var_20 *= ((var_1 ? ((-((~(arr_20 [9] [i_9] [i_10]))))) : (!-154731018)));
                }
            }
        }
        var_21 = ((-((0 ? 2044727839 : 0))));
        arr_36 [i_8] = (arr_24 [i_8] [i_8] [i_8 + 2] [9]);
        var_22 = ((((((arr_32 [i_8] [i_8 + 1] [i_8]) ? ((max(-93, (arr_23 [i_8] [i_8 + 1] [i_8] [1])))) : 694794846))) ? (((10978 ? ((var_0 ? 0 : 75)) : ((var_6 ? 93 : -848775399))))) : (min((((4294967295 ? (arr_16 [13] [i_8 + 1]) : (arr_16 [i_8 - 1] [i_8 + 2])))), ((18446744073709551615 ? 2147483642 : 4504433168168448299))))));
        arr_37 [i_8] = -1358522819;
    }
    var_23 -= -65515;
    #pragma endscop
}
