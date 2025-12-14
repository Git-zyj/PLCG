/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 989109273;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 *= ((-(arr_2 [i_0])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_13 = (arr_8 [i_4] [20]);
                            var_14 = 33;
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_15 = (((arr_2 [i_5 + 2]) || (arr_2 [i_5 - 1])));
                            arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_2] [i_3] [i_1] [18] = (!-868080217);
                        }
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_16 = (~13174);
                            var_17 = ((1 ? -13175 : 512306268));
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            var_18 = (min(var_18, (((-(~765125551))))));
                            var_19 = ((arr_14 [i_2] [i_2] [1] [i_7 + 1] [1]) / (arr_14 [i_2] [i_7 + 2] [21] [i_7 + 1] [i_7]));
                            var_20 ^= (((((1 + (arr_2 [i_7])))) ? 15738381887341708807 : (((var_8 ? (arr_4 [i_0] [5] [i_2]) : 989109277)))));
                            var_21 = (~-7674170512003251167);
                            var_22 = -989109274;
                        }
                        var_23 *= 11083;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_24 = var_7;
                        var_25 = ((var_5 ? (((~(((arr_20 [i_8] [i_1] [i_8]) ? 0 : -1095893824))))) : ((((2356500559143264750 ? 1738142295131207989 : 46667)) & 1))));
                    }
                    var_26 = ((765125551 ? var_1 : 90));
                    var_27 = (min((min((~var_3), (var_2 & -117))), var_0));
                }
            }
        }
    }
    #pragma endscop
}
