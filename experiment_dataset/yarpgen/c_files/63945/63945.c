/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += var_6;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((((arr_4 [i_0 + 1]) ? (arr_7 [6] [i_0 - 1]) : (arr_7 [i_0] [i_0 - 1]))))));
                        arr_8 [i_3] &= ((((((arr_1 [3]) != var_9))) << (16499 - 16484)));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_18 = ((16510 ? var_2 : ((((min((arr_4 [i_0]), -1730))) ? (((-1873813340 ? 16499 : -344247853752179602))) : ((909480720 ? 17 : 18446744073709551615))))));
                            var_19 = (max(var_19, (arr_11 [i_2] [i_5] [i_4] [i_2] [i_0 + 2] [i_0] [i_0 + 1])));
                        }
                        var_20 = ((!((max(-58, (max((arr_0 [i_4]), 32767)))))));

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_16 [i_4] [i_4] = var_0;
                            arr_17 [i_0] [i_1] [4] [i_4] [i_4] |= (((((-(arr_1 [i_0 - 1])))) ? (((arr_1 [i_0 - 1]) ? var_1 : (arr_7 [i_0 + 1] [i_2]))) : ((-5 ? (arr_7 [i_0 + 1] [i_4]) : (arr_7 [i_0 + 1] [1])))));
                            var_21 = ((+(max(((max((arr_7 [i_0 + 1] [i_1]), var_3))), (arr_9 [7] [i_1] [7] [1] [i_1] [i_1])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_22 = (((arr_4 [i_0 + 1]) ? ((15430776569538740414 ? (arr_19 [i_4] [i_1] [i_0 - 1]) : ((((var_6 <= (arr_6 [i_0] [i_0]))))))) : -28668));
                            var_23 = (max((min(((19188 ? var_2 : var_12)), 0)), 49036));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_24 = (arr_21 [i_4] [i_1] [i_1]);
                            var_25 = ((((arr_1 [i_0 - 1]) ? var_14 : (arr_1 [i_0 + 1]))) ^ ((max(var_0, (((var_2 * (arr_12 [i_1] [i_1] [i_8] [i_2] [i_8] [i_4]))))))));
                            var_26 = var_4;
                            var_27 = (~-27262);
                            var_28 = (max(var_28, ((min(((((max(255, 114))))), (49036 <= var_10))))));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_29 = (arr_2 [i_2] [i_0]);
                            arr_24 [i_1] [10] [i_1] [i_1] [6] |= (3 >> ((((((((arr_20 [i_0 + 1] [i_0 + 1]) ? 138 : -344247853752179602))) ? (((-(arr_10 [i_9] [i_9] [i_9] [i_9] [8] [i_9])))) : (~-2199501037680671615))) + 1326)));
                            var_30 = ((((max(0, var_5))) ? ((((((var_7 ? 17213997278706498619 : var_0)) >= (((((arr_6 [i_0] [1]) <= (arr_4 [i_2]))))))))) : ((var_14 ? (arr_12 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]) : -344247853752179616))));
                        }
                        var_31 ^= (arr_1 [i_0]);
                        var_32 = ((-((0 ? (arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_7 [i_4] [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
