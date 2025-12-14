/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((var_9 ? var_3 : (((-102 ? 752309470 : var_13))))) % var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 *= arr_1 [i_0] [i_1 + 1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (max(752309470, (max(((min((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_3]), 0))), ((102 ? 267869780 : var_9))))));
                            arr_10 [i_1] [i_0] [i_0] [i_1] = ((((min(-1156922373963568235, (min(-1, -1918869011))))) ? var_0 : (min((arr_6 [i_1] [i_1 + 1] [i_2]), ((((arr_7 [i_0] [i_0] [i_0]) / -93)))))));

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                var_17 = (max(var_17, ((((arr_6 [i_0] [8] [i_4 - 1]) >> (var_2 % 93))))));
                                var_18 &= var_13;
                                arr_15 [i_3] [8] &= var_1;
                            }
                            arr_16 [i_3] [i_3] [i_3] [0] [0] &= (-2704975133700862196 / -var_6);
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_19 = (max(var_19, (arr_17 [i_1 + 1])));
                        var_20 += -752309471;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_1] [i_1 + 1] [i_1] [i_1] = ((((102 ? (4736468654196010 && 11224) : 9)) > var_13));
                        arr_24 [i_1] = (((!((max(11219, 96))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_21 = (min(var_21, 0));
                        var_22 = (arr_20 [i_0] [i_0] [i_5 - 1] [i_8] [i_1]);
                        arr_28 [i_0] [i_1] [i_1] [i_1] [i_8] = (min((((var_6 < (arr_3 [i_1 + 1] [i_5 - 1] [i_8])))), (arr_11 [i_1])));
                        var_23 = (max((arr_12 [i_1] [i_1] [i_8] [i_8] [i_5]), (arr_8 [i_1])));

                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            var_24 = (min(var_24, (((var_11 % (((!var_12) - (min(8929691012516557588, (arr_1 [i_0] [i_0]))))))))));
                            arr_32 [i_0] [i_1] [1] [i_8] [i_0] = ((-125 ? (-32767 - 1) : -752309467));
                        }
                    }
                    var_25 *= var_7;
                    arr_33 [i_5 - 1] [i_5] [i_5 - 1] [i_1] = (max((max((arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1]), var_7)), (max(-8929691012516557589, (arr_12 [i_0] [i_0] [i_1 + 1] [5] [i_5 - 1])))));
                    arr_34 [i_0] [i_1] [i_1 + 1] [4] = 0;
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((min((arr_3 [i_1 + 1] [i_1 + 1] [i_5 - 1]), var_0))))));
                                var_27 -= (max(((-8929691012516557590 ? 102 : 93)), (((-32760 == (arr_3 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                            }
                        }
                    }
                }
                var_28 = (min(var_28, -80));
            }
        }
    }
    #pragma endscop
}
