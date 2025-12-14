/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min((var_7 - 21636), ((var_3 ? -18197 : 9223372036854775807)))), ((((max(77625226, 77625226)) / 77625226)))));
    var_14 &= (!-662360174);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (~3087978943785582899);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_8, (min(3087978943785582897, 62640))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_17 = (max(((((min((arr_8 [i_0] [i_1] [9] [4] [1] [9]), (arr_0 [i_0])))) ? 4217342069 : (arr_5 [i_3] [i_4] [1]))), ((var_7 | (arr_5 [i_0] [i_1] [i_1])))));
                                var_18 = 2702893795;
                                var_19 = 0;
                                var_20 = ((((min(7862, ((5794489952564269364 ? 27049 : 4037238572108193331))))) ? (arr_8 [i_2] [i_1] [i_1] [10] [i_4] [i_2]) : (((((27049 ? (arr_0 [i_0]) : var_2)))))));
                                var_21 = (((((min((arr_4 [i_0] [i_1] [i_2]), (arr_9 [8] [1] [i_1] [i_2] [6] [i_4] [i_0])))) ? var_4 : (~15176002454416641876))));
                            }
                        }
                    }
                    var_22 = (max(var_22, (arr_8 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2])));
                    var_23 = (arr_6 [i_0] [i_0] [i_0] [i_2] [i_2] [i_1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_24 = (arr_11 [i_0]);
                    var_25 = (!var_10);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_26 *= -31873;
        var_27 = ((-662360174 ? 3522990039 : 2896));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_28 = (max(var_3, 7862));
        var_29 -= ((((max((min(var_1, var_3)), ((((arr_19 [i_8]) ? 1 : (arr_20 [i_8]))))))) ? (arr_20 [i_8]) : (var_7 ^ -6945736411059244013)));
    }
    var_30 += ((var_5 ? var_7 : var_4));
    #pragma endscop
}
