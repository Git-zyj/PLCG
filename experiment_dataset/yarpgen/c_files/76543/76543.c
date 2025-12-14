/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = 123;
        var_21 = (min((arr_1 [i_0 - 2]), (!12084576076817789377)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((!((((((arr_3 [i_1] [6]) == (arr_4 [i_1]))) ? (((var_7 ? var_5 : (arr_3 [i_1] [i_1])))) : (min((arr_3 [i_1] [i_1]), var_17)))))));
        var_22 = (arr_3 [i_1] [i_1]);
        var_23 = (max((((arr_4 [i_1]) ? -var_17 : (arr_3 [i_1] [i_1]))), (arr_3 [i_1] [8])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [17] = (~(!var_12));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_6] [11] [1] [i_2] = (+((((-1430698494 ? (arr_7 [i_2]) : (arr_14 [i_6] [16] [i_4]))) + 285557348)));
                            arr_21 [i_6] [i_3] = ((~(max((~4), (min(120, (arr_18 [i_6] [i_2] [i_5] [i_6] [i_4] [0] [i_2])))))));
                            var_24 = (((max(-7321248601435528934, -4005322748742366349))) | (((arr_15 [i_5] [i_5] [i_5 - 2] [i_5 - 2]) ? (arr_7 [i_5 + 1]) : 4077394011)));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_6] = (!12135501479174632646);
                        }
                    }
                }
            }
            arr_23 [i_3] = ((!(arr_15 [6] [6] [i_2] [i_2])));
            arr_24 [i_2] = (arr_14 [15] [i_3] [15]);
            arr_25 [i_2] = ((-(((-7711329957086165279 + 28190) * (!var_10)))));
        }
        var_25 = (min(var_25, -1));
    }
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        arr_29 [11] [i_7 + 2] = (((((arr_26 [i_7]) && (arr_26 [i_7 - 2]))) || (arr_28 [i_7 + 4])));
        arr_30 [i_7] = (arr_28 [i_7]);
        arr_31 [i_7] [i_7] = ((((((-6267526910984595967 ? 0 : 28190)) % 1)) << (((max((((!(arr_28 [i_7 + 1])))), (max(var_14, var_0)))) - 13501872497752396934))));
        arr_32 [i_7] [i_7 - 3] = arr_28 [i_7 + 3];
    }
    var_26 = (max(var_26, ((max((min(-60, var_10)), -195)))));
    var_27 = var_5;
    #pragma endscop
}
