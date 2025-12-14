/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (var_5 - -var_5);
    var_18 = (~53);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_19 = ((!(arr_1 [i_0])));
        var_20 = (-(~var_16));
        var_21 = ((((var_16 ? var_11 : (arr_1 [i_0])))));
        var_22 = (arr_0 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_23 ^= 561492168;
            var_24 = var_1;
            var_25 ^= 10323515079938814074;
        }
        var_26 = ((((max(((max(23997, (arr_2 [i_1 + 1] [i_1])))), 4465720904912435351))) ? (65535 - -60) : (min((arr_3 [i_1 + 1]), (((arr_4 [i_1]) & (arr_7 [i_1])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_27 = (((((max((arr_11 [i_1]), 1309213773)))) == ((max(11046459581194917101, var_8)))));

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_28 = ((+((max(-88, ((((arr_10 [i_5] [i_3 + 1] [i_3 + 1]) || (arr_8 [i_1] [i_1])))))))));
                        var_29 ^= ((+(max(-var_10, (max((arr_3 [i_1]), 16705795306421442859))))));
                        var_30 ^= min(var_3, 6355457479282563498);

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_31 *= ((~((32 ? -53 : (arr_10 [i_1] [8] [i_1 + 1])))));
                            var_32 = ((((((-40 ? var_6 : 1)))) & 11046459581194917101));
                            var_33 |= 16705795306421442867;
                        }

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [7] = 11046459581194917120;
                            arr_23 [i_1] [i_3 - 1] [i_1] [i_1] [i_7] [i_3 - 1] = (((((((max(11046459581194917083, (arr_7 [i_1])))) ? 65535 : (max(11046459581194917083, (arr_8 [i_1] [i_3])))))) ? ((~(arr_15 [i_7]))) : var_4));
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            var_34 &= (((arr_9 [i_5] [i_5 - 2]) / (16710392226782169272 > 1)));
                            var_35 += ((((!(arr_2 [i_1 + 1] [i_3 + 1])))));
                            var_36 = max(-var_16, var_5);
                        }
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_37 = (max(var_37, ((max((max(var_14, var_15), -2014122143))))));
                            arr_32 [i_1] [i_3] [i_4] [i_3] [i_1] [i_1] = ((~((~(~-69)))));
                        }
                        var_38 = 2014122147;
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_39 = ((-(((arr_5 [i_1] [i_1]) / 11))));
                        var_40 += (max(((-(arr_2 [i_3] [i_3]))), var_14));
                    }
                }
            }
        }
        arr_36 [i_1] = max(((-var_15 / ((max((arr_9 [i_1] [i_1]), var_7))))), ((max((arr_3 [i_1]), (arr_4 [i_1 + 1])))));
    }
    var_41 = 62;
    #pragma endscop
}
