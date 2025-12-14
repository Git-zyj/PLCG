/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1 - 1] [i_2] [18] [1] [i_4] = 1688849860263936;
                                arr_19 [i_1] [i_3] [18] [i_2] [i_1] [1] [i_1] = (!((((((arr_2 [i_0]) + 9223372036854775807)) << (((-1688849860263937 + 1688849860264000) - 63))))));
                                var_14 -= arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_15 = (1688849860263936 > 255);
                        var_16 = (((arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_5] [i_1]) ? 7187827640655110093 : (arr_17 [i_1] [4] [i_1] [0] [i_1])));
                        var_17 &= (1 || -6917725687293872237);

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_18 = (max(var_18, ((!((!(arr_12 [i_5] [i_5] [i_5] [i_5] [i_0])))))));
                            var_19 = (min(var_19, (arr_1 [i_0] [i_0])));
                            var_20 = 1;
                        }
                        arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] = ((arr_15 [i_0] [i_0] [i_0] [1] [i_2 + 1] [i_5]) - (arr_16 [i_1] [i_2] [i_2]));
                    }
                    var_21 = (min(var_21, (~-5505571385042301626)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_30 [1] [i_1] [i_1 - 1] [i_7] = ((arr_7 [i_0] [i_0] [i_1 + 1]) || 5555935851085321797);
                    arr_31 [i_0] [i_1] [i_1 - 1] [i_1] |= -5555935851085321797;
                    arr_32 [i_1] [i_1] [i_1] = ((arr_5 [i_0] [i_1] [i_7]) && (1116892707587883008 > -5555935851085321798));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_1] [i_1] [i_1] = (1 << 0);
                    var_22 = (min(var_22, (((-1116892707587883008 * (1 * 1))))));
                }
                var_23 = (max((!1), (~-1)));
                var_24 = (((arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [1]) > (((-4438045886625102380 + 9223372036854775807) << (5555935851085321797 - 5555935851085321797)))));
            }
        }
    }
    var_25 = (var_13 || var_10);
    var_26 = (6028009991708330288 || 6082204463648382025);
    #pragma endscop
}
