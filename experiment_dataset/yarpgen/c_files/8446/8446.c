/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(-117, var_1)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 &= (~var_6);

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_15 = (((max((arr_2 [17] [i_1] [17]), var_7)) == (arr_3 [i_0])));
            var_16 = (max(568744878, 38597));
        }
        var_17 = (arr_1 [i_0]);
        var_18 = (max(-11912, (arr_2 [i_0 - 1] [i_0 - 1] [20])));
        var_19 = 155;
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        var_20 = (max(var_20, ((((var_7 ? -3726222393 : (((var_8 ? var_3 : 31)))))))));
        var_21 = (max(-3726222418, (arr_1 [i_2])));
        var_22 = (max((var_12 - 15391), -1));
        var_23 = max((max((max((arr_0 [i_2 - 1]), 255)), var_7)), (max(((var_5 ? (arr_8 [i_2 - 1]) : var_5)), (max((arr_3 [i_2]), var_0)))));
        var_24 = (max((max(var_3, ((15370 ? (arr_4 [i_2 - 1]) : (arr_5 [i_2] [i_2] [12]))))), (((~(max((arr_7 [i_2]), 1515197751)))))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        arr_19 [i_4] [i_4] [i_3 + 2] [i_6] [i_4] = 448268156;
                        arr_20 [5] [i_4] [i_4] [1] = ((var_5 % (max(3556674941, -1515197751))));
                        var_25 |= arr_9 [i_3] [i_4];
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_23 [i_3] [i_4] [i_5] [i_7] = (max(var_11, ((((max(568744878, 152))) ? -1515197751 : -27770))));
                        arr_24 [i_3] [i_4] [i_5] [i_5] [i_3] [i_5] = -1515197754;
                    }
                    var_26 = max(1, ((666673266 ? 40 : (~12035))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_27 = 120;
                                arr_30 [i_4] = -var_8;
                            }
                        }
                    }
                }
            }
        }
        var_28 = ((-7988241915537925682 ? (((var_3 ? var_9 : (arr_12 [i_3])))) : (arr_29 [0] [i_3] [0] [i_3] [i_3])));
        var_29 = var_8;
    }
    var_30 = var_11;
    #pragma endscop
}
