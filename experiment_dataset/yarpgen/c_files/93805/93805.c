/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (836025214 >= 3458942082);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [1] = (((-(var_3 ^ var_0))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = var_2;
            arr_7 [i_0] = 336986187161399097;
        }
        arr_8 [i_0] = (min((((((arr_2 [i_0] [i_0]) || 0)) ? ((((arr_5 [i_0]) && 193))) : (336986187161399098 || 31))), var_7));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_13 = (max(var_13, ((max((arr_15 [i_5] [9] [i_2]), (arr_20 [i_2] [i_5]))))));
                        var_14 = (min(var_14, (arr_2 [15] [9])));
                        arr_21 [i_4] [i_5] [i_2] [12] [i_2] = (10178 & 3392868227703603458);
                        var_15 = (((~(min(30997, (arr_11 [i_2]))))));
                        arr_22 [i_2] [i_3] [i_5] [i_5 + 1] = ((var_9 / (((arr_12 [i_3]) * 336986187161399083))));
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_16 = ((((max(-304, 19320))) > var_10));
                        var_17 = (min(var_17, var_6));
                        var_18 = var_8;
                        var_19 = 14641671751742584285;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_2] = max((arr_18 [i_2] [i_3] [i_4] [i_2]), (max(-2125434277, ((min(var_1, 123))))));
                        var_20 = 3392868227703603458;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_3 + 3] [i_2] = (arr_19 [i_8] [i_3 - 2] [i_3 - 2] [i_2] [i_2]);
                        var_21 = (max(-27145, -29235));
                        var_22 = var_5;
                    }
                    var_23 = var_11;
                    var_24 = (var_7 / 1964945727);

                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_25 -= ((~(arr_32 [i_3] [i_3] [i_4] [i_4] [i_3])));
                        var_26 = var_11;
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_41 [i_2] [i_3] [i_10] [i_2] = (!18109757886548152518);

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_45 [i_2] [i_2] [6] [i_4] [i_10] [i_11] = 0;
                            arr_46 [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 2] |= var_7;
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(((16686141203904202019 ? 45 : -15651)), (((-6078511712911587189 == (-30 && 6206619701667845402))))));
    #pragma endscop
}
