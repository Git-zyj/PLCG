/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 12446772841018320426;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [16] [i_1] [6] = (min(var_8, ((max(var_6, 1073676288)))));
                arr_7 [1] [i_1] [i_1] = (min(((-975 ? 2851196936 : 1882710042)), (arr_2 [i_1] [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_20 += (max(-975, (!-975)));
                    arr_10 [i_0] [16] [i_2] [i_2] = -1421662721;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_14 [i_0] [14] [i_2] [i_2] = (((arr_13 [i_0] [i_1] [i_0] [i_3] [i_3]) / 2412257243));
                        var_21 = 0;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_22 += (!-1073676281);
                            var_23 ^= ((~12446772841018320426) & (((~(arr_8 [i_4])))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_24 = (12446772841018320426 || 1882710042);
                            var_25 = (max(var_25, 953));
                            arr_21 [i_2] [i_3] [i_2] [i_0] [i_0] |= (((arr_17 [i_0] [i_1] [i_2] [i_3] [7] [i_5]) ? 118 : (~2147483647)));
                            arr_22 [2] [i_3] [15] = 106;
                        }
                        var_26 = (arr_15 [9] [i_2] [i_1] [9] [17] [i_0] [9]);
                        var_27 = 1;
                    }
                    var_28 = (max(var_28, 2412257275));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [12] [i_6] [4] [i_8] = ((-1073676289 ? 112 : 15));
                                var_29 += ((((min((~13315481184245613990), (~var_18)))) ? 3407545933 : ((((arr_20 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]) + var_13)))));
                                arr_31 [i_0] [18] [i_6] [i_6] [i_8] = (((10328374325475915640 / 16383) ? 3448159546 : 33552384));
                                arr_32 [16] = (arr_8 [i_0]);
                                var_30 = ((3195 ? var_11 : 1206962136));
                            }
                        }
                    }
                    var_31 = (-1073676258 + var_10);
                    arr_33 [i_0] [i_0] [i_1] [i_6] = ((!(~3215)));
                    arr_34 [i_6] [9] [3] [12] = (max((~18), -118));
                    arr_35 [13] = var_5;
                }
                arr_36 [i_0] [i_0] [i_0] = ((32767 ? ((((3088005159 ? 1024592974 : 18446744073709551615)) - 0)) : -118));
                arr_37 [i_0] [i_0] [5] = (max(((((arr_26 [i_0] [i_0] [7] [i_1]) >= var_11))), ((21041 ? 9469 : var_7))));
            }
        }
    }
    var_32 = var_7;
    #pragma endscop
}
