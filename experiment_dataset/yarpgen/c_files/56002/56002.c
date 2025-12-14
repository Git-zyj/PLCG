/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((((-2780800773023114569 ? 4016841777 : var_4))) ? (arr_0 [i_3 + 3]) : 2780800773023114576)))));
                        var_14 += ((!(arr_8 [i_2] [i_2] [i_3 - 1])));
                    }

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_15 |= (~var_6);
                            var_16 ^= (((((arr_13 [i_0] [i_0] [24]) <= 4294967295)) && (arr_3 [i_1] [i_0])));
                            var_17 = ((~(arr_7 [7] [i_0] [7] [i_2] [i_1] [i_5])));
                            var_18 = (min(var_18, (!4294967295)));
                            var_19 = ((-(((arr_8 [i_4] [i_1] [i_1]) ? 6 : 2780800773023114576))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_20 = (arr_4 [i_0] [i_1] [i_4]);
                            var_21 = var_2;
                            var_22 = (((((arr_4 [13] [i_1] [i_2]) ? 1252115037 : var_10)) == (-2780800773023114592 || 1379820597)));
                            var_23 = (min(var_23, (((1 ? 1 : -1)))));
                        }
                        var_24 = ((arr_8 [i_0] [i_1] [i_2]) ? (arr_14 [i_0] [i_1]) : (arr_14 [i_0] [i_0]));
                        var_25 = var_4;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_26 = ((248 ? (var_5 / 9223372036854775807) : (arr_0 [i_7])));
                        var_27 = (arr_6 [i_7] [i_1]);
                        var_28 += var_7;
                    }
                }
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    arr_22 [i_1] = (arr_12 [i_1] [i_1] [i_1] [i_8]);
                    arr_23 [i_8] [i_1] [i_8] [i_8] = ((-2780800773023114605 ? (~var_1) : (((((((arr_3 [i_0] [i_1]) % 153339014))) || ((min(240283071823457364, (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                }
                var_29 ^= (arr_7 [i_0] [8] [8] [i_0] [i_0] [i_1]);
                var_30 = (((arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]) <= (((((((arr_15 [i_1] [i_1]) ? 122 : 0))) ? 97 : var_7)))));
                var_31 = (-2 ? var_6 : ((+(((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) ? -2780800773023114605 : var_12)))));
            }
        }
    }
    var_32 = (var_0 ? (((((2 ? 127 : 2780800773023114568))) ? 54807598 : var_3)) : (((var_12 ? (~127) : ((142 ? 158 : 6778017331605186370))))));
    #pragma endscop
}
