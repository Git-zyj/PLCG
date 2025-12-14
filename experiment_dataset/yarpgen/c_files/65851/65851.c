/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 511;
    var_13 = (max(var_13, (var_0 >= var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 -= (min((((((-165309326077774625 ? 1 : (arr_0 [i_1])))) ? ((165309326077774602 ? 0 : -165309326077774627)) : (((min(var_3, var_7)))))), 10607));
                    var_15 = (arr_6 [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (((((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (min((arr_6 [i_4] [i_0] [i_2]), (arr_9 [i_3] [i_4] [i_2] [i_0]))))))) != 7960916672780542308));
                                var_17 = 75;
                            }
                        }
                    }
                }
                var_18 = 1;
                var_19 = (max(var_19, ((min((~18446744073709551615), ((min(59, (arr_6 [i_1] [i_1] [i_1])))))))));
                var_20 = ((~((((65535 ? 1 : 182)) | ((~(arr_1 [i_0])))))));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_21 = (min((min((arr_3 [i_5] [i_1 + 1] [i_0]), 0)), (((65250 ? 28672 : 165309326077774625)))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 -= (~var_6);
                        var_23 = (((arr_4 [i_0] [i_1 + 2] [i_6]) ? (arr_4 [i_6] [i_1 + 2] [i_5]) : var_3));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = (((arr_20 [i_0] [i_1] [i_7] [i_6] [i_7] [i_1 + 1]) || (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7] [i_1 - 1])));
                            var_25 = (((arr_20 [i_0] [i_0] [i_5] [i_6] [i_7] [i_5]) >= (~var_6)));
                        }
                    }
                    arr_22 [i_1] [0] [i_5] |= ((((((min(998840119, (arr_3 [i_0] [i_0] [i_0])))) ? var_8 : 1)) ^ (arr_4 [i_0] [i_1] [i_5])));
                    var_26 = (arr_0 [i_5]);
                }
            }
        }
    }
    var_27 = ((196 ? 1 : 215328966));
    #pragma endscop
}
